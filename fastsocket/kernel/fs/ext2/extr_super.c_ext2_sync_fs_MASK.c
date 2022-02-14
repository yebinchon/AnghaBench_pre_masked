
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_dirt; } ;
struct ext2_super_block {int s_state; void* s_mtime; void* s_free_inodes_count; void* s_free_blocks_count; } ;
struct TYPE_2__ {struct ext2_super_block* s_es; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,struct ext2_super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct super_block*,struct ext2_super_block*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_1, int VAR_2)
{
 struct ext2_super_block *VAR_3 = FUNC_0(VAR_1)->s_es;

 FUNC_10();
 FUNC_3(VAR_1);

 if (VAR_3->s_state & FUNC_1(VAR_0)) {
  FUNC_7("setting valid to 0\n");
  VAR_3->s_state &= FUNC_1(~VAR_0);
  VAR_3->s_free_blocks_count =
   FUNC_2(FUNC_5(VAR_1));
  VAR_3->s_free_inodes_count =
   FUNC_2(FUNC_6(VAR_1));
  VAR_3->s_mtime = FUNC_2(FUNC_9());
  FUNC_8(VAR_1, VAR_3);
 } else {
  FUNC_4(VAR_1, VAR_3);
 }
 VAR_1->s_dirt = 0;
 FUNC_11();

 return 0;
}
