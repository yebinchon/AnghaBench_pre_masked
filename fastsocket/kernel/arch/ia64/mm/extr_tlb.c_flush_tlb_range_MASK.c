
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {scalar_t__ context; } ;
struct TYPE_4__ {struct mm_struct* active_mm; } ;
struct TYPE_3__ {unsigned long mask; unsigned long max_bits; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_8 (int) ;

void
FUNC_9 (struct vm_area_struct *VAR_2, unsigned long VAR_3,
   unsigned long VAR_4)
{
 struct mm_struct *VAR_5 = VAR_2->vm_mm;
 unsigned long VAR_6 = VAR_4 - VAR_3;
 unsigned long VAR_7;


 if (VAR_5 != VAR_0->active_mm) {
  VAR_5->context = 0;
  return;
 }


 VAR_7 = FUNC_1(VAR_6 + 0xfff);
 while (FUNC_8 (((1UL << VAR_7) & VAR_1.mask) == 0) &&
   (VAR_7 < VAR_1.max_bits))
  ++VAR_7;
 if (VAR_7 > VAR_1.max_bits)
  VAR_7 = VAR_1.max_bits;
 VAR_3 &= ~((1UL << VAR_7) - 1);

 FUNC_6();







 do {
  FUNC_2(VAR_3, (VAR_7<<2));
  VAR_3 += (1UL << VAR_7);
 } while (VAR_3 < VAR_4);
 FUNC_7();
 FUNC_3();
}
