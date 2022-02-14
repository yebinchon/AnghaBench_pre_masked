
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext3_group_desc {int bg_free_blocks_count; int bg_free_inodes_count; } ;
struct TYPE_2__ {int s_groups_count; int s_freeinodes_counter; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct ext3_group_desc* FUNC_1 (struct super_block*,int,int *) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, struct inode *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0)->s_groups_count;
 unsigned int VAR_3, VAR_4;
 struct ext3_group_desc *VAR_5, *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = -1;

 VAR_3 = FUNC_3(&FUNC_0(VAR_0)->s_freeinodes_counter);
 VAR_4 = VAR_3 / VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5 = FUNC_1 (VAR_0, VAR_7, ((void*)0));
  if (!VAR_5 || !VAR_5->bg_free_inodes_count)
   continue;
  if (FUNC_2(VAR_5->bg_free_inodes_count) < VAR_4)
   continue;
  if (!VAR_6 ||
      (FUNC_2(VAR_5->bg_free_blocks_count) >
       FUNC_2(VAR_6->bg_free_blocks_count))) {
   VAR_8 = VAR_7;
   VAR_6 = VAR_5;
  }
 }
 return VAR_8;
}
