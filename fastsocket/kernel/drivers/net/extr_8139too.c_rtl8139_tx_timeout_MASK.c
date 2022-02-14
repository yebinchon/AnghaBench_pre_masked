
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {int watchdog_fired; int thread; int have_thread; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct rtl8139_private* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3 (struct net_device *VAR_2)
{
 struct rtl8139_private *VAR_3 = FUNC_1(VAR_2);

 VAR_3->watchdog_fired = 1;
 if (!VAR_3->have_thread) {
  FUNC_0(&VAR_3->thread, VAR_1);
  FUNC_2(&VAR_3->thread, VAR_0);
 }
}
