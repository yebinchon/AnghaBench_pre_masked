
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {unsigned long tlbsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct mm_struct*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (struct mm_struct*,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,int,unsigned long,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

void FUNC_12(struct vm_area_struct *VAR_6, unsigned long VAR_7,
      unsigned long VAR_8)
{
 struct mm_struct *VAR_9 = VAR_6->vm_mm;
 int VAR_10 = FUNC_7();

 if (FUNC_0(VAR_10, VAR_9) != 0) {
  unsigned long VAR_11, VAR_12;





  FUNC_3(VAR_12);
  VAR_11 = (VAR_8 - VAR_7 + (VAR_4 - 1)) >> VAR_3;
  if (VAR_11 <= VAR_5.tlbsize) {
   int VAR_13 = FUNC_5() & VAR_0;
   int VAR_14 = FUNC_0(VAR_10, VAR_9) & VAR_0;

   VAR_7 &= VAR_2;
   VAR_8 += VAR_4 - 1;
   VAR_8 &= VAR_2;
   while (VAR_7 < VAR_8) {
    int VAR_15;

    FUNC_10(VAR_7 | VAR_14);
    VAR_7 += VAR_4;
    FUNC_8();
    VAR_15 = FUNC_6();
    FUNC_11(0);
    FUNC_10(VAR_1);
    if (VAR_15 < 0)
     continue;
    FUNC_9();
   }
   FUNC_10(VAR_13);
  } else {
   FUNC_1(VAR_9, VAR_10);
  }
  FUNC_2(VAR_12);
 }
}
