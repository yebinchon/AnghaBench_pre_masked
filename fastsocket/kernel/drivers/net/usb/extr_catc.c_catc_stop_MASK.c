
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct catc {int ctrl_urb; int irq_urb; int tx_urb; int rx_urb; int timer; int is_f5u011; } ;


 int FUNC_0 (int *) ;
 struct catc* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct catc *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);

 if (!VAR_1->is_f5u011)
  FUNC_0(&VAR_1->timer);

 FUNC_3(VAR_1->rx_urb);
 FUNC_3(VAR_1->tx_urb);
 FUNC_3(VAR_1->irq_urb);
 FUNC_3(VAR_1->ctrl_urb);

 return 0;
}
