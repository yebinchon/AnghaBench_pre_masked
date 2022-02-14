
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ power; int power_setup_done; } ;
struct acpi_processor {TYPE_2__ power; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_processor*) ;
 int FUNC_1 (struct acpi_processor*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;

int FUNC_6(struct acpi_processor *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2)
  return 0;

 if (!VAR_4)
  return -VAR_0;

 if (VAR_3) {
  return -VAR_1;
 }

 if (!VAR_4->flags.power_setup_done)
  return -VAR_1;

 FUNC_4();
 FUNC_2(&VAR_4->power.dev);
 FUNC_0(VAR_4);
 if (VAR_4->flags.power) {
  FUNC_1(VAR_4);
  VAR_5 = FUNC_3(&VAR_4->power.dev);
 }
 FUNC_5();

 return VAR_5;
}
