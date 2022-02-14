
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ throttling; } ;
struct acpi_processor {TYPE_2__ throttling; TYPE_1__ flags; int id; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_processor* FUNC_0 (struct acpi_device*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct thermal_cooling_device *VAR_1,
   unsigned long *VAR_2)
{
 struct acpi_device *VAR_3 = VAR_1->devdata;
 struct acpi_processor *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 *VAR_2 = FUNC_1(VAR_4->id);
 if (VAR_4->flags.throttling)
  *VAR_2 += VAR_4->throttling.state;
 return 0;
}
