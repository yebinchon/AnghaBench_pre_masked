
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_super_block {int s_free_inodes_count; } ;
struct ext3_group_desc {int bg_free_inodes_count; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_groups_count; struct ext3_super_block* s_es; } ;


 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (struct buffer_head*,int) ;
 struct ext3_group_desc* FUNC_5 (struct super_block*,int,int *) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,unsigned long,unsigned long) ;
 struct buffer_head* FUNC_9 (struct super_block*,int) ;

unsigned long FUNC_10 (struct super_block * VAR_0)
{
 unsigned long VAR_1;
 struct ext3_group_desc *VAR_2;
 int VAR_3;
 VAR_1 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0)->s_groups_count; VAR_3++) {
  VAR_2 = FUNC_5 (VAR_0, VAR_3, ((void*)0));
  if (!VAR_2)
   continue;
  VAR_1 += FUNC_6(VAR_2->bg_free_inodes_count);
  FUNC_3();
 }
 return VAR_1;

}
