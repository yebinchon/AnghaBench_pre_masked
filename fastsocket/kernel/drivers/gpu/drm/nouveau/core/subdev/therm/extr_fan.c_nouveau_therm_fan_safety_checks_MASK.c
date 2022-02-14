
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_therm_priv {TYPE_1__* fan; } ;
struct nouveau_therm {int dummy; } ;
struct TYPE_4__ {int min_duty; int max_duty; } ;
struct TYPE_3__ {TYPE_2__ bios; } ;



__attribute__((used)) static void
FUNC_0(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;

 if (VAR_1->fan->bios.min_duty > 100)
  VAR_1->fan->bios.min_duty = 100;
 if (VAR_1->fan->bios.max_duty > 100)
  VAR_1->fan->bios.max_duty = 100;

 if (VAR_1->fan->bios.min_duty > VAR_1->fan->bios.max_duty)
  VAR_1->fan->bios.min_duty = VAR_1->fan->bios.max_duty;
}
