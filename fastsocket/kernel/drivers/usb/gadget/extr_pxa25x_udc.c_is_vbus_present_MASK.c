
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa2xx_udc_mach_info {int (* udc_is_connected ) () ;scalar_t__ gpio_vbus_inverted; int gpio_vbus; } ;
struct TYPE_2__ {struct pxa2xx_udc_mach_info* mach; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(void)
{
 struct pxa2xx_udc_mach_info *VAR_1 = VAR_0->mach;

 if (FUNC_1(VAR_1->gpio_vbus)) {
  int VAR_2 = FUNC_0(VAR_1->gpio_vbus);

  if (VAR_1->gpio_vbus_inverted)
   return !VAR_2;
  else
   return !!VAR_2;
 }
 if (VAR_1->udc_is_connected)
  return VAR_1->udc_is_connected();
 return 1;
}
