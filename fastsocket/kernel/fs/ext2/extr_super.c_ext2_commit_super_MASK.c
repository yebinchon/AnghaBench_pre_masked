
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_dirt; } ;
struct ext2_super_block {int s_wtime; } ;
struct TYPE_2__ {int s_sbh; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (struct super_block * VAR_0,
          struct ext2_super_block * VAR_1)
{
 FUNC_2(VAR_0);
 VAR_1->s_wtime = FUNC_1(FUNC_3());
 FUNC_4(FUNC_0(VAR_0)->s_sbh);
 VAR_0->s_dirt = 0;
}
