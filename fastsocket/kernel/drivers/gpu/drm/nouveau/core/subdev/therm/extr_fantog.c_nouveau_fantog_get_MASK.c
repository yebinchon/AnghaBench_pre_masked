
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_therm_priv {scalar_t__ fan; } ;
struct nouveau_therm {int dummy; } ;
struct nouveau_fantog_priv {int percent; } ;



__attribute__((used)) static int
FUNC_0(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;
 struct nouveau_fantog_priv *VAR_2 = (void *)VAR_1->fan;
 return VAR_2->percent;
}
