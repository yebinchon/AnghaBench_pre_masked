
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_inode_info {int i_da_metadata_calc_len; scalar_t__ i_da_metadata_calc_last_lblock; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int s_blocksize; } ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

int FUNC_2(struct inode *VAR_0, sector_t VAR_1)
{
 struct ext4_inode_info *VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4 = 0;

 VAR_3 = ((VAR_0->i_sb->s_blocksize - sizeof(struct ext4_extent_header))
  / sizeof(struct ext4_extent_idx));
 if (VAR_2->i_da_metadata_calc_len &&
     VAR_2->i_da_metadata_calc_last_lblock+1 == VAR_1) {
  if ((VAR_2->i_da_metadata_calc_len % VAR_3) == 0)
   VAR_4++;
  if ((VAR_2->i_da_metadata_calc_len % (VAR_3*VAR_3)) == 0)
   VAR_4++;
  if ((VAR_2->i_da_metadata_calc_len % (VAR_3*VAR_3*VAR_3)) == 0) {
   VAR_4++;
   VAR_2->i_da_metadata_calc_len = 0;
  } else
   VAR_2->i_da_metadata_calc_len++;
  VAR_2->i_da_metadata_calc_last_lblock++;
  return VAR_4;
 }





 VAR_2->i_da_metadata_calc_len = 1;
 VAR_2->i_da_metadata_calc_last_lblock = VAR_1;
 return FUNC_1(VAR_0) + 1;
}
