
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* disable_irq ) (struct wl1251*) ;} ;


 int FUNC_0 (struct wl1251*) ;

void FUNC_1(struct wl1251 *VAR_0)
{
 VAR_0->if_ops->disable_irq(VAR_0);
}
