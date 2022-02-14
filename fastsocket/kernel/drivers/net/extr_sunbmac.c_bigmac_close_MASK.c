
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct bigmac {scalar_t__ timer_ticks; int timer_state; int bigmac_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct bigmac*) ;
 int FUNC_1 (struct bigmac*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct bigmac*) ;
 struct bigmac* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct bigmac *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_2->bigmac_timer);
 VAR_2->timer_state = VAR_0;
 VAR_2->timer_ticks = 0;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_3(VAR_1->irq, VAR_2);
 return 0;
}
