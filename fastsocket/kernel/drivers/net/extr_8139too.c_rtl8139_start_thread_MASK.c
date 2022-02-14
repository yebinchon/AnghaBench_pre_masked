
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {int twistie; scalar_t__ chipset; int drv_flags; int have_thread; int thread; scalar_t__ watchdog_fired; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct rtl8139_private *VAR_3)
{
 VAR_3->twistie = 0;
 if (VAR_3->chipset == VAR_0)
  VAR_3->twistie = 1;
 else if (VAR_3->drv_flags & VAR_1)
  return;

 VAR_3->have_thread = 1;
 VAR_3->watchdog_fired = 0;

 FUNC_0(&VAR_3->thread, VAR_2);
}
