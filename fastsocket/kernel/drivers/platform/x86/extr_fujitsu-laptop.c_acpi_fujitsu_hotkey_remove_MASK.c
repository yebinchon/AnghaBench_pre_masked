
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct fujitsu_hotkey_t {int * acpi_handle; int fifo; scalar_t__ kblamps_registered; scalar_t__ logolamp_registered; struct input_dev* input; } ;
struct acpi_device {int dummy; } ;


 struct fujitsu_hotkey_t* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_2, int VAR_3)
{
 struct fujitsu_hotkey_t *VAR_4 = FUNC_0(VAR_2);
 struct input_dev *VAR_5 = VAR_4->input;
 FUNC_2(VAR_5);

 FUNC_1(VAR_5);

 FUNC_3(VAR_4->fifo);

 VAR_4->acpi_handle = ((void*)0);

 return 0;
}
