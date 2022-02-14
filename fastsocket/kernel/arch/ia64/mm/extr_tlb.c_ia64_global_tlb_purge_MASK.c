
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int FUNC_0 (struct mm_struct*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

void
FUNC_6 (struct mm_struct *VAR_4, unsigned long VAR_5,
         unsigned long VAR_6, unsigned long VAR_7)
{
 struct mm_struct *VAR_8 = VAR_0->active_mm;

 VAR_3 = 1;

 if (VAR_4 != VAR_8) {

  if (VAR_4 && VAR_8) {
   FUNC_0(VAR_4);
  } else {
   FUNC_2();
   return;
  }
 }

 if (VAR_1)
  FUNC_1(&VAR_2);

 do {



  FUNC_3(VAR_5, (VAR_7 << 2));
  FUNC_4();
  VAR_5 += (1UL << VAR_7);
 } while (VAR_5 < VAR_6);

 if (VAR_1)
  FUNC_5(&VAR_2);

        if (VAR_4 != VAR_8) {
                FUNC_0(VAR_8);
        }
}
