
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; int name; } ;
struct da903x_backlight_data {int id; int da903x_dev; scalar_t__ current_brightness; } ;
struct TYPE_3__ {int max_brightness; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,int ,struct da903x_backlight_data*,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (struct da903x_backlight_data*) ;
 struct da903x_backlight_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct da903x_backlight_data *VAR_7;
 struct backlight_device *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_4);
 if (VAR_7 == ((void*)0))
  return -VAR_3;

 switch (VAR_6->id) {
 case 129:
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_9 = VAR_1;
  break;
 default:
  FUNC_4(&VAR_6->dev, "invalid backlight device ID(%d)\n",
    VAR_6->id);
  FUNC_5(VAR_7);
  return -VAR_2;
 }

 VAR_7->id = VAR_6->id;
 VAR_7->da903x_dev = VAR_6->dev.parent;
 VAR_7->current_brightness = 0;

 VAR_8 = FUNC_2(VAR_6->name, VAR_7->da903x_dev,
   VAR_7, &VAR_5);
 if (FUNC_0(VAR_8)) {
  FUNC_4(&VAR_6->dev, "failed to register backlight\n");
  FUNC_5(VAR_7);
  return FUNC_1(VAR_8);
 }

 VAR_8->props.max_brightness = VAR_9;
 VAR_8->props.brightness = VAR_9;

 FUNC_7(VAR_6, VAR_8);
 FUNC_3(VAR_8);
 return 0;
}
