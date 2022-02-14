
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ cpu_get_decrementer_func; } ;
typedef TYPE_1__ cpu_data_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

uint32_t
FUNC_4()
{
 cpu_data_t *VAR_1 = FUNC_1();
 uint32_t VAR_2;

 FUNC_0(FUNC_2() == VAR_0);

 if (VAR_1->cpu_get_decrementer_func) {
  VAR_2 = ((uint32_t (*)(void))VAR_1->cpu_get_decrementer_func)();
 } else {
  uint64_t VAR_3;

  __asm__ volatile("mrs %0, CNTP_TVAL_EL0" : "=r"(VAR_3));
  VAR_2 = (uint32_t)VAR_3;
  FUNC_0(VAR_3 == (uint64_t)VAR_2);
 }

 return VAR_2;
}
