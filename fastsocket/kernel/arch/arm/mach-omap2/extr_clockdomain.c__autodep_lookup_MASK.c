
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powerdomain {int dummy; } ;
struct TYPE_2__ {struct powerdomain* ptr; int name; } ;
struct clkdm_pwrdm_autodep {TYPE_1__ pwrdm; int omap_chip; } ;


 int VAR_0 ;
 struct powerdomain* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 struct powerdomain* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct clkdm_pwrdm_autodep *VAR_1)
{
 struct powerdomain *VAR_2;

 if (!VAR_1)
  return;

 if (!FUNC_1(VAR_1->omap_chip))
  return;

 VAR_2 = FUNC_3(VAR_1->pwrdm.name);
 if (!VAR_2) {
  FUNC_2("clockdomain: autodeps: powerdomain %s does not exist\n",
    VAR_1->pwrdm.name);
  VAR_2 = FUNC_0(-VAR_0);
 }
 VAR_1->pwrdm.ptr = VAR_2;
}
