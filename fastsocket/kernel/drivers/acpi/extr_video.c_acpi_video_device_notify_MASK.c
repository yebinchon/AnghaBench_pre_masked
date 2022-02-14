
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_video_device {struct acpi_video_bus* video; struct acpi_device* dev; } ;
struct acpi_video_bus {struct input_dev* input; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct acpi_device*,int ,int ) ;
 int FUNC_2 (struct acpi_device*,int ,int ) ;
 int FUNC_3 (struct acpi_video_device*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct input_dev*,int,int) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(acpi_handle VAR_7, u32 VAR_8, void *VAR_9)
{
 struct acpi_video_device *VAR_10 = VAR_9;
 struct acpi_device *VAR_11 = ((void*)0);
 struct acpi_video_bus *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14 = 0;

 if (!VAR_10)
  return;

 VAR_11 = VAR_10->dev;
 VAR_12 = VAR_10->video;
 VAR_13 = VAR_12->input;

 switch (VAR_8) {
 case 132:
  if (VAR_6)
   FUNC_3(VAR_10, VAR_8);
  FUNC_1(VAR_11, VAR_8, 0);
  VAR_14 = VAR_3;
  break;
 case 129:
  if (VAR_6)
   FUNC_3(VAR_10, VAR_8);
  FUNC_1(VAR_11, VAR_8, 0);
  VAR_14 = VAR_2;
  break;
 case 131:
  if (VAR_6)
   FUNC_3(VAR_10, VAR_8);
  FUNC_1(VAR_11, VAR_8, 0);
  VAR_14 = VAR_1;
  break;
 case 128:
  if (VAR_6)
   FUNC_3(VAR_10, VAR_8);
  FUNC_1(VAR_11, VAR_8, 0);
  VAR_14 = VAR_4;
  break;
 case 130:
  if (VAR_6)
   FUNC_3(VAR_10, VAR_8);
  FUNC_1(VAR_11, VAR_8, 0);
  VAR_14 = VAR_5;
  break;
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_8));
  break;
 }

 FUNC_2(VAR_11, VAR_8, 0);

 if (VAR_14) {
  FUNC_4(VAR_13, VAR_14, 1);
  FUNC_5(VAR_13);
  FUNC_4(VAR_13, VAR_14, 0);
  FUNC_5(VAR_13);
 }

 return;
}
