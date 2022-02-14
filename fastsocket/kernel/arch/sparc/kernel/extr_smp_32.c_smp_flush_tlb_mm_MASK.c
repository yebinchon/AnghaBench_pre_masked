
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {scalar_t__ context; int mm_users; } ;
typedef int smpfunc_t ;
typedef int cpumask_t ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 scalar_t__ FUNC_0 (int (*) (struct mm_struct*)) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (struct mm_struct*) ;
 int * FUNC_7 (struct mm_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,unsigned long) ;

void FUNC_10(struct mm_struct *VAR_2)
{
 if(VAR_2->context != VAR_0) {
  cpumask_t VAR_3 = *FUNC_7(VAR_2);
  FUNC_2(FUNC_8(), VAR_3);
  if (!FUNC_5(VAR_3)) {
   FUNC_9((smpfunc_t) FUNC_0(FUNC_6), (unsigned long) VAR_2);
   if(FUNC_1(&VAR_2->mm_users) == 1 && VAR_1->active_mm == VAR_2)
    FUNC_3(FUNC_7(VAR_2),
          FUNC_4(FUNC_8()));
  }
  FUNC_6(VAR_2);
 }
}
