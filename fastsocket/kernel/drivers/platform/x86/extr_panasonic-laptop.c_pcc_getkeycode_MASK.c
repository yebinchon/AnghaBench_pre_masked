
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int* keymap; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 struct pcc_acpi* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_1, int VAR_2, int *VAR_3)
{
 struct pcc_acpi *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2 >= FUNC_0(VAR_4->keymap))
  return -VAR_0;

 *VAR_3 = VAR_4->keymap[VAR_2];

 return 0;
}
