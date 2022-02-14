
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int base; TYPE_1__* fan; } ;
struct nva3_therm_priv {TYPE_2__ base; } ;
struct nouveau_object {int dummy; } ;
struct dcb_gpio_func {scalar_t__ func; int line; } ;
struct TYPE_6__ {int crystal; } ;
struct TYPE_4__ {struct dcb_gpio_func tach; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (struct nva3_therm_priv*) ;
 int FUNC_2 (struct nva3_therm_priv*,int,int,int) ;
 int FUNC_3 (struct nva3_therm_priv*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_1)
{
 struct nva3_therm_priv *VAR_2 = (void *)VAR_1;
 struct dcb_gpio_func *VAR_3 = &VAR_2->base.fan->tach;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->base.base);
 if (VAR_4)
  return VAR_4;


 FUNC_2(VAR_2, 0x00e720, 0x00000003, 0x00000002);
 if (VAR_3->func != VAR_0) {
  FUNC_3(VAR_2, 0x00e724, FUNC_1(VAR_2)->crystal * 1000);
  FUNC_2(VAR_2, 0x00e720, 0x001f0000, VAR_3->line << 16);
  FUNC_2(VAR_2, 0x00e720, 0x00000001, 0x00000001);
 }
 FUNC_2(VAR_2, 0x00e720, 0x00000002, 0x00000000);

 return 0;
}
