
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dev; scalar_t__ handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_5)
{
 acpi_status VAR_6;
 acpi_handle VAR_7;





 VAR_6 = FUNC_1(VAR_5->handle, "_EJ0", &VAR_7);
 if (FUNC_0(VAR_6))
  FUNC_2(&VAR_5->dev, &VAR_0);

 VAR_6 = FUNC_1(VAR_5->handle, "_SUN", &VAR_7);
 if (FUNC_0(VAR_6))
  FUNC_2(&VAR_5->dev, &VAR_4);

 FUNC_2(&VAR_5->dev, &VAR_2);
 FUNC_2(&VAR_5->dev, &VAR_1);
 if (VAR_5->handle)
  FUNC_2(&VAR_5->dev, &VAR_3);
}
