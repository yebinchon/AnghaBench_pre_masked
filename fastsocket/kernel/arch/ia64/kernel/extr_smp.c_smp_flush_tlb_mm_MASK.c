
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mm_users; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,void (*) (void*),struct mm_struct*,int) ;

void
FUNC_9 (struct mm_struct *VAR_1)
{
 FUNC_6();

 if (FUNC_1(VAR_1 == VAR_0->active_mm && FUNC_0(&VAR_1->mm_users) == 1))
 {
  FUNC_2(VAR_1);
  FUNC_7();
  return;
 }

 FUNC_8(FUNC_5(VAR_1),
  (void (*)(void *))FUNC_2, VAR_1, 1);
 FUNC_3();
 FUNC_2(VAR_1);
 FUNC_4();
 FUNC_7();
}
