
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {int os_semaphore; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ event; } ;
typedef int u16 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

acpi_status
FUNC_3(union acpi_operand_object *VAR_2,
     union acpi_operand_object *VAR_3)
{
 acpi_status VAR_4 = VAR_0;

 FUNC_0(VAR_1);

 if (VAR_3) {
  VAR_4 =
      FUNC_1(VAR_3->event.os_semaphore,
        (u16) VAR_2->integer.
        value);
 }

 FUNC_2(VAR_4);
}
