
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct nouveau_therm_priv {TYPE_1__ base; int fan; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;
 FUNC_0(VAR_1->fan);
 FUNC_1(&VAR_1->base.base);
}
