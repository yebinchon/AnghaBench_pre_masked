
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_therm_priv {scalar_t__ fan; } ;
struct nouveau_therm {int (* pwm_ctrl ) (struct nouveau_therm*,int ,int) ;} ;
struct TYPE_2__ {int line; } ;
struct nouveau_fantog_priv {TYPE_1__ func; } ;


 int FUNC_0 (struct nouveau_fantog_priv*,int) ;
 int FUNC_1 (struct nouveau_therm*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_therm *VAR_0, int VAR_1)
{
 struct nouveau_therm_priv *VAR_2 = (void *)VAR_0;
 struct nouveau_fantog_priv *VAR_3 = (void *)VAR_2->fan;
 if (VAR_0->pwm_ctrl)
  VAR_0->pwm_ctrl(VAR_0, VAR_3->func.line, 0);
 FUNC_0(VAR_3, VAR_1);
 return 0;
}
