
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_therm_priv {int mode; int suspend; } ;
struct nouveau_therm {int base; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

int
FUNC_1(struct nouveau_object *VAR_1, bool VAR_2)
{
 struct nouveau_therm *VAR_3 = (void *)VAR_1;
 struct nouveau_therm_priv *VAR_4 = (void *)VAR_3;

 if (VAR_2) {
  VAR_4->suspend = VAR_4->mode;
  VAR_4->mode = VAR_0;
 }

 return FUNC_0(&VAR_3->base, VAR_2);
}
