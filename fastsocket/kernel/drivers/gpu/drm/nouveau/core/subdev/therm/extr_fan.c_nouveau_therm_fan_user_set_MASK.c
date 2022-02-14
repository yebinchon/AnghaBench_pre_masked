
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_therm_priv {scalar_t__ mode; } ;
struct nouveau_therm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nouveau_therm*,int,int) ;

int
FUNC_1(struct nouveau_therm *VAR_2, int VAR_3)
{
 struct nouveau_therm_priv *VAR_4 = (void *)VAR_2;

 if (VAR_4->mode != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, 1, VAR_3);
}
