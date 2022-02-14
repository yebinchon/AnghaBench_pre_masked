
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atk_data {scalar_t__ disable_ec; int hwmon_dev; } ;
struct acpi_device {int dev; struct atk_data* driver_data; } ;


 scalar_t__ FUNC_0 (struct atk_data*,int ) ;
 int FUNC_1 (struct atk_data*) ;
 int FUNC_2 (struct atk_data*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct atk_data*) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_0, int VAR_1)
{
 struct atk_data *VAR_2 = VAR_0->driver_data;
 FUNC_3(&VAR_0->dev, "removing...\n");

 VAR_0->driver_data = ((void*)0);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_5(VAR_2->hwmon_dev);

 if (VAR_2->disable_ec) {
  if (FUNC_0(VAR_2, 0))
   FUNC_4(&VAR_0->dev, "Failed to disable EC\n");
 }

 FUNC_6(VAR_2);

 return 0;
}
