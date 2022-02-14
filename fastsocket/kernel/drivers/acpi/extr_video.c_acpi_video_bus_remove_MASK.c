
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_video_bus {struct acpi_video_bus* attached_array; int input; int pm_nb; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_video_bus* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_video_bus*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_video_bus*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_video_bus*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_1, int VAR_2)
{
 struct acpi_video_bus *VAR_3 = ((void*)0);


 if (!VAR_1 || !FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1);

 FUNC_6(&VAR_3->pm_nb);

 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_1);

 FUNC_4(VAR_3->input);
 FUNC_5(VAR_3->attached_array);
 FUNC_5(VAR_3);

 return 0;
}
