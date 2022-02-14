
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (scalar_t__) ;

void FUNC_4(struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 if (VAR_3->vm_mm && FUNC_3(VAR_3->vm_mm) != VAR_1) {
  unsigned long VAR_5;

  FUNC_2(VAR_5);
  VAR_4 &= VAR_2;
  VAR_4 |= (FUNC_3(VAR_3->vm_mm) & VAR_0);
  FUNC_0(VAR_4);
  FUNC_1(VAR_5);
 }
}
