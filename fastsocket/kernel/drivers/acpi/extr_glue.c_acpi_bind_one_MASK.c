
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ acpi_handle; } ;
struct device {int kobj; TYPE_1__ archdata; } ;
struct TYPE_9__ {int enabled; } ;
struct TYPE_8__ {scalar_t__ valid; } ;
struct TYPE_10__ {TYPE_4__ state; TYPE_3__ flags; } ;
struct TYPE_7__ {int kobj; } ;
struct acpi_device {TYPE_5__ wakeup; TYPE_2__ dev; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,struct device*) ;
 int FUNC_2 (scalar_t__,struct acpi_device**) ;
 int VAR_1 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2, acpi_handle VAR_3)
{
 struct acpi_device *VAR_4;
 acpi_status VAR_5;

 if (VAR_2->archdata.acpi_handle) {
  FUNC_3(VAR_2, "Drivers changed 'acpi_handle'\n");
  return -VAR_0;
 }
 FUNC_6(VAR_2);
 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_7(VAR_2);
  return -VAR_0;
 }
 VAR_2->archdata.acpi_handle = VAR_3;

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (!FUNC_0(VAR_5)) {
  int VAR_6;

  VAR_6 = FUNC_8(&VAR_2->kobj, &VAR_4->dev.kobj,
    "firmware_node");
  VAR_6 = FUNC_8(&VAR_4->dev.kobj, &VAR_2->kobj,
    "physical_node");
  if (VAR_4->wakeup.flags.valid) {
   FUNC_4(VAR_2, 1);
   FUNC_5(VAR_2,
      VAR_4->wakeup.state.enabled);
  }
 }

 return 0;
}
