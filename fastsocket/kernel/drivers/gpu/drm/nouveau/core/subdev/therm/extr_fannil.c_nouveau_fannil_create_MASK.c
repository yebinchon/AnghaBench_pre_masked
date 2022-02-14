
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_therm_priv {struct nouveau_fan* fan; } ;
struct nouveau_therm {int dummy; } ;
struct nouveau_fan {char* type; int set; int get; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_fan* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(struct nouveau_therm *VAR_4)
{
 struct nouveau_therm_priv *VAR_5 = (void *)VAR_4;
 struct nouveau_fan *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 VAR_5->fan = VAR_6;
 if (!VAR_6)
  return -VAR_0;

 VAR_6->type = "none / external";
 VAR_6->get = VAR_2;
 VAR_6->set = VAR_3;
 return 0;
}
