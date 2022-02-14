
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext2_group_desc {int bg_free_blocks_count; int bg_free_inodes_count; } ;
struct TYPE_2__ {int s_groups_count; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 struct ext2_group_desc* FUNC_2 (struct super_block*,int,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, struct inode *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0)->s_groups_count;
 int VAR_3 = FUNC_1(VAR_0) / VAR_2;
 struct ext2_group_desc *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = -1;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4 = FUNC_2 (VAR_0, VAR_6, ((void*)0));
  if (!VAR_4 || !VAR_4->bg_free_inodes_count)
   continue;
  if (FUNC_3(VAR_4->bg_free_inodes_count) < VAR_3)
   continue;
  if (!VAR_5 ||
      (FUNC_3(VAR_4->bg_free_blocks_count) >
       FUNC_3(VAR_5->bg_free_blocks_count))) {
   VAR_7 = VAR_6;
   VAR_5 = VAR_4;
  }
 }
 if (!VAR_5)
  return -1;

 return VAR_7;
}
