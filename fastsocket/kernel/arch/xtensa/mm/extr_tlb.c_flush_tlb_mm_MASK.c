
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {scalar_t__ context; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct mm_struct*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct mm_struct *VAR_1)
{
 if (VAR_1 == VAR_0->active_mm) {
  int VAR_2;
  FUNC_3(VAR_2);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  FUNC_2(VAR_2);
 }
 else
  VAR_1->context = 0;
}
