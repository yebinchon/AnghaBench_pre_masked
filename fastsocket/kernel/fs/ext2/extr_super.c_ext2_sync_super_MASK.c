
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_dirt; } ;
struct ext2_super_block {void* s_wtime; void* s_free_inodes_count; void* s_free_blocks_count; } ;
struct TYPE_2__ {int s_sbh; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct super_block *VAR_0, struct ext2_super_block *VAR_1)
{
 FUNC_2(VAR_0);
 VAR_1->s_free_blocks_count = FUNC_1(FUNC_3(VAR_0));
 VAR_1->s_free_inodes_count = FUNC_1(FUNC_4(VAR_0));
 VAR_1->s_wtime = FUNC_1(FUNC_5());
 FUNC_6(FUNC_0(VAR_0)->s_sbh);
 FUNC_7(FUNC_0(VAR_0)->s_sbh);
 VAR_0->s_dirt = 0;
}
