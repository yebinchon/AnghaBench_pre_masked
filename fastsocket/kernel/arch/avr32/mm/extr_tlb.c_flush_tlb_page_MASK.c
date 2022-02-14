
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long context; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 TYPE_2__* VAR_4 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(struct vm_area_struct *VAR_5, unsigned long VAR_6)
{
 if (VAR_5->vm_mm && VAR_5->vm_mm->context != VAR_2) {
  unsigned long VAR_7, VAR_8;
  unsigned long VAR_9 = VAR_1;

  VAR_8 = VAR_5->vm_mm->context & VAR_0;
  VAR_6 &= VAR_3;

  FUNC_3(VAR_7);
  if (VAR_5->vm_mm != VAR_4->mm) {
   VAR_9 = FUNC_1();
   FUNC_4(VAR_8);
  }

  FUNC_0(VAR_8, VAR_6);

  if (VAR_9 != VAR_1)
   FUNC_4(VAR_9);
  FUNC_2(VAR_7);
 }
}
