
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int keybit; } ;
struct acpi_device {int dummy; } ;
struct acpi_button {int pushed; int type; struct input_dev* input; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_device*,int,int ) ;
 struct acpi_button* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct input_dev*,int,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct acpi_device *VAR_4, u32 VAR_5)
{
 struct acpi_button *VAR_6 = FUNC_2(VAR_4);
 struct input_dev *VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_5 = 129;

 case 129:
  VAR_7 = VAR_6->input;
  if (VAR_6->type == VAR_0) {
   FUNC_3(VAR_4);
  } else {
   int VAR_8 = FUNC_6(VAR_3, VAR_7->keybit) ?
      VAR_3 : VAR_2;

   FUNC_4(VAR_7, VAR_8, 1);
   FUNC_5(VAR_7);
   FUNC_4(VAR_7, VAR_8, 0);
   FUNC_5(VAR_7);
  }

  FUNC_1(VAR_4, VAR_5, ++VAR_6->pushed);
  break;
 default:
  FUNC_0((VAR_1,
      "Unsupported event [0x%x]\n", VAR_5));
  break;
 }
}
