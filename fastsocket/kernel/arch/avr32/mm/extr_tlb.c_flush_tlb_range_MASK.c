
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {unsigned long context; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct mm_struct*) ;
 TYPE_1__* VAR_7 ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

void FUNC_6(struct vm_area_struct *VAR_8, unsigned long VAR_9,
       unsigned long VAR_10)
{
 struct mm_struct *VAR_11 = VAR_8->vm_mm;

 if (VAR_11->context != VAR_3) {
  unsigned long VAR_12;
  int VAR_13;

  FUNC_4(VAR_12);
  VAR_13 = (VAR_10 - VAR_9 + (VAR_6 - 1)) >> VAR_5;

  if (VAR_13 > (VAR_1 / 4)) {
   VAR_11->context = VAR_3;
   if (VAR_11 == VAR_7->mm)
    FUNC_1(VAR_11);
  } else {
   unsigned long VAR_14;
   unsigned long VAR_15;

   VAR_14 = VAR_11->context & VAR_0;
   VAR_15 = VAR_2;

   VAR_9 &= VAR_4;
   VAR_10 += (VAR_6 - 1);
   VAR_10 &= VAR_4;

   if (VAR_11 != VAR_7->mm) {
    VAR_15 = FUNC_2();
    FUNC_5(VAR_14);
   }

   while (VAR_9 < VAR_10) {
    FUNC_0(VAR_14, VAR_9);
    VAR_9 += VAR_6;
   }
   if (VAR_15 != VAR_2)
    FUNC_5(VAR_15);
  }
  FUNC_3(VAR_12);
 }
}
