
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_buffer {int pointer; int * member_1; int member_0; } ;
struct acpi_battery {int quirks; int rate_now; scalar_t__ update_time; int lock; TYPE_1__* device; } ;
typedef int s16 ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct acpi_battery*) ;
 int FUNC_5 (int ,char*,int *,struct acpi_buffer*) ;
 int VAR_4 ;
 int FUNC_6 (struct acpi_battery*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct acpi_battery *VAR_7)
{
 int VAR_8 = 0;
 acpi_status VAR_9 = 0;
 struct acpi_buffer VAR_10 = { VAR_0, ((void*)0) };

 if (!FUNC_4(VAR_7))
  return 0;

 if (VAR_7->update_time &&
     FUNC_11(VAR_5, VAR_7->update_time +
   FUNC_8(VAR_4)))
  return 0;

 FUNC_9(&VAR_7->lock);
 VAR_9 = FUNC_5(VAR_7->device->handle, "_BST",
          ((void*)0), &VAR_10);
 FUNC_10(&VAR_7->lock);

 if (FUNC_1(VAR_9)) {
  FUNC_0((VAR_1, VAR_9, "Evaluating _BST"));
  return -VAR_2;
 }

 VAR_8 = FUNC_6(VAR_7, VAR_10.pointer,
     VAR_6, FUNC_2(VAR_6));
 VAR_7->update_time = VAR_5;
 FUNC_7(VAR_10.pointer);

 if ((VAR_7->quirks & VAR_3) &&
     VAR_7->rate_now != -1)
  VAR_7->rate_now = FUNC_3((s16)VAR_7->rate_now);

 return VAR_8;
}
