
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dev; scalar_t__ handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int *,unsigned long long*) ;
 int FUNC_2 (scalar_t__,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_5)
{
 acpi_status VAR_6;
 acpi_handle VAR_7;
 unsigned long long VAR_8;
 int VAR_9 = 0;




 if (VAR_5->handle) {
  VAR_9 = FUNC_3(&VAR_5->dev, &VAR_3);
  if (VAR_9)
   goto end;
 }

 VAR_9 = FUNC_3(&VAR_5->dev, &VAR_1);
 if (VAR_9)
  goto end;

 VAR_9 = FUNC_3(&VAR_5->dev, &VAR_2);
 if (VAR_9)
  goto end;

 VAR_6 = FUNC_1(VAR_5->handle, "_SUN", ((void*)0), &VAR_8);
 if (FUNC_0(VAR_6)) {
  VAR_9 = FUNC_3(&VAR_5->dev, &VAR_4);
  if (VAR_9)
   goto end;
 }





 VAR_6 = FUNC_2(VAR_5->handle, "_EJ0", &VAR_7);
 if (FUNC_0(VAR_6))
  VAR_9 = FUNC_3(&VAR_5->dev, &VAR_0);
end:
 return VAR_9;
}
