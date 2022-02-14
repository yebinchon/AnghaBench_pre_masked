
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct orlov_stats {void* used_dirs; void* free_blocks; void* free_inodes; } ;
struct flex_groups {int used_dirs; int free_blocks; int free_inodes; } ;
struct ext4_group_desc {int dummy; } ;
typedef size_t ext4_group_t ;
struct TYPE_2__ {struct flex_groups* s_flex_groups; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 void* FUNC_3 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_4 (struct super_block*,size_t,int *) ;
 void* FUNC_5 (struct super_block*,struct ext4_group_desc*) ;

void FUNC_6(struct super_block *VAR_0, ext4_group_t VAR_1,
         int VAR_2, struct orlov_stats *VAR_3)
{
 struct ext4_group_desc *VAR_4;
 struct flex_groups *VAR_5 = FUNC_0(VAR_0)->s_flex_groups;

 if (VAR_2 > 1) {
  VAR_3->free_inodes = FUNC_1(&VAR_5[VAR_1].free_inodes);
  VAR_3->free_blocks = FUNC_1(&VAR_5[VAR_1].free_blocks);
  VAR_3->used_dirs = FUNC_1(&VAR_5[VAR_1].used_dirs);
  return;
 }

 VAR_4 = FUNC_4(VAR_0, VAR_1, ((void*)0));
 if (VAR_4) {
  VAR_3->free_inodes = FUNC_3(VAR_0, VAR_4);
  VAR_3->free_blocks = FUNC_2(VAR_0, VAR_4);
  VAR_3->used_dirs = FUNC_5(VAR_0, VAR_4);
 } else {
  VAR_3->free_inodes = 0;
  VAR_3->free_blocks = 0;
  VAR_3->used_dirs = 0;
 }
}
