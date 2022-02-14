
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {int tlbsize; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct mm_struct*) ;
 scalar_t__ FUNC_4 (int,struct mm_struct*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (struct mm_struct*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

void FUNC_17(struct vm_area_struct *VAR_5, unsigned long VAR_6,
 unsigned long VAR_7)
{
 struct mm_struct *VAR_8 = VAR_5->vm_mm;
 int VAR_9 = FUNC_9();

 if (FUNC_4(VAR_9, VAR_8) != 0) {
  unsigned long VAR_10, VAR_11;

  FUNC_0(VAR_11);
  VAR_10 = (VAR_7 - VAR_6 + (VAR_3 - 1)) >> VAR_2;
  VAR_10 = (VAR_10 + 1) >> 1;
  if (VAR_10 <= VAR_4.tlbsize/2) {
   int VAR_12 = FUNC_7();
   int VAR_13 = FUNC_3(VAR_9, VAR_8);

   VAR_6 &= (VAR_1 << 1);
   VAR_7 += ((VAR_3 << 1) - 1);
   VAR_7 &= (VAR_1 << 1);
   while (VAR_6 < VAR_7) {
    int VAR_14;

    FUNC_14(VAR_6 | VAR_13);
    VAR_6 += (VAR_3 << 1);
    FUNC_6();
    FUNC_10();
    FUNC_11();
    VAR_14 = FUNC_8();
    FUNC_15(0);
    FUNC_16(0);
    if (VAR_14 < 0)
     continue;

    FUNC_14(FUNC_2(VAR_14));
    FUNC_6();
    FUNC_12();
   }
   FUNC_13();
   FUNC_14(VAR_12);
  } else {
   FUNC_5(VAR_8, VAR_9);
  }
  VAR_0;
  FUNC_1(VAR_11);
 }
}
