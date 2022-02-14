
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minimum; } ;
struct TYPE_4__ {TYPE_1__ io; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;
typedef int acpi_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static acpi_status
FUNC_0(struct acpi_resource *VAR_3, void *VAR_4)
{
 switch (VAR_3->type) {
 case 129:
  return VAR_1;

 case 128:
  VAR_2 = VAR_3->data.io.minimum;
  return VAR_1;

 default:
  return VAR_0;
 }
}
