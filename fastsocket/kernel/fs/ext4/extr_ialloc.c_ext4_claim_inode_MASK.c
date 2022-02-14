
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {TYPE_1__* s_flex_groups; scalar_t__ s_log_groups_per_flex; } ;
struct ext4_group_info {int alloc_sem; } ;
struct ext4_group_desc {int bg_flags; int bg_checksum; } ;
struct buffer_head {int b_data; } ;
typedef unsigned long ext4_group_t ;
struct TYPE_2__ {int used_dirs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 unsigned long FUNC_2 (struct super_block*) ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_9 (struct ext4_sb_info*,unsigned long) ;
 int FUNC_10 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_11 (struct super_block*,struct ext4_group_desc*,int) ;
 struct ext4_group_desc* FUNC_12 (struct super_block*,unsigned long,int *) ;
 struct ext4_group_info* FUNC_13 (struct super_block*,unsigned long) ;
 int FUNC_14 (struct ext4_sb_info*,unsigned long,struct ext4_group_desc*) ;
 unsigned long FUNC_15 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_16 (struct super_block*,struct ext4_group_desc*,unsigned long) ;
 int FUNC_17 (struct super_block*,unsigned long) ;
 scalar_t__ FUNC_18 (unsigned long,int ) ;
 int FUNC_19 (struct super_block*,unsigned long) ;
 int FUNC_20 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_21 (struct super_block*,struct ext4_group_desc*,int) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct super_block *VAR_2,
   struct buffer_head *VAR_3,
   unsigned long VAR_4, ext4_group_t VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9;
 struct ext4_sb_info *VAR_10 = FUNC_3(VAR_2);
 struct ext4_group_info *VAR_11 = FUNC_13(VAR_2, VAR_5);
 struct ext4_group_desc *VAR_12 = FUNC_12(VAR_2, VAR_5, ((void*)0));
 FUNC_7(&VAR_11->alloc_sem);
 FUNC_17(VAR_2, VAR_5);
 if (FUNC_18(VAR_4, VAR_3->b_data)) {

  VAR_8 = 1;
  goto err_ret;
 }
 VAR_4++;
 if ((VAR_5 == 0 && VAR_4 < FUNC_0(VAR_2)) ||
   VAR_4 > FUNC_2(VAR_2)) {
  FUNC_19(VAR_2, VAR_5);
  FUNC_22(&VAR_11->alloc_sem);
  FUNC_8(VAR_2, "reserved inode or inode > inodes count - "
      "block_group = %u, inode=%lu", VAR_5,
      VAR_4 + VAR_5 * FUNC_2(VAR_2));
  return 1;
 }


 if (FUNC_1(VAR_2, VAR_1)) {

  if (VAR_12->bg_flags & FUNC_6(VAR_0)) {
   VAR_12->bg_flags &= FUNC_6(~VAR_0);







   VAR_7 = 0;
  } else {
   VAR_7 = FUNC_2(VAR_2) -
    FUNC_15(VAR_2, VAR_12);
  }







  if (VAR_4 > VAR_7)
   FUNC_16(VAR_2, VAR_12,
     (FUNC_2(VAR_2) - VAR_4));
 }
 VAR_9 = FUNC_10(VAR_2, VAR_12) - 1;
 FUNC_11(VAR_2, VAR_12, VAR_9);
 if (FUNC_4(VAR_6)) {
  VAR_9 = FUNC_20(VAR_2, VAR_12) + 1;
  FUNC_21(VAR_2, VAR_12, VAR_9);
  if (VAR_10->s_log_groups_per_flex) {
   ext4_group_t VAR_13 = FUNC_9(VAR_10, VAR_5);

   FUNC_5(&VAR_10->s_flex_groups[VAR_13].used_dirs);
  }
 }
 VAR_12->bg_checksum = FUNC_14(VAR_10, VAR_5, VAR_12);
err_ret:
 FUNC_19(VAR_2, VAR_5);
 FUNC_22(&VAR_11->alloc_sem);
 return VAR_8;
}
