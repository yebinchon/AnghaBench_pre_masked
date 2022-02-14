
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct ext4_sb_info {int s_groups_count; TYPE_1__* s_es; int s_itb_per_group; } ;
struct ext4_group_desc {int bg_flags; int bg_checksum; } ;
typedef int ext4_group_t ;
typedef int ext4_fsblk_t ;
struct TYPE_3__ {int s_free_inodes_count; int s_first_data_block; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 struct ext4_group_desc* FUNC_11 (struct super_block*,int,int *) ;
 int FUNC_12 (struct ext4_sb_info*,int,struct ext4_group_desc*) ;
 int FUNC_13 (struct ext4_sb_info*,int,struct ext4_group_desc*) ;
 int FUNC_14 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_15 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_16 (struct super_block*,int) ;
 int FUNC_17 (struct super_block*,int ,char*,int,int,...) ;
 int FUNC_18 (struct super_block*,int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct super_block *VAR_4,
      ext4_group_t *VAR_5)
{
 struct ext4_sb_info *VAR_6 = FUNC_2(VAR_4);
 ext4_fsblk_t VAR_7 = FUNC_20(VAR_6->s_es->s_first_data_block);
 ext4_fsblk_t VAR_8;
 ext4_fsblk_t VAR_9;
 ext4_fsblk_t VAR_10;
 ext4_fsblk_t VAR_11;
 int VAR_12 = 0;
 ext4_group_t VAR_13, VAR_14 = VAR_6->s_groups_count;

 if (FUNC_1(VAR_4, VAR_1))
  VAR_12 = 1;

 FUNC_9("Checking group descriptors");

 for (VAR_13 = 0; VAR_13 < VAR_6->s_groups_count; VAR_13++) {
  struct ext4_group_desc *VAR_15 = FUNC_11(VAR_4, VAR_13, ((void*)0));

  if (VAR_13 == VAR_6->s_groups_count - 1 || VAR_12)
   VAR_8 = FUNC_6(VAR_6->s_es) - 1;
  else
   VAR_8 = VAR_7 +
    (FUNC_0(VAR_4) - 1);

  if ((VAR_14 == VAR_6->s_groups_count) &&
     !(VAR_15->bg_flags & FUNC_3(VAR_0)))
   VAR_14 = VAR_13;

  VAR_9 = FUNC_5(VAR_4, VAR_15);
  if (VAR_9 < VAR_7 || VAR_9 > VAR_8) {
   FUNC_17(VAR_4, VAR_2, "ext4_check_descriptors: "
          "Block bitmap for group %u not in group "
          "(block %llu)!", VAR_13, VAR_9);
   return 0;
  }
  VAR_10 = FUNC_14(VAR_4, VAR_15);
  if (VAR_10 < VAR_7 || VAR_10 > VAR_8) {
   FUNC_17(VAR_4, VAR_2, "ext4_check_descriptors: "
          "Inode bitmap for group %u not in group "
          "(block %llu)!", VAR_13, VAR_10);
   return 0;
  }
  VAR_11 = FUNC_15(VAR_4, VAR_15);
  if (VAR_11 < VAR_7 ||
      VAR_11 + VAR_6->s_itb_per_group - 1 > VAR_8) {
   FUNC_17(VAR_4, VAR_2, "ext4_check_descriptors: "
          "Inode table for group %u not in group "
          "(block %llu)!", VAR_13, VAR_11);
   return 0;
  }
  FUNC_16(VAR_4, VAR_13);
  if (!FUNC_13(VAR_6, VAR_13, VAR_15)) {
   FUNC_17(VAR_4, VAR_2, "ext4_check_descriptors: "
     "Checksum for group %u failed (%u!=%u)",
     VAR_13, FUNC_19(FUNC_12(VAR_6, VAR_13,
         VAR_15)), FUNC_19(VAR_15->bg_checksum));
   if (!(VAR_4->s_flags & VAR_3)) {
    FUNC_18(VAR_4, VAR_13);
    return 0;
   }
  }
  FUNC_18(VAR_4, VAR_13);
  if (!VAR_12)
   VAR_7 += FUNC_0(VAR_4);
 }
 if (((void*)0) != VAR_5)
  *VAR_5 = VAR_14;

 FUNC_10(VAR_6->s_es, FUNC_7(VAR_4));
 VAR_6->s_es->s_free_inodes_count =FUNC_4(FUNC_8(VAR_4));
 return 1;
}
