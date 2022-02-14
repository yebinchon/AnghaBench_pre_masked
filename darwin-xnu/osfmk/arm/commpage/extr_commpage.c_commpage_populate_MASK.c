
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_address_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ clock_usec_t ;
typedef int clock_sec_t ;
struct TYPE_2__ {scalar_t__ max_mem; scalar_t__ logical_cpu_max; scalar_t__ physical_cpu_max; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_1 () ;
 int FUNC_2 (int*,scalar_t__*) ;
 scalar_t__ VAR_22 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_1__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_12 () ;
 int VAR_29 ;
 int FUNC_13 () ;
 int FUNC_14 () ;

void
FUNC_15(
 void)
{
 uint16_t VAR_30;
 int VAR_31;

 VAR_29 = FUNC_12();
 VAR_22 = (vm_address_t)VAR_5;

 *((uint16_t*)(VAR_20+VAR_14)) = (uint16_t) VAR_16;

 FUNC_3();
 FUNC_4(0, 0, 0, 0, 0);

 if (VAR_21 & VAR_24)
  VAR_30 = 32;
 else if (VAR_21 & VAR_25)
  VAR_30 = 64;
 else if (VAR_21 & VAR_23)
  VAR_30 = 128;
 else
  VAR_30 = 0;

 *((uint16_t*)(VAR_6+VAR_14)) = VAR_30;
 *((uint32_t*)(VAR_15+VAR_14)) = 1;

 FUNC_5();
 VAR_31 = FUNC_11();


 *((uint8_t*)(VAR_13+VAR_14)) = (uint8_t) VAR_26.physical_cpu_max;
 *((uint8_t*)(VAR_11+VAR_14))= (uint8_t) VAR_26.logical_cpu_max;
 *((uint64_t*)(VAR_12+VAR_14)) = VAR_26.max_mem;
 *((uint32_t*)(VAR_8+VAR_14)) = (uint32_t)VAR_31;
 *((uint32_t*)(VAR_9+VAR_14)) = (uint32_t)FUNC_0(((void*)0));
 *((uint8_t*)(VAR_19+VAR_14)) = FUNC_14();
 *((uint8_t*)(VAR_7+VAR_14)) = FUNC_13();
 *((uint8_t*)(VAR_10+VAR_14)) = (uint8_t) VAR_27;
 *((uint8_t*)(VAR_17+VAR_14)) = (uint8_t) VAR_0;
 *((uint8_t*)(VAR_18+VAR_14)) = (uint8_t) VAR_0;


 FUNC_10();
 FUNC_9(0);

 clock_sec_t VAR_32;
 clock_usec_t VAR_33;
 FUNC_2(&VAR_32, &VAR_33);
 FUNC_7(VAR_32 * VAR_2 + VAR_33);





 *((uint64_t *)(VAR_3+ VAR_14)) = 0;



 *((uint8_t *)(VAR_4+VAR_14)) = 0;


 FUNC_8();





}
