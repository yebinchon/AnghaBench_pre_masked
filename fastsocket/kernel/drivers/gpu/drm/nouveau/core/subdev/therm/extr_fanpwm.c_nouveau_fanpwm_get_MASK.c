
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_therm_priv {scalar_t__ fan; } ;
struct nouveau_therm {int (* pwm_get ) (struct nouveau_therm*,int ,int*,int*) ;} ;
struct nouveau_gpio {int (* get ) (struct nouveau_gpio*,int ,int ,int ) ;} ;
struct TYPE_3__ {int* log; int line; int func; } ;
struct nouveau_fanpwm_priv {TYPE_1__ func; } ;
struct TYPE_4__ {int card_type; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 struct nouveau_gpio* FUNC_1 (struct nouveau_therm*) ;
 TYPE_2__* FUNC_2 (struct nouveau_therm*) ;
 int FUNC_3 (struct nouveau_therm*,int ,int*,int*) ;
 int FUNC_4 (struct nouveau_gpio*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_therm *VAR_1)
{
 struct nouveau_therm_priv *VAR_2 = (void *)VAR_1;
 struct nouveau_fanpwm_priv *VAR_3 = (void *)VAR_2->fan;
 struct nouveau_gpio *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_2(VAR_1)->card_type;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = VAR_1->pwm_get(VAR_1, VAR_3->func.line, &VAR_6, &VAR_7);
 if (VAR_8 == 0 && VAR_6) {
  VAR_6 = FUNC_0(VAR_6, VAR_7);
  if (VAR_5 <= VAR_0 || (VAR_3->func.log[0] & 1))
   VAR_7 = VAR_6 - VAR_7;
  return (VAR_7 * 100) / VAR_6;
 }

 return VAR_4->get(VAR_4, 0, VAR_3->func.func, VAR_3->func.line) * 100;
}
