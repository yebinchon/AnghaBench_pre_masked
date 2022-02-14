
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ throttling; } ;
struct acpi_processor {int id; TYPE_2__ throttling; TYPE_1__ flags; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_processor* FUNC_0 (struct acpi_device*) ;
 unsigned long FUNC_1 (struct acpi_processor*) ;
 int FUNC_2 (struct acpi_processor*,unsigned long,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct thermal_cooling_device *VAR_1,
   unsigned long VAR_2)
{
 struct acpi_device *VAR_3 = VAR_1->devdata;
 struct acpi_processor *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4->id);

 if (VAR_2 > FUNC_1(VAR_4))
  return -VAR_0;

 if (VAR_2 <= VAR_6) {
  if (VAR_4->flags.throttling && VAR_4->throttling.state)
   VAR_5 = FUNC_2(VAR_4, 0, 0);
  FUNC_4(VAR_4->id, VAR_2);
 } else {
  FUNC_4(VAR_4->id, VAR_6);
  VAR_5 = FUNC_2(VAR_4,
    VAR_2 - VAR_6, 0);
 }
 return VAR_5;
}
