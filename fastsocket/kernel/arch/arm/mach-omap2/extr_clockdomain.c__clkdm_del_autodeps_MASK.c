
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* ptr; } ;
struct clockdomain {TYPE_1__ pwrdm; } ;
struct TYPE_9__ {TYPE_4__* ptr; } ;
struct clkdm_pwrdm_autodep {TYPE_2__ pwrdm; int omap_chip; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int name; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 struct clkdm_pwrdm_autodep* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct clockdomain *VAR_1)
{
 struct clkdm_pwrdm_autodep *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->pwrdm.ptr; VAR_2++) {
  if (FUNC_0(VAR_2->pwrdm.ptr))
   continue;

  if (!FUNC_1(VAR_2->omap_chip))
   continue;

  FUNC_2("clockdomain: removing %s sleepdep/wkdep for "
    "pwrdm %s\n", VAR_2->pwrdm.ptr->name,
    VAR_1->pwrdm.ptr->name);

  FUNC_3(VAR_1->pwrdm.ptr, VAR_2->pwrdm.ptr);
  FUNC_4(VAR_1->pwrdm.ptr, VAR_2->pwrdm.ptr);
 }
}
