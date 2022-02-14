
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* cpu_tlb_invalid; } ;
struct TYPE_3__ {void* cpu_tlb_invalid; } ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void
FUNC_10(void)
{
 int VAR_2 = FUNC_1();
 FUNC_7(FUNC_6() == 0 || FUNC_4() != 0);
 if (VAR_1) {
  FUNC_8();
  FUNC_0(VAR_2)->cpu_tlb_invalid = VAR_0;
  FUNC_9();
 } else {
  FUNC_2()->cpu_tlb_invalid = VAR_0;
  FUNC_3();
 }

 FUNC_5();
}
