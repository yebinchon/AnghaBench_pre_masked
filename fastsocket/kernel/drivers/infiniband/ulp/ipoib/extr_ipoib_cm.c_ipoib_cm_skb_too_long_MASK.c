
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int skb_task; int skb_queue; } ;
struct ipoib_dev_priv {TYPE_2__ cm; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* update_pmtu ) (TYPE_3__*,unsigned int) ;} ;


 int VAR_0 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (TYPE_3__*,unsigned int) ;

void FUNC_6(struct net_device *VAR_1, struct sk_buff *VAR_2,
      unsigned int VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_3(&VAR_4->cm.skb_queue);

 if (FUNC_2(VAR_2))
  FUNC_2(VAR_2)->ops->update_pmtu(FUNC_2(VAR_2), VAR_3);

 FUNC_4(&VAR_4->cm.skb_queue, VAR_2);
 if (VAR_5)
  FUNC_1(VAR_0, &VAR_4->cm.skb_task);
}
