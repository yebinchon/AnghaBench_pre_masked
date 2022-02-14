
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_dirt; } ;
struct ext2_group_desc {int bg_used_dirs_count; int bg_free_inodes_count; } ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {int s_dirs_counter; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,char*,int) ;
 struct ext2_group_desc* FUNC_2 (struct super_block*,int,struct buffer_head**) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_0, int VAR_1, int VAR_2)
{
 struct ext2_group_desc * VAR_3;
 struct buffer_head *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_4);
 if (!VAR_3) {
  FUNC_1(VAR_0, "ext2_release_inode",
   "can't get descriptor for group %d", VAR_1);
  return;
 }

 FUNC_7(FUNC_6(FUNC_0(VAR_0), VAR_1));
 FUNC_3(&VAR_3->bg_free_inodes_count, 1);
 if (VAR_2)
  FUNC_3(&VAR_3->bg_used_dirs_count, -1);
 FUNC_8(FUNC_6(FUNC_0(VAR_0), VAR_1));
 if (VAR_2)
  FUNC_5(&FUNC_0(VAR_0)->s_dirs_counter);
 VAR_0->s_dirt = 1;
 FUNC_4(VAR_4);
}
