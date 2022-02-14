
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int * pointer; } ;
struct TYPE_3__ {void* value; } ;
union acpi_object {TYPE_2__ buffer; TYPE_1__ integer; int type; } ;
typedef void* u32 ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_buffer {scalar_t__ length; int * pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

acpi_status
FUNC_1(acpi_handle VAR_3, u32 VAR_4,
  u32 VAR_5, struct acpi_buffer *VAR_6)
{
 return VAR_2;

}
