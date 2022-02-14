
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int context; } ;
struct TYPE_4__ {struct mm_struct* active_mm; } ;
struct TYPE_3__ {int context; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct mm_struct *VAR_2 = VAR_1;
 unsigned long VAR_3;

 if (VAR_2 != VAR_0->active_mm)
  return;


 FUNC_0()->context = VAR_0->active_mm->context;

 FUNC_2(VAR_3);
 FUNC_3();
 FUNC_1(VAR_3);
}
