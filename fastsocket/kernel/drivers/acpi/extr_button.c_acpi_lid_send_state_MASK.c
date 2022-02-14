
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
struct acpi_button {int input; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_button* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long long,struct acpi_device*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct acpi_device *VAR_5)
{
 struct acpi_button *VAR_6 = FUNC_1(VAR_5);
 unsigned long long VAR_7;
 acpi_status VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_5->handle, "_LID", ((void*)0), &VAR_7);
 if (FUNC_0(VAR_8))
  return -VAR_0;


 FUNC_4(VAR_6->input, VAR_3, !VAR_7);
 FUNC_5(VAR_6->input);

 VAR_9 = FUNC_3(&VAR_4, VAR_7, VAR_5);
 if (VAR_9 == VAR_1)
  VAR_9 = FUNC_3(&VAR_4, VAR_7,
         VAR_5);
 if (VAR_9 == VAR_1 || VAR_9 == VAR_2) {




  VAR_9 = 0;
 }
 return VAR_9;
}
