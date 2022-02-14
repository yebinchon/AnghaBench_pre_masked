
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ cpu_tlb_invalid; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(boolean_t VAR_0) {
 FUNC_2(FUNC_6() == 0 || FUNC_4() != 0);

 if (VAR_0) {
  FUNC_1();
 } else {
  FUNC_0();
  FUNC_5();
  if (FUNC_3()->cpu_tlb_invalid)
   FUNC_7();
 }
}
