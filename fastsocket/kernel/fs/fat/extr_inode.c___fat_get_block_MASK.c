
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct msdos_sb_info {int sec_per_clus; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ mmu_private; int i_pos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct msdos_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__*,unsigned long*,int) ;
 int FUNC_5 (struct super_block*,char*,int ,scalar_t__) ;
 int FUNC_6 (struct buffer_head*,struct super_block*,scalar_t__) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static inline int FUNC_9(struct inode *VAR_1, sector_t VAR_2,
      unsigned long *VAR_3,
      struct buffer_head *VAR_4, int VAR_5)
{
 struct super_block *VAR_6 = VAR_1->i_sb;
 struct msdos_sb_info *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;
 sector_t VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_1, VAR_2, &VAR_9, &VAR_8, VAR_5);
 if (VAR_10)
  return VAR_10;
 if (VAR_9) {
  FUNC_6(VAR_4, VAR_6, VAR_9);
  *VAR_3 = FUNC_7(VAR_8, *VAR_3);
  return 0;
 }
 if (!VAR_5)
  return 0;

 if (VAR_2 != FUNC_1(VAR_1)->mmu_private >> VAR_6->s_blocksize_bits) {
  FUNC_5(VAR_6, "corrupted file size (i_pos %lld, %lld)",
   FUNC_1(VAR_1)->i_pos, FUNC_1(VAR_1)->mmu_private);
  return -VAR_0;
 }

 VAR_11 = (unsigned long)VAR_2 & (VAR_7->sec_per_clus - 1);
 if (!VAR_11) {

  VAR_10 = FUNC_3(VAR_1);
  if (VAR_10)
   return VAR_10;
 }

 VAR_8 = VAR_7->sec_per_clus - VAR_11;

 *VAR_3 = FUNC_7(VAR_8, *VAR_3);
 FUNC_1(VAR_1)->mmu_private += *VAR_3 << VAR_6->s_blocksize_bits;

 VAR_10 = FUNC_4(VAR_1, VAR_2, &VAR_9, &VAR_8, VAR_5);
 if (VAR_10)
  return VAR_10;

 FUNC_0(!VAR_9);
 FUNC_0(*VAR_3 != VAR_8);
 FUNC_8(VAR_4);
 FUNC_6(VAR_4, VAR_6, VAR_9);

 return 0;
}
