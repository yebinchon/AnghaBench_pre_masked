
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct ext3_super_block {int dummy; } ;
typedef int journal_t ;
struct TYPE_2__ {int * s_journal; } ;


 int FUNC_0 (struct super_block*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_3 (struct super_block*,struct ext3_super_block*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;

__attribute__((used)) static void FUNC_9(struct super_block * VAR_2,
     struct ext3_super_block * VAR_3)
{
 journal_t *VAR_4 = FUNC_2(VAR_2)->s_journal;

 FUNC_5(VAR_4);
 if (FUNC_4(VAR_4) < 0)
  goto out;

 FUNC_7(VAR_2);
 if (FUNC_1(VAR_2, VAR_0) &&
     VAR_2->s_flags & VAR_1) {
  FUNC_0(VAR_2, VAR_0);
  FUNC_3(VAR_2, VAR_3, 1);
 }
 FUNC_8(VAR_2);

out:
 FUNC_6(VAR_4);
}
