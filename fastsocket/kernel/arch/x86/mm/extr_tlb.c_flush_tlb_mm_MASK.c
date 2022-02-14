
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ mm; struct mm_struct* active_mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,struct mm_struct*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mm_struct*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(struct mm_struct *VAR_3)
{
 FUNC_5();

 if (VAR_1->active_mm == VAR_3) {
  if (VAR_1->mm)
   FUNC_3();
  else
   FUNC_2(FUNC_7());
 }
 if (FUNC_0(FUNC_4(VAR_3), FUNC_7()) < VAR_2)
  FUNC_1(FUNC_4(VAR_3), VAR_3, VAR_0);

 FUNC_6();
}
