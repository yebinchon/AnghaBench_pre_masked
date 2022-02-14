
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int acpi_status ;
typedef int acpi_cpu_flags ;
struct TYPE_2__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;

acpi_status FUNC_9(void)
{
 acpi_status VAR_7;
 acpi_cpu_flags VAR_8 = 0;

 FUNC_3(VAR_6);

 FUNC_0((VAR_1, "About to write %04X to %8.8X%8.8X\n",
     VAR_0,
     FUNC_2(VAR_4.address)));

 VAR_8 = FUNC_6(VAR_3);



 VAR_7 = FUNC_5(VAR_2,
     VAR_0);
 if (FUNC_1(VAR_7)) {
  goto unlock_and_exit;
 }



 VAR_7 = FUNC_4(VAR_5, ((void*)0));

      unlock_and_exit:
 FUNC_7(VAR_3, VAR_8);
 FUNC_8(VAR_7);
}
