
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct TYPE_4__ {int SendWaitQueue; } ;
struct et131x_adapter {TYPE_1__ net_stats; scalar_t__ DriverNoPhyAccess; TYPE_2__ TxRing; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct et131x_adapter*) ;
 scalar_t__ FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct et131x_adapter*) ;
 int FUNC_4 (int *) ;
 struct et131x_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

int FUNC_7(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 int VAR_3 = 0;
 struct et131x_adapter *VAR_4 = ((void*)0);

 VAR_4 = FUNC_5(VAR_2);
 if (!FUNC_4(&VAR_4->TxRing.SendWaitQueue) ||
     FUNC_1(VAR_4)) {




  VAR_3 = -VAR_0;
 } else {







  if (FUNC_0(VAR_4) || VAR_4->DriverNoPhyAccess
      || !FUNC_6(VAR_2)) {
   FUNC_2(VAR_1);
   VAR_1 = ((void*)0);

   VAR_4->net_stats.tx_dropped++;
  } else {
   VAR_3 = FUNC_3(VAR_1, VAR_4);

   if (VAR_3 == -VAR_0) {






   } else if (VAR_3 != 0) {



    FUNC_2(VAR_1);
    VAR_1 = ((void*)0);
    VAR_4->net_stats.tx_dropped++;
   }
  }
 }
 return VAR_3;
}
