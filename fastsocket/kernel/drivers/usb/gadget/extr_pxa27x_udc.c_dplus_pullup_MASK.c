
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_udc {int pullup_on; TYPE_1__* mach; } ;
struct TYPE_2__ {int gpio_pullup_inverted; int (* udc_command ) (int ) ;int gpio_pullup; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pxa_udc *VAR_2, int VAR_3)
{
 if (VAR_3) {
  if (FUNC_0(VAR_2->mach->gpio_pullup))
   FUNC_1(VAR_2->mach->gpio_pullup,
           !VAR_2->mach->gpio_pullup_inverted);
  if (VAR_2->mach->udc_command)
   VAR_2->mach->udc_command(VAR_0);
 } else {
  if (FUNC_0(VAR_2->mach->gpio_pullup))
   FUNC_1(VAR_2->mach->gpio_pullup,
           VAR_2->mach->gpio_pullup_inverted);
  if (VAR_2->mach->udc_command)
   VAR_2->mach->udc_command(VAR_1);
 }
 VAR_2->pullup_on = VAR_3;
}
