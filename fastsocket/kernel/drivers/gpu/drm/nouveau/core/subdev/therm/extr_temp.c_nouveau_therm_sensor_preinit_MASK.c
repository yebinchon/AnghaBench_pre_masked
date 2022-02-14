
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_therm {scalar_t__ (* temp_get ) (struct nouveau_therm*) ;} ;


 int FUNC_0 (struct nouveau_therm*,char*,char const*) ;
 scalar_t__ FUNC_1 (struct nouveau_therm*) ;

void
FUNC_2(struct nouveau_therm *VAR_0)
{
 const char *VAR_1 = "yes";

 if (VAR_0->temp_get(VAR_0) < 0)
  VAR_1 = "no";

 FUNC_0(VAR_0, "internal sensor: %s\n", VAR_1);
}
