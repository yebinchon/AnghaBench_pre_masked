
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {int dummy; } ;
struct acpi_bus_ops {scalar_t__ acpi_op_add; scalar_t__ acpi_op_start; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_device**,int ,int,unsigned long long,struct acpi_bus_ops*) ;
 int FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (int ,int*,unsigned long long*) ;
 int FUNC_4 (struct acpi_device*) ;

__attribute__((used)) static acpi_status FUNC_5(acpi_handle VAR_4, u32 VAR_5,
          void *VAR_6, void **VAR_7)
{
 struct acpi_bus_ops *VAR_8 = VAR_6;
 int VAR_9;
 unsigned long long VAR_10;
 struct acpi_device *VAR_11;
 acpi_status VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_4, &VAR_9, &VAR_10);
 if (VAR_13)
  return VAR_3;

 if (!(VAR_10 & VAR_1) &&
     !(VAR_10 & VAR_0))
  return VAR_2;





 VAR_11 = ((void*)0);
 FUNC_2(VAR_4, &VAR_11);
 if (VAR_8->acpi_op_add && !VAR_11)
  FUNC_1(&VAR_11, VAR_4, VAR_9, VAR_10, VAR_8);

 if (!VAR_11)
  return VAR_2;

 if (VAR_8->acpi_op_start && !(VAR_8->acpi_op_add)) {
  VAR_12 = FUNC_4(VAR_11);
  if (FUNC_0(VAR_12))
   return VAR_2;
 }

 if (!*VAR_7)
  *VAR_7 = VAR_11;
 return VAR_3;
}
