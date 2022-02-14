
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct flex_groups {int free_blocks; int free_inodes; } ;
struct ext4_sb_info {int s_blocks_per_group; int s_log_groups_per_flex; struct flex_groups* s_flex_groups; } ;
struct ext4_group_desc {int dummy; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {int i_block_group; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ext4_sb_info*) ;
 int FUNC_4 (struct ext4_sb_info*,int) ;
 scalar_t__ FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_6 (struct super_block*,int,int *) ;
 int FUNC_7 (struct super_block*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_1, struct inode *VAR_2,
      ext4_group_t *VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_1(VAR_1);
 struct ext4_group_desc *VAR_5;
 struct flex_groups *VAR_6 = VAR_4->s_flex_groups;
 ext4_group_t VAR_7 = FUNC_0(VAR_2)->i_block_group;
 ext4_group_t VAR_8 = FUNC_4(VAR_4, VAR_7);
 ext4_group_t VAR_9 = FUNC_7(VAR_1);
 int VAR_10 = FUNC_3(VAR_4);
 ext4_group_t VAR_11 = VAR_8;
 int VAR_12 = VAR_4->s_blocks_per_group * VAR_10;
 int VAR_13;
 int VAR_14;
 ext4_group_t VAR_15;
 ext4_group_t VAR_16;

 VAR_15 = (VAR_9 + VAR_10 - 1) >>
  VAR_4->s_log_groups_per_flex;

find_close_to_parent:
 VAR_13 = FUNC_2(&VAR_6[VAR_11].free_blocks);
 VAR_14 = VAR_13 * 100 / VAR_12;
 if (FUNC_2(&VAR_6[VAR_11].free_inodes) &&
     VAR_14 > VAR_0)
  goto found_flexbg;

 if (VAR_11 && VAR_11 == VAR_8) {
  VAR_11--;
  goto find_close_to_parent;
 }

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  if (VAR_16 == VAR_8 || VAR_16 == VAR_8 - 1)
   continue;

  VAR_13 = FUNC_2(&VAR_6[VAR_16].free_blocks);
  VAR_14 = VAR_13 * 100 / VAR_12;

  if (VAR_14 > VAR_0 &&
      (FUNC_2(&VAR_6[VAR_16].free_inodes))) {
   VAR_11 = VAR_16;
   goto found_flexbg;
  }

  if ((FUNC_2(&VAR_6[VAR_11].free_inodes) == 0) ||
      ((FUNC_2(&VAR_6[VAR_16].free_blocks) >
        FUNC_2(&VAR_6[VAR_11].free_blocks)) &&
       FUNC_2(&VAR_6[VAR_16].free_inodes)))
   VAR_11 = VAR_16;
 }

 if (!FUNC_2(&VAR_6[VAR_11].free_inodes) ||
     !FUNC_2(&VAR_6[VAR_11].free_blocks))
  return -1;

found_flexbg:
 for (VAR_16 = VAR_11 * VAR_10; VAR_16 < VAR_9 &&
       VAR_16 < (VAR_11 + 1) * VAR_10; VAR_16++) {
  VAR_5 = FUNC_6(VAR_1, VAR_16, ((void*)0));
  if (FUNC_5(VAR_1, VAR_5)) {
   *VAR_3 = VAR_16;
   goto out;
  }
 }

 return -1;
out:
 return 0;
}
