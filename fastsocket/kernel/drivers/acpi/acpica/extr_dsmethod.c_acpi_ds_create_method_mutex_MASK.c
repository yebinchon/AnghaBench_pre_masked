
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {union acpi_operand_object* mutex; int sync_level; } ;
struct TYPE_3__ {int sync_level; int os_mutex; } ;
union acpi_operand_object {TYPE_2__ method; TYPE_1__ mutex; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 union acpi_operand_object* FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static acpi_status
FUNC_5(union acpi_operand_object *VAR_4)
{
 union acpi_operand_object *VAR_5;
 acpi_status VAR_6;

 FUNC_1(VAR_3);



 VAR_5 = FUNC_3(VAR_0);
 if (!VAR_5) {
  FUNC_4(VAR_1);
 }



 VAR_6 = FUNC_2(&VAR_5->mutex.os_mutex);
 if (FUNC_0(VAR_6)) {
  FUNC_4(VAR_6);
 }

 VAR_5->mutex.sync_level = VAR_4->method.sync_level;
 VAR_4->method.mutex = VAR_5;
 FUNC_4(VAR_2);
}
