
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_video_bus {struct input_dev* input; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_device*,int,int ) ;
 struct acpi_video_bus* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*,int,int ) ;
 int FUNC_4 (struct acpi_video_bus*) ;
 int FUNC_5 (struct acpi_video_bus*) ;
 int FUNC_6 (struct input_dev*,int,int) ;
 int FUNC_7 (struct input_dev*) ;

__attribute__((used)) static void FUNC_8(struct acpi_device *VAR_4, u32 VAR_5)
{
 struct acpi_video_bus *VAR_6 = FUNC_2(VAR_4);
 struct input_dev *VAR_7;
 int VAR_8 = 0;

 if (!VAR_6)
  return;

 VAR_7 = VAR_6->input;

 switch (VAR_5) {
 case 128:

  FUNC_1(VAR_4, VAR_5, 0);
  if (!FUNC_3(VAR_4, VAR_5, 0))
   VAR_8 = VAR_1;
  break;

 case 129:

  FUNC_4(VAR_6);
  FUNC_5(VAR_6);
  FUNC_1(VAR_4, VAR_5, 0);
  VAR_8 = VAR_1;
  break;

 case 132:
  FUNC_1(VAR_4, VAR_5, 0);
  VAR_8 = VAR_1;
  break;
 case 131:
  FUNC_1(VAR_4, VAR_5, 0);
  VAR_8 = VAR_2;
  break;
 case 130:
  FUNC_1(VAR_4, VAR_5, 0);
  VAR_8 = VAR_3;
  break;

 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_5));
  break;
 }

 if (VAR_5 != 128)
  FUNC_3(VAR_4, VAR_5, 0);

 if (VAR_8) {
  FUNC_6(VAR_7, VAR_8, 1);
  FUNC_7(VAR_7);
  FUNC_6(VAR_7, VAR_8, 0);
  FUNC_7(VAR_7);
 }

 return;
}
