
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_6__ {scalar_t__ cpu_hibernate; } ;
typedef TYPE_1__ cpu_data_t ;
typedef scalar_t__ boolean_t ;
typedef int acpi_sleep_callback ;
typedef void acpi_hibernate_callback_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,void*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 () ;
 scalar_t__ VAR_10 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (scalar_t__,int *,int,scalar_t__) ;
 int FUNC_16 (char*,scalar_t__,...) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (char*,scalar_t__,unsigned int) ;
 int FUNC_26 () ;
 scalar_t__ FUNC_27 (unsigned int) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 unsigned int VAR_12 ;
 int FUNC_32 () ;
 int FUNC_33 (scalar_t__) ;
 int FUNC_34 () ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_35 () ;
 int FUNC_36 (scalar_t__) ;
 int FUNC_37 () ;
 scalar_t__ VAR_16 ;
 int FUNC_38 (scalar_t__) ;
 scalar_t__ FUNC_39 () ;

void
FUNC_40(acpi_sleep_callback VAR_17, void *VAR_18)
{



 boolean_t VAR_19;
 cpu_data_t *VAR_20 = FUNC_8();
 unsigned int VAR_21;
 kern_return_t VAR_22;
 unsigned int VAR_23;
 uint64_t VAR_24;
 uint64_t VAR_25 = 0;
 uint64_t VAR_26 = 0;

 VAR_23 = FUNC_6();
 FUNC_16("acpi_sleep_kernel hib=%d, cpu=%d\n", VAR_20->cpu_hibernate,
   VAR_23);


 for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21 += 1) {
  if (VAR_21 == VAR_23)
   continue;
  VAR_22 = FUNC_27(VAR_21);
  if (VAR_22 != VAR_4)
   FUNC_25("Error %d trying to transition CPU %d to OFF",
         VAR_22, VAR_21);
 }


 FUNC_19();
 FUNC_31();
 FUNC_5();

 FUNC_2(FUNC_1(VAR_2, 0) | VAR_1);

 VAR_13 = VAR_11;
 VAR_11 = 0;

 VAR_7 = FUNC_20();
 if (VAR_3 == VAR_10)
  FUNC_24();







 {
  VAR_19 = VAR_3;
 }


 FUNC_7(FUNC_8());
 FUNC_35();
 FUNC_29();



 if (FUNC_18())
  FUNC_17();
 VAR_25 += FUNC_20() - VAR_24;

 FUNC_32();
 VAR_11 = VAR_13;

 if (VAR_11 == 0) {
  if (VAR_16) {
   VAR_24 = FUNC_20();
   FUNC_15(VAR_16, ((void*)0), VAR_15 != 0, VAR_5);
   VAR_26 += FUNC_20() - VAR_24;
  }
 }
 VAR_24 = FUNC_20();


 FUNC_12();
 FUNC_5();

 FUNC_0();
 FUNC_2(FUNC_1(VAR_2, 0) | VAR_0, VAR_24, VAR_25,
   VAR_26, VAR_8);


 FUNC_28(FUNC_8());


 FUNC_30();


 FUNC_34();
}
