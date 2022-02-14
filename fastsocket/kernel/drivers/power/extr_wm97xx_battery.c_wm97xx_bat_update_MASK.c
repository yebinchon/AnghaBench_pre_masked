
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm97xx_pdata {struct wm97xx_batt_pdata* batt_pdata; } ;
struct wm97xx_batt_pdata {scalar_t__ charge_gpio; } ;
struct power_supply {int name; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {struct wm97xx_pdata* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct power_supply*) ;
 int FUNC_4 (char*,int ,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct power_supply *VAR_5)
{
 int VAR_6 = VAR_3;
 struct wm97xx_pdata *VAR_7 = VAR_5->dev->parent->platform_data;
 struct wm97xx_batt_pdata *VAR_8 = VAR_7->batt_pdata;

 FUNC_1(&VAR_4);

 VAR_3 = (VAR_8->charge_gpio >= 0) ?
   (FUNC_0(VAR_8->charge_gpio) ?
   VAR_1 :
   VAR_0) :
   VAR_2;

 if (VAR_6 != VAR_3) {
  FUNC_4("%s: %i -> %i\n", VAR_5->name, VAR_6,
     VAR_3);
  FUNC_3(VAR_5);
 }

 FUNC_2(&VAR_4);
}
