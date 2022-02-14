
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct r8180_priv {int tx_lock; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int tx_packets; int tx_bytes; } ;
struct TYPE_4__ {TYPE_1__ stats; int basic_rate; scalar_t__ bHwRadioOff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int ,scalar_t__,int,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct sk_buff *VAR_2,struct net_device *VAR_3)
{
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_1(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = VAR_0;

 FUNC_4(&VAR_4->tx_lock,VAR_5);

 if (VAR_4->ieee80211->bHwRadioOff) {
  FUNC_5(&VAR_4->tx_lock,VAR_5);
  FUNC_0(VAR_2);
  return VAR_1;
 }

 FUNC_3(VAR_3, VAR_2->data, VAR_2->len, VAR_6,
  0, 0,FUNC_2(VAR_4->ieee80211->basic_rate));

 VAR_4->ieee80211->stats.tx_bytes+=VAR_2->len;
 VAR_4->ieee80211->stats.tx_packets++;
 FUNC_5(&VAR_4->tx_lock,VAR_5);

 FUNC_0(VAR_2);
 return VAR_1;
}
