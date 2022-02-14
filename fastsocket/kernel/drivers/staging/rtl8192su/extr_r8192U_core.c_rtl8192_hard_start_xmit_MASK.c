
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {int tx_lock; TYPE_2__* ops; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
typedef int dev ;
struct TYPE_6__ {scalar_t__ queue_index; } ;
typedef TYPE_3__ cb_desc ;
struct TYPE_5__ {int (* rtl819x_tx ) (struct net_device*,struct sk_buff*) ;int (* rtl819x_tx_cmd ) (struct net_device*,struct sk_buff*) ;} ;
struct TYPE_4__ {int tx_headroom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned char*,struct net_device**,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct net_device*,struct sk_buff*) ;
 int FUNC_6 (struct net_device*,struct sk_buff*) ;

int FUNC_7(struct sk_buff *VAR_3,struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_0(VAR_4);
 int VAR_6;
 unsigned long VAR_7;
        cb_desc *VAR_8 = (cb_desc *)(VAR_3->cb + VAR_0);
        u8 VAR_9 = VAR_8->queue_index;


 FUNC_3(&VAR_5->tx_lock,VAR_7);

        FUNC_1((unsigned char *)(VAR_3->cb),&VAR_4,sizeof(VAR_4));
 if(VAR_9 == VAR_1) {
  FUNC_2(VAR_3, VAR_2);
  VAR_5->ops->rtl819x_tx_cmd(VAR_4, VAR_3);
  VAR_6 = 1;
         FUNC_4(&VAR_5->tx_lock,VAR_7);
  return VAR_6;
 } else {
  FUNC_2(VAR_3, VAR_5->ieee80211->tx_headroom);
  VAR_6 = VAR_5->ops->rtl819x_tx(VAR_4, VAR_3);
 }

 FUNC_4(&VAR_5->tx_lock,VAR_7);

 return VAR_6;
}
