
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_therm_priv {int fan; } ;
struct nouveau_therm {int dummy; } ;


 int FUNC_0 (int ,int,int) ;

int
FUNC_1(struct nouveau_therm *VAR_0, bool VAR_1, int VAR_2)
{
 struct nouveau_therm_priv *VAR_3 = (void *)VAR_0;
 return FUNC_0(VAR_3->fan, VAR_1, VAR_2);
}
