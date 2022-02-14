
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {int brightness_level; int dev; int brightness_changed; struct input_dev* input; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int FUNC_6 (int ,char*,int,...) ;

__attribute__((used)) static void FUNC_7(struct acpi_device *VAR_10, u32 VAR_11)
{
 struct input_dev *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_8->input;

 switch (VAR_11) {
 case 128:
  VAR_13 = 0;
  VAR_14 = VAR_8->brightness_level;
  FUNC_1();
  VAR_15 = VAR_8->brightness_level;

  FUNC_6(VAR_2,
       "brightness button event [%i -> %i (%i)]\n",
       VAR_14, VAR_15, VAR_8->brightness_changed);

  if (VAR_14 < VAR_15) {
   if (VAR_7 != 1) {
    if (VAR_9)
     FUNC_5(VAR_15);
    else
     FUNC_4(VAR_15);
   }
   FUNC_0(VAR_8->dev,
    VAR_1, 0);
   VAR_13 = VAR_5;
  } else if (VAR_14 > VAR_15) {
   if (VAR_7 != 1) {
    if (VAR_9)
     FUNC_5(VAR_15);
    else
     FUNC_4(VAR_15);
   }
   FUNC_0(VAR_8->dev,
    VAR_0, 0);
   VAR_13 = VAR_4;
  }
  break;
 default:
  VAR_13 = VAR_6;
  FUNC_6(VAR_3,
       "unsupported event [0x%x]\n", VAR_11);
  break;
 }

 if (VAR_13 != 0) {
  FUNC_2(VAR_12, VAR_13, 1);
  FUNC_3(VAR_12);
  FUNC_2(VAR_12, VAR_13, 0);
  FUNC_3(VAR_12);
 }
}
