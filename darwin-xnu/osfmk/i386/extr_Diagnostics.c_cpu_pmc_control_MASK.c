
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cpu_fixed_pmcs_enabled; } ;
typedef TYPE_1__ cpu_data_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(void *VAR_1) {

 boolean_t VAR_2 = *(boolean_t *)VAR_1;
 cpu_data_t *VAR_3 = FUNC_0();

 if (VAR_2) {
  FUNC_3(0x38F, 0x70000000FULL);
  FUNC_3(0x38D, 0x333);
  FUNC_2(FUNC_1() | VAR_0);

 } else {
  FUNC_3(0x38F, 0);
  FUNC_3(0x38D, 0);
  FUNC_2((FUNC_1() & ~VAR_0));
 }
 VAR_3->cpu_fixed_pmcs_enabled = VAR_2;



}
