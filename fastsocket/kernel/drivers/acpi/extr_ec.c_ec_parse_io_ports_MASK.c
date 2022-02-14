
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ minimum; } ;
struct TYPE_3__ {TYPE_2__ io; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
struct acpi_ec {scalar_t__ data_addr; scalar_t__ command_addr; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static acpi_status
FUNC_0(struct acpi_resource *VAR_3, void *VAR_4)
{
 struct acpi_ec *VAR_5 = VAR_4;

 if (VAR_3->type != VAR_0)
  return VAR_2;






 if (VAR_5->data_addr == 0)
  VAR_5->data_addr = VAR_3->data.io.minimum;
 else if (VAR_5->command_addr == 0)
  VAR_5->command_addr = VAR_3->data.io.minimum;
 else
  return VAR_1;

 return VAR_2;
}
