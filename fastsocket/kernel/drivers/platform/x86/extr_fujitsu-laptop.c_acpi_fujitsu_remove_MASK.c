
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct fujitsu_t {int * acpi_handle; struct input_dev* input; } ;
struct acpi_device {int dummy; } ;


 struct fujitsu_t* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0, int VAR_1)
{
 struct fujitsu_t *VAR_2 = FUNC_0(VAR_0);
 struct input_dev *VAR_3 = VAR_2->input;

 FUNC_2(VAR_3);

 FUNC_1(VAR_3);

 VAR_2->acpi_handle = ((void*)0);

 return 0;
}
