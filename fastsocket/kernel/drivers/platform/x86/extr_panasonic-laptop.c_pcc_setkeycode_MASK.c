
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int* keymap; } ;
struct input_dev {int keybit; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct pcc_acpi* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct pcc_acpi*,int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct pcc_acpi *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 if (VAR_3 >= FUNC_0(VAR_5->keymap))
  return -VAR_0;

 if (VAR_4 < 0 || VAR_4 > VAR_1)
  return -VAR_0;

 VAR_6 = VAR_5->keymap[VAR_3];
 VAR_5->keymap[VAR_3] = VAR_4;

 FUNC_4(VAR_4, VAR_2->keybit);

 if (!FUNC_3(VAR_5, VAR_6))
  FUNC_1(VAR_6, VAR_2->keybit);

 return 0;
}
