
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct mm_struct {scalar_t__ context; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_8 (int) ;

void FUNC_9 (struct vm_area_struct *VAR_6,
            unsigned long VAR_7, unsigned long VAR_8)
{
 struct mm_struct *VAR_9 = VAR_6->vm_mm;
 unsigned long VAR_10;

 if (VAR_9->context == VAR_0)
  return;





 FUNC_6(VAR_10);

 if (VAR_8-VAR_7 + (VAR_3-1) <= VAR_5 << VAR_2) {
  int VAR_11 = FUNC_2();
  FUNC_8 (FUNC_0(VAR_9->context));
  VAR_7 &= VAR_1;
   if (VAR_6->vm_flags & VAR_4)
   while(VAR_7 < VAR_8) {
    FUNC_4(VAR_7);
    FUNC_3(VAR_7);
    VAR_7 += VAR_3;
   }
  else
   while(VAR_7 < VAR_8) {
    FUNC_3(VAR_7);
    VAR_7 += VAR_3;
   }

  FUNC_8(VAR_11);
 } else {
  FUNC_1(VAR_9);
 }
 FUNC_5(VAR_10);
}
