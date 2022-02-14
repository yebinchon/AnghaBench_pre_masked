
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_mm; } ;
struct TYPE_2__ {int mm; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned int FUNC_7 () ;

void FUNC_8(struct vm_area_struct *VAR_4, unsigned long VAR_5)
{
 unsigned int VAR_6 = FUNC_7();

 if (VAR_4->vm_mm && FUNC_1(VAR_6, VAR_4->vm_mm) != VAR_1) {
  unsigned long VAR_7;
  unsigned long VAR_8;
  unsigned long VAR_9 = VAR_0;

  VAR_8 = FUNC_0(VAR_6, VAR_4->vm_mm);
  VAR_5 &= VAR_2;

  FUNC_5(VAR_7);
  if (VAR_4->vm_mm != VAR_3->mm) {
   VAR_9 = FUNC_2();
   FUNC_6(VAR_8);
  }
  FUNC_3(VAR_8, VAR_5);
  if (VAR_9 != VAR_0)
   FUNC_6(VAR_9);
  FUNC_4(VAR_7);
 }
}
