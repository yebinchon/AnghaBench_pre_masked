
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrdm_dep {struct powerdomain* pwrdm; scalar_t__ pwrdm_name; int omap_chip; } ;
struct powerdomain {int omap_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct powerdomain* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct powerdomain* FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct powerdomain *FUNC_3(struct powerdomain *VAR_2,
           struct pwrdm_dep *VAR_3)
{
 struct pwrdm_dep *VAR_4;

 if (!VAR_2 || !VAR_3 || !FUNC_1(VAR_2->omap_chip))
  return FUNC_0(-VAR_0);

 for (VAR_4 = VAR_3; VAR_4->pwrdm_name; VAR_4++) {

  if (!FUNC_1(VAR_4->omap_chip))
   continue;

  if (!VAR_4->pwrdm && VAR_4->pwrdm_name)
   VAR_4->pwrdm = FUNC_2(VAR_4->pwrdm_name);

  if (VAR_4->pwrdm == VAR_2)
   break;

 }

 if (!VAR_4->pwrdm_name)
  return FUNC_0(-VAR_1);

 return VAR_4->pwrdm;
}
