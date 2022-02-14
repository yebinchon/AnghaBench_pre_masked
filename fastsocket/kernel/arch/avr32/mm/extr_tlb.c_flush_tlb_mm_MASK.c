
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {scalar_t__ context; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(struct mm_struct *VAR_2)
{

 if (VAR_2->context != VAR_0) {
  unsigned long VAR_3;

  FUNC_2(VAR_3);
  VAR_2->context = VAR_0;
  if (VAR_2 == VAR_1->mm)
   FUNC_0(VAR_2);
  FUNC_1(VAR_3);
 }
}
