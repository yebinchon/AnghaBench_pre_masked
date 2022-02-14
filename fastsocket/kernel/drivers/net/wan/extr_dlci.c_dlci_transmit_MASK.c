
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct dlci_local {TYPE_2__* slave; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {TYPE_1__* netdev_ops; } ;
struct TYPE_3__ {int (* ndo_start_xmit ) (struct sk_buff*,TYPE_2__*) ;} ;


 int VAR_0 ;
 struct dlci_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,TYPE_2__*) ;

__attribute__((used)) static netdev_tx_t FUNC_2(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct dlci_local *VAR_3 = FUNC_0(VAR_2);

 if (VAR_1)
  VAR_3->slave->netdev_ops->ndo_start_xmit(VAR_1, VAR_3->slave);
 return VAR_0;
}
