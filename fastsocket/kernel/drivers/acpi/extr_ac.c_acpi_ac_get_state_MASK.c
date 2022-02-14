
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ac {int state; TYPE_1__* device; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_ac *VAR_5)
{
 acpi_status VAR_6 = VAR_2;


 if (!VAR_5)
  return -VAR_3;

 VAR_6 = FUNC_2(VAR_5->device->handle, "_PSR", ((void*)0), &VAR_5->state);
 if (FUNC_1(VAR_6)) {
  FUNC_0((VAR_1, VAR_6, "Error reading AC Adapter state"));
  VAR_5->state = VAR_0;
  return -VAR_4;
 }

 return 0;
}
