
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_video_device {TYPE_2__* dev; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int
FUNC_1(struct acpi_video_device *VAR_1, int VAR_2)
{
 int VAR_3;
 union acpi_object VAR_4 = { VAR_0 };
 struct acpi_object_list VAR_5 = { 1, &VAR_4 };
 unsigned long long VAR_6;


 VAR_4 = VAR_2;
 VAR_3 = FUNC_0(VAR_1->dev->handle, "_DSS", &VAR_5, &VAR_6);

 return VAR_3;
}
