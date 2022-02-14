
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_therm_priv {TYPE_1__* fan; } ;
struct nouveau_therm {int dummy; } ;
struct TYPE_2__ {int (* get ) (struct nouveau_therm*) ;} ;


 int FUNC_0 (struct nouveau_therm*) ;

int
FUNC_1(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;
 return VAR_1->fan->get(VAR_0);
}
