
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dock_station {scalar_t__ handle; } ;
struct dock_dependent_device {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct dock_station*,struct dock_dependent_device*) ;
 struct dock_dependent_device* FUNC_4 (scalar_t__) ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_1, u32 VAR_2, void *VAR_3, void **VAR_4)
{
 acpi_status VAR_5;
 acpi_handle VAR_6, VAR_7;
 struct dock_station *VAR_8 = VAR_3;
 struct dock_dependent_device *VAR_9;

 VAR_5 = FUNC_1(VAR_1, &VAR_6);
 if (FUNC_0(VAR_5)) {

  VAR_5 = FUNC_2(VAR_1, &VAR_7);
  if (FUNC_0(VAR_5))
   goto fdd_out;

  VAR_5 = FUNC_1(VAR_7, &VAR_6);
  if (FUNC_0(VAR_5))
   goto fdd_out;
 }

 if (VAR_6 == VAR_8->handle) {
  VAR_9 = FUNC_4(VAR_1);
  if (VAR_9)
   FUNC_3(VAR_8, VAR_9);
 }
fdd_out:
 return VAR_0;
}
