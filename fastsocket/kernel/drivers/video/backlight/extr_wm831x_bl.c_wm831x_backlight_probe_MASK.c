
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm831x_pdata {struct wm831x_backlight_pdata* backlight; } ;
struct wm831x_backlight_pdata {scalar_t__ max_uA; int isink; } ;
struct wm831x_backlight_data {int isink_reg; scalar_t__ current_brightness; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct TYPE_7__ {TYPE_3__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int max_brightness; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct TYPE_8__ {struct wm831x_pdata* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct backlight_device* FUNC_2 (char*,TYPE_2__*,struct wm831x_backlight_data*,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 struct wm831x* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,char*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct wm831x_backlight_data*) ;
 struct wm831x_backlight_data* FUNC_8 (int,int ) ;
 int FUNC_9 (struct platform_device*,struct backlight_device*) ;
 int VAR_10 ;
 scalar_t__* VAR_11 ;
 int FUNC_10 (struct wm831x*) ;
 int FUNC_11 (struct wm831x*) ;
 int FUNC_12 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_12)
{
 struct wm831x *VAR_13 = FUNC_5(VAR_12->dev.parent);
 struct wm831x_pdata *VAR_14;
 struct wm831x_backlight_pdata *VAR_15;
 struct wm831x_backlight_data *VAR_16;
 struct backlight_device *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;


 if (VAR_12->dev.parent->platform_data) {
  VAR_14 = VAR_12->dev.parent->platform_data;
  VAR_15 = VAR_14->backlight;
 } else {
  VAR_15 = ((void*)0);
 }

 if (!VAR_15) {
  FUNC_4(&VAR_12->dev, "No platform data supplied\n");
  return -VAR_0;
 }


 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
  if (VAR_11[VAR_19] > VAR_15->max_uA)
   break;
 }

 if (VAR_19 == 0) {
  FUNC_4(&VAR_12->dev, "Invalid max_uA: %duA\n", VAR_15->max_uA);
  return -VAR_0;
 }
 VAR_20 = VAR_19 - 1;

 if (VAR_15->max_uA != VAR_11[VAR_20])
  FUNC_6(&VAR_12->dev,
    "Maximum current is %duA not %duA as requested\n",
    VAR_11[VAR_20], VAR_15->max_uA);

 switch (VAR_15->isink) {
 case 1:
  VAR_21 = VAR_3;
  VAR_22 = 0;
  break;
 case 2:
  VAR_21 = VAR_4;
  VAR_22 = VAR_7;
  break;
 default:
  FUNC_4(&VAR_12->dev, "Invalid ISINK %d\n", VAR_15->isink);
  return -VAR_0;
 }


 VAR_18 = FUNC_11(VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_12(VAR_13, VAR_5, VAR_7,
         VAR_22);

 FUNC_10(VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_16 = FUNC_8(sizeof(*VAR_16), VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;

 VAR_16->wm831x = VAR_13;
 VAR_16->current_brightness = 0;
 VAR_16->isink_reg = VAR_21;

 VAR_17 = FUNC_2("wm831x", &VAR_12->dev,
   VAR_16, &VAR_10);
 if (FUNC_0(VAR_17)) {
  FUNC_4(&VAR_12->dev, "failed to register backlight\n");
  FUNC_7(VAR_16);
  return FUNC_1(VAR_17);
 }

 VAR_17->props.max_brightness = VAR_20;
 VAR_17->props.brightness = VAR_20;

 FUNC_9(VAR_12, VAR_17);


 FUNC_12(VAR_13, VAR_8, VAR_6, 0);


 FUNC_3(VAR_17);

 return 0;
}
