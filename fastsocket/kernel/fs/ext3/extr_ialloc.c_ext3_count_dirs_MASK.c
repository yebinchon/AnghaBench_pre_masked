
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_group_desc {int bg_used_dirs_count; } ;
struct TYPE_2__ {int s_groups_count; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct ext3_group_desc* FUNC_1 (struct super_block*,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;

unsigned long FUNC_3 (struct super_block * VAR_0)
{
 unsigned long VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0)->s_groups_count; VAR_2++) {
  struct ext3_group_desc *VAR_3 = FUNC_1 (VAR_0, VAR_2, ((void*)0));
  if (!VAR_3)
   continue;
  VAR_1 += FUNC_2(VAR_3->bg_used_dirs_count);
 }
 return VAR_1;
}
