
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm97xx_pdata {struct wm97xx_batt_pdata* batt_pdata; } ;
struct wm97xx_batt_pdata {unsigned long temp_mult; unsigned long temp_div; int temp_aux; } ;
struct power_supply {TYPE_1__* dev; } ;
struct TYPE_4__ {struct wm97xx_pdata* platform_data; } ;
struct TYPE_3__ {TYPE_2__* parent; } ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned long FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct power_supply *VAR_0)
{
 struct wm97xx_pdata *VAR_1 = VAR_0->dev->parent->platform_data;
 struct wm97xx_batt_pdata *VAR_2 = VAR_1->batt_pdata;

 return FUNC_1(FUNC_0(VAR_0->dev->parent),
     VAR_2->temp_aux) * VAR_2->temp_mult /
     VAR_2->temp_div;
}
