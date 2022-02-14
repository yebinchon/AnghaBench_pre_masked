
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct mpt_lan_priv {TYPE_1__* mpt_dev; } ;
struct TYPE_2__ {scalar_t__ active; } ;
typedef TYPE_1__ MPT_ADAPTER ;


 int FUNC_0 (char*) ;
 struct mpt_lan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0)
{
 struct mpt_lan_priv *VAR_1 = FUNC_1(VAR_0);
 MPT_ADAPTER *VAR_2 = VAR_1->mpt_dev;

 if (VAR_2->active) {
  FUNC_0 (("mptlan/tx_timeout: calling netif_wake_queue for %s.\n", VAR_0->name));
  FUNC_2(VAR_0);
 }
}
