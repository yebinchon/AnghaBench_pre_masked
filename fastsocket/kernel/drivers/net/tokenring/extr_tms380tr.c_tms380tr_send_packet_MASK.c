
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_local {TYPE_2__* TplFree; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {TYPE_1__* NextTPLPtr; } ;
struct TYPE_3__ {scalar_t__ BusyFlag; } ;


 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_0,
           struct net_device *VAR_1)
{
 struct net_local *VAR_2 = FUNC_0(VAR_1);
 netdev_tx_t VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if(VAR_2->TplFree->NextTPLPtr->BusyFlag)
  FUNC_1(VAR_1);
 return VAR_3;
}
