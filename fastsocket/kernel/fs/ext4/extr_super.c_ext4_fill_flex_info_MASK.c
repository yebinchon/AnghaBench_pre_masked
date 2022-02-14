
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct flex_groups {int dummy; } ;
struct ext4_sb_info {int s_log_groups_per_flex; unsigned int s_groups_count; TYPE_2__* s_flex_groups; TYPE_1__* s_es; } ;
struct ext4_group_desc {int dummy; } ;
typedef int ext4_group_t ;
struct TYPE_6__ {int used_dirs; int free_blocks; int free_inodes; } ;
struct TYPE_5__ {int s_log_groups_per_flex; int s_reserved_gdt_blocks; } ;


 int FUNC_0 (struct super_block*) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ext4_sb_info*,int) ;
 int FUNC_4 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_5 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_6 (struct super_block*,int,int *) ;
 int FUNC_7 (struct super_block*,int ,char*,int) ;
 int FUNC_8 (struct super_block*,struct ext4_group_desc*) ;
 TYPE_2__* FUNC_9 (size_t,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int ,size_t) ;
 TYPE_2__* FUNC_12 (size_t) ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_2)
{
 struct ext4_sb_info *VAR_3 = FUNC_1(VAR_2);
 struct ext4_group_desc *VAR_4 = ((void*)0);
 ext4_group_t VAR_5;
 ext4_group_t VAR_6;
 unsigned int VAR_7 = 0;
 size_t VAR_8;
 int VAR_9;

 VAR_3->s_log_groups_per_flex = VAR_3->s_es->s_log_groups_per_flex;
 if (VAR_3->s_log_groups_per_flex < 1 || VAR_3->s_log_groups_per_flex > 31) {
  VAR_3->s_log_groups_per_flex = 0;
  return 1;
 }
 VAR_7 = 1U << VAR_3->s_log_groups_per_flex;


 VAR_5 = ((VAR_3->s_groups_count + VAR_7 - 1) +
   ((FUNC_10(VAR_3->s_es->s_reserved_gdt_blocks) + 1) <<
         FUNC_0(VAR_2))) / VAR_7;
 VAR_8 = VAR_5 * sizeof(struct flex_groups);
 VAR_3->s_flex_groups = FUNC_9(VAR_8, VAR_0);
 if (VAR_3->s_flex_groups == ((void*)0)) {
  VAR_3->s_flex_groups = FUNC_12(VAR_8);
  if (VAR_3->s_flex_groups)
   FUNC_11(VAR_3->s_flex_groups, 0, VAR_8);
 }
 if (VAR_3->s_flex_groups == ((void*)0)) {
  FUNC_7(VAR_2, VAR_1, "not enough memory for "
    "%u flex groups", VAR_5);
  goto failed;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->s_groups_count; VAR_9++) {
  VAR_4 = FUNC_6(VAR_2, VAR_9, ((void*)0));

  VAR_6 = FUNC_3(VAR_3, VAR_9);
  FUNC_2(FUNC_5(VAR_2, VAR_4),
      &VAR_3->s_flex_groups[VAR_6].free_inodes);
  FUNC_2(FUNC_4(VAR_2, VAR_4),
      &VAR_3->s_flex_groups[VAR_6].free_blocks);
  FUNC_2(FUNC_8(VAR_2, VAR_4),
      &VAR_3->s_flex_groups[VAR_6].used_dirs);
 }

 return 1;
failed:
 return 0;
}
