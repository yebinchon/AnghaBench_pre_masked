
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,struct mm_struct*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mm_struct*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 struct mm_struct *VAR_3 = VAR_1->mm;

 FUNC_4();

 FUNC_2();
 if (FUNC_0(FUNC_3(VAR_3), FUNC_6()) < VAR_2)
  FUNC_1(FUNC_3(VAR_3), VAR_3, VAR_0);
 FUNC_5();
}
