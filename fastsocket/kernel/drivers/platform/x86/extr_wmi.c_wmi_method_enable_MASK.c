
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct guid_block {int notify_id; } ;
struct wmi_block {int handle; struct guid_block gblock; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static acpi_status FUNC_2(struct wmi_block *VAR_4, int VAR_5)
{
 struct guid_block *VAR_6 = ((void*)0);
 char VAR_7[5];
 struct acpi_object_list VAR_8;
 union acpi_object VAR_9[1];
 acpi_status VAR_10;
 acpi_handle VAR_11;

 VAR_6 = &VAR_4->gblock;
 VAR_11 = VAR_4->handle;

 if (!VAR_6)
  return VAR_1;

 VAR_8.count = 1;
 VAR_8.pointer = VAR_9;
 VAR_9[0].type = VAR_0;
 VAR_9[0].integer.value = VAR_5;

 FUNC_1(VAR_7, 5, "WE%02X", VAR_6->notify_id);
 VAR_10 = FUNC_0(VAR_11, VAR_7, &VAR_8, ((void*)0));

 if (VAR_10 != VAR_3 && VAR_10 != VAR_2)
  return VAR_10;
 else
  return VAR_3;
}
