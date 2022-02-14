
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct wm831x_power {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct power_supply {TYPE_1__* dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wm831x_power* FUNC_0 (int ) ;
 int FUNC_1 (struct wm831x*,int ,union power_supply_propval*) ;
 int FUNC_2 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_6,
      enum power_supply_property VAR_7,
      union power_supply_propval *VAR_8)
{
 struct wm831x_power *VAR_9 = FUNC_0(VAR_6->dev->parent);
 struct wm831x *VAR_10 = VAR_9->wm831x;
 int VAR_11 = 0;

 VAR_11 = FUNC_2(VAR_10, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_7) {
 case 129:
  if (VAR_11 & VAR_5)
   VAR_8->intval = VAR_1;
  else
   VAR_8->intval = VAR_2;
  break;

 case 128:
  VAR_11 = FUNC_1(VAR_10, VAR_3,
      VAR_8);
  break;

 case 130:
  if (VAR_11 & VAR_5)
   VAR_8->intval = 1;
  else
   VAR_8->intval = 0;
  break;

 default:
  VAR_11 = -VAR_0;
  break;
 }

 return VAR_11;
}
