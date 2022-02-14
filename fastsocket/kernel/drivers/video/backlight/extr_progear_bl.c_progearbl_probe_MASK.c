
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dev; } ;
struct TYPE_2__ {void* max_brightness; void* brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_7 ;
 struct backlight_device* FUNC_2 (char*,int *,int *,int *) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (void*,int ,int*) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (struct platform_device*,struct backlight_device*) ;
 void* VAR_8 ;
 int FUNC_8 (char*) ;
 int VAR_9 ;
 int FUNC_9 (struct backlight_device*) ;
 void* VAR_10 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11)
{
 u8 VAR_12;
 struct backlight_device *VAR_13;

 VAR_8 = FUNC_4(VAR_6, VAR_5, ((void*)0));
 if (!VAR_8) {
  FUNC_8("ALI M7101 PMU not found.\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_6, VAR_4, ((void*)0));
 if (!VAR_10) {
  FUNC_8("ALI 1533 SB not found.\n");
  FUNC_3(VAR_8);
  return -VAR_0;
 }


 FUNC_5(VAR_10, VAR_7, &VAR_12);
 FUNC_6(VAR_10, VAR_7, VAR_12 | 0x20);

 VAR_13 = FUNC_2("progear-bl",
            &VAR_11->dev, ((void*)0),
            &VAR_9);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_7(VAR_11, VAR_13);

 VAR_13->props.power = VAR_1;
 VAR_13->props.brightness = VAR_2 - VAR_3;
 VAR_13->props.max_brightness = VAR_2 - VAR_3;
 FUNC_9(VAR_13);

 return 0;
}
