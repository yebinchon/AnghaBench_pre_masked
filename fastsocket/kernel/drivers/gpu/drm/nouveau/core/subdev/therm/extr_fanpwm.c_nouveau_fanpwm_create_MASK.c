
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_therm_priv {TYPE_1__* fan; } ;
struct nouveau_therm {int (* pwm_get ) (struct nouveau_therm*,int ,int *,int *) ;int pwm_ctrl; } ;
struct dcb_gpio_func {int line; int param; } ;
struct TYPE_2__ {char* type; int set; int get; } ;
struct nouveau_fanpwm_priv {struct dcb_gpio_func func; TYPE_1__ base; } ;
struct nouveau_device {int cfgopt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_fanpwm_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct nouveau_device* FUNC_2 (struct nouveau_therm*) ;
 int FUNC_3 (struct nouveau_therm*,int ,int *,int *) ;

int
FUNC_4(struct nouveau_therm *VAR_5, struct dcb_gpio_func *VAR_6)
{
 struct nouveau_device *VAR_7 = FUNC_2(VAR_5);
 struct nouveau_therm_priv *VAR_8 = (void *)VAR_5;
 struct nouveau_fanpwm_priv *VAR_9;
 u32 VAR_10, VAR_11;

 if (!FUNC_1(VAR_7->cfgopt, "NvFanPWM", VAR_6->param) ||
     !VAR_5->pwm_ctrl ||
      VAR_5->pwm_get(VAR_5, VAR_6->line, &VAR_10, &VAR_11) == -VAR_0)
  return -VAR_0;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_2);
 VAR_8->fan = &VAR_9->base;
 if (!VAR_9)
  return -VAR_1;

 VAR_9->base.type = "PWM";
 VAR_9->base.get = VAR_3;
 VAR_9->base.set = VAR_4;
 VAR_9->func = *VAR_6;
 return 0;
}
