
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_inode_info {int i_da_metadata_calc_len; int i_da_metadata_calc_last_lblock; } ;
typedef int sector_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ext4_inode_info* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1,
           sector_t VAR_2)
{
 struct ext4_inode_info *VAR_3 = FUNC_2(VAR_1);
 sector_t VAR_4 = ~((sector_t)FUNC_0(VAR_1->i_sb) - 1);
 int VAR_5;

 if (VAR_2 < VAR_0)
  return 0;

 VAR_2 -= VAR_0;

 if (VAR_3->i_da_metadata_calc_len &&
     (VAR_2 & VAR_4) == VAR_3->i_da_metadata_calc_last_lblock) {
  VAR_3->i_da_metadata_calc_len++;
  return 0;
 }
 VAR_3->i_da_metadata_calc_last_lblock = VAR_2 & VAR_4;
 VAR_3->i_da_metadata_calc_len = 1;
 VAR_5 = FUNC_3(VAR_2);
 return (VAR_5 / FUNC_1(VAR_1->i_sb)) + 1;
}
