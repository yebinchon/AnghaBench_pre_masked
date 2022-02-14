
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct wm831x_power {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct power_supply {TYPE_1__* dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct wm831x_power* FUNC_0 (int ) ;
 int FUNC_1 (struct wm831x*,int ,union power_supply_propval*) ;
 int FUNC_2 (struct wm831x*,int ,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_3,
    enum power_supply_property VAR_4,
    union power_supply_propval *VAR_5)
{
 struct wm831x_power *VAR_6 = FUNC_0(VAR_3->dev->parent);
 struct wm831x *VAR_7 = VAR_6->wm831x;
 int VAR_8 = 0;

 switch (VAR_4) {
 case 129:
  VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_5);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_7, VAR_1, VAR_5);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
