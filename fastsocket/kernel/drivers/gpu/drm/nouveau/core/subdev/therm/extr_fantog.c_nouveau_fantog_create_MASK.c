
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_therm_priv {TYPE_1__* fan; } ;
struct nouveau_therm {int dummy; } ;
struct dcb_gpio_func {int dummy; } ;
struct TYPE_2__ {char* type; int set; int get; } ;
struct nouveau_fantog_priv {int period_us; int percent; int lock; struct dcb_gpio_func func; int alarm; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_fantog_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct nouveau_therm *VAR_5, struct dcb_gpio_func *VAR_6)
{
 struct nouveau_therm_priv *VAR_7 = (void *)VAR_5;
 struct nouveau_fantog_priv *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
 VAR_7->fan = &VAR_8->base;
 if (!VAR_8)
  return -VAR_0;

 VAR_8->base.type = "toggle";
 VAR_8->base.get = VAR_3;
 VAR_8->base.set = VAR_4;
 FUNC_1(&VAR_8->alarm, VAR_2);
 VAR_8->period_us = 100000;
 VAR_8->percent = 100;
 VAR_8->func = *VAR_6;
 FUNC_2(&VAR_8->lock);
 return 0;
}
