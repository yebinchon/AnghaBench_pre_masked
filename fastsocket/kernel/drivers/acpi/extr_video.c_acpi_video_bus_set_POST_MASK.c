
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_video_bus {TYPE_2__* device; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct TYPE_4__ {int handle; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int
FUNC_2(struct acpi_video_bus *VAR_3, unsigned long VAR_4)
{
 int VAR_5;
 unsigned long long VAR_6;
 union acpi_object VAR_7 = { VAR_0 };
 struct acpi_object_list VAR_8 = { 1, &VAR_7 };


 VAR_7 = VAR_4;

 VAR_5 = FUNC_1(VAR_3->device->handle, "_SPD", &VAR_8, &VAR_6);
 if (FUNC_0(VAR_5))
  VAR_5 = VAR_6 ? (-VAR_2) : (VAR_1);

 return VAR_5;
}
