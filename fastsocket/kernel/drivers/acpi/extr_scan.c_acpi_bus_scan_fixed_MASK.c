
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct acpi_bus_ops {int acpi_op_add; int acpi_op_start; } ;
typedef int ops ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_device**,int *,int ,int ,struct acpi_bus_ops*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (struct acpi_bus_ops*,int ,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_6 = 0;
 struct acpi_device *VAR_7 = ((void*)0);
 struct acpi_bus_ops VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.acpi_op_add = 1;
 VAR_8.acpi_op_start = 1;




 if ((VAR_5.flags & VAR_2) == 0) {
  VAR_6 = FUNC_0(&VAR_7, ((void*)0),
      VAR_0,
      VAR_4,
      &VAR_8);
 }

 if ((VAR_5.flags & VAR_3) == 0) {
  VAR_6 = FUNC_0(&VAR_7, ((void*)0),
      VAR_1,
      VAR_4,
      &VAR_8);
 }

 return VAR_6;
}
