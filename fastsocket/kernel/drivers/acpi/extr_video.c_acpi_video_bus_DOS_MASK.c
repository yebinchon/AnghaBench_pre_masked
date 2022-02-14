
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_video_bus {int dos_setting; TYPE_2__* device; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
typedef int acpi_integer ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static int
FUNC_1(struct acpi_video_bus *VAR_1, int VAR_2, int VAR_3)
{
 acpi_integer VAR_4 = 0;
 union acpi_object VAR_5 = { VAR_0 };
 struct acpi_object_list VAR_6 = { 1, &VAR_5 };


 if (VAR_2 < 0 || VAR_2 > 3 || VAR_3 < 0 || VAR_3 > 1) {
  VAR_4 = -1;
  goto Failed;
 }
 VAR_5 = (VAR_3 << 2) | VAR_2;
 VAR_1->dos_setting = VAR_5;
 FUNC_0(VAR_1->device->handle, "_DOS", &VAR_6, ((void*)0));

      Failed:
 return VAR_4;
}
