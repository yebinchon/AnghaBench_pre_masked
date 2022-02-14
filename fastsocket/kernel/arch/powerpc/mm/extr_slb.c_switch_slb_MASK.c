
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct mm_struct {int context; } ;
struct TYPE_2__ {unsigned long slb_cache_ptr; int context; scalar_t__* slb_cache; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct task_struct*) ;
 unsigned long FUNC_1 (struct task_struct*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 unsigned long FUNC_9 (unsigned long) ;

void FUNC_10(struct task_struct *VAR_5, struct mm_struct *VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = FUNC_0(VAR_5);
 unsigned long VAR_10 = FUNC_1(VAR_5);
 unsigned long VAR_11;







 FUNC_6();
 VAR_7 = FUNC_5()->slb_cache_ptr;
 if (!FUNC_3(VAR_0) &&
     VAR_7 <= VAR_4) {
  int VAR_12;
  asm volatile("isync" : : : "memory");
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   VAR_8 = (unsigned long)FUNC_5()->slb_cache[VAR_12]
    << VAR_1;
   VAR_8 |= FUNC_9(VAR_8)
    << VAR_3;
   VAR_8 |= VAR_2;
   asm volatile("slbie %0" : : "r" (VAR_8));
  }
  asm volatile("isync" : : : "memory");
 } else {
  FUNC_2();
 }


 if (VAR_7 == 1 || VAR_7 > VAR_4)
  asm volatile("slbie %0" : : "r" (VAR_8));

 FUNC_5()->slb_cache_ptr = 0;
 FUNC_5()->context = VAR_6->context;






 VAR_11 = 0x10000000;

 if (FUNC_7(VAR_9) || FUNC_7(VAR_10) ||
     FUNC_7(VAR_11))
  return;

 FUNC_8(VAR_9);

 if (!FUNC_4(VAR_9, VAR_10))
  FUNC_8(VAR_10);

 if (!FUNC_4(VAR_9, VAR_11) &&
     !FUNC_4(VAR_10, VAR_11))
  FUNC_8(VAR_11);
}
