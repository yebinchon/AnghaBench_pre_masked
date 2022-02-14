
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
typedef int journal_t ;
struct TYPE_2__ {int * s_journal; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(struct super_block *VAR_1)
{
 journal_t *VAR_2;
 int VAR_3;

 if (VAR_1->s_flags & VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_1)->s_journal;
 VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
