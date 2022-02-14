
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ configurable_cap; } ;
struct acpi_power_meter_resource {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct acpi_power_meter_resource*) ;
 int FUNC_1 (struct acpi_power_meter_resource*,int ) ;
 int FUNC_2 (struct acpi_power_meter_resource*,int ) ;
 int FUNC_3 (struct acpi_power_meter_resource*) ;
 int FUNC_4 (struct acpi_power_meter_resource*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct acpi_power_meter_resource *VAR_10)
{
 int VAR_11 = 0;

 VAR_11 = FUNC_0(VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10->caps.flags & VAR_1) {
  VAR_11 = FUNC_1(VAR_10, VAR_3);
  if (VAR_11)
   goto error;
  VAR_11 = FUNC_2(VAR_10, VAR_4);
  if (VAR_11)
   goto error;
 }

 if (VAR_10->caps.flags & VAR_0) {
  if (VAR_10->caps.configurable_cap) {
   VAR_11 = FUNC_2(VAR_10, VAR_8);
   if (VAR_11)
    goto error;
  } else {
   VAR_11 = FUNC_1(VAR_10, VAR_7);
   if (VAR_11)
    goto error;
  }
  VAR_11 = FUNC_1(VAR_10, VAR_6);
  if (VAR_11)
   goto error;
 }

 if (VAR_10->caps.flags & VAR_2) {
  VAR_11 = FUNC_2(VAR_10, VAR_9);
  if (VAR_11)
   goto error;
 }

 VAR_11 = FUNC_1(VAR_10, VAR_5);
 if (VAR_11)
  goto error;

 return VAR_11;
error:
 FUNC_4(VAR_10);
 FUNC_3(VAR_10);
 return VAR_11;
}
