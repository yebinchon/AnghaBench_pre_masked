
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_buffer {int pointer; int * member_1; int member_0; } ;
struct acpi_battery {int lock; TYPE_1__* device; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct acpi_battery*) ;
 int FUNC_4 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_5 (struct acpi_battery*,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct acpi_battery *VAR_5)
{
 int VAR_6 = -VAR_2;
 acpi_status VAR_7 = 0;
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0) };

 if (!FUNC_3(VAR_5))
  return 0;
 FUNC_7(&VAR_5->lock);
 VAR_7 = FUNC_4(VAR_5->device->handle, "_BIF",
          ((void*)0), &VAR_8);
 FUNC_8(&VAR_5->lock);

 if (FUNC_1(VAR_7)) {
  FUNC_0((VAR_1, VAR_7, "Evaluating _BIF"));
  return -VAR_3;
 }

 VAR_6 = FUNC_5(VAR_5, VAR_8.pointer,
     VAR_4, FUNC_2(VAR_4));
 FUNC_6(VAR_8.pointer);
 return VAR_6;
}
