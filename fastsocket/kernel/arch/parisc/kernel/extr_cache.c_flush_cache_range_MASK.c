
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; } ;
struct TYPE_2__ {int context; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

void FUNC_5(struct vm_area_struct *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 FUNC_0(!VAR_0->vm_mm->context);

 VAR_3 = FUNC_4(3);
 if (VAR_0->vm_mm->context == VAR_3) {
  FUNC_2(VAR_1,VAR_2);
  FUNC_3(VAR_1,VAR_2);
 } else {
  FUNC_1();
 }
}
