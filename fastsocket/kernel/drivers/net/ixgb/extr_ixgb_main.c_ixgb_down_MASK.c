
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgb_adapter {scalar_t__ link_duplex; scalar_t__ link_speed; int watchdog_timer; TYPE_1__* pdev; scalar_t__ have_msi; int napi; int flags; struct net_device* netdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct ixgb_adapter*) ;
 int FUNC_3 (struct ixgb_adapter*) ;
 int FUNC_4 (struct ixgb_adapter*) ;
 int FUNC_5 (struct ixgb_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int *) ;

void
FUNC_11(struct ixgb_adapter *VAR_1, bool VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;


 FUNC_10(VAR_0, &VAR_1->flags);

 FUNC_6(&VAR_1->napi);

 FUNC_4(VAR_1);
 FUNC_1(VAR_1->pdev->irq, VAR_3);

 if (VAR_1->have_msi)
  FUNC_9(VAR_1->pdev);

 if (VAR_2)
  FUNC_0(&VAR_1->watchdog_timer);

 VAR_1->link_speed = 0;
 VAR_1->link_duplex = 0;
 FUNC_7(VAR_3);
 FUNC_8(VAR_3);

 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
