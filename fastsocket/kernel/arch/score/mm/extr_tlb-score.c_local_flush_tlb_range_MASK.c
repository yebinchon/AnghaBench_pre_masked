
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {unsigned long context; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10(struct vm_area_struct *VAR_7, unsigned long VAR_8,
 unsigned long VAR_9)
{
 struct mm_struct *VAR_10 = VAR_7->vm_mm;
 unsigned long VAR_11 = VAR_10->context;
 if (VAR_10->context != 0) {
  unsigned long VAR_12;
  int VAR_13;

  FUNC_3(VAR_12);
  VAR_13 = (VAR_9 - VAR_8 + (VAR_4 - 1)) >> VAR_3;
  if (VAR_13 <= VAR_5) {
   int VAR_14 = FUNC_5() & VAR_0;
   int VAR_15 = VAR_11 & VAR_0;

   VAR_8 &= VAR_2;
   VAR_9 += (VAR_4 - 1);
   VAR_9 &= VAR_2;
   while (VAR_8 < VAR_9) {
    int VAR_16;

    FUNC_6(VAR_8 | VAR_15);
    VAR_8 += VAR_4;
    FUNC_0();
    FUNC_7();
    VAR_16 = FUNC_9();
    FUNC_4(0);
    FUNC_6(VAR_1);
    if (VAR_16 < 0)
     continue;
    FUNC_8();
   }
   FUNC_6(VAR_14);
  } else {

   FUNC_1(VAR_10);
   if (VAR_10 == VAR_6->active_mm)
    FUNC_6(VAR_11 & VAR_0);
  }
  FUNC_2(VAR_12);
 }
}
