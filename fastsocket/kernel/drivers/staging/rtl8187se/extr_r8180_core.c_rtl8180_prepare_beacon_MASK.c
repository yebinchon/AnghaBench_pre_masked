
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct r8180_priv {TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int beacon_interval; } ;
struct TYPE_4__ {int basic_rate; TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct net_device*,int ,int ) ;

void FUNC_8(struct net_device *VAR_3)
{
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_3(VAR_3);
 struct sk_buff *VAR_5;

 u16 VAR_6 = FUNC_5(VAR_3, VAR_1);
 VAR_6 &= ~VAR_2;
 VAR_6 |= FUNC_0(VAR_4->ieee80211->current_network.beacon_interval);
 FUNC_7(VAR_3, VAR_1, VAR_6);

 VAR_5 = FUNC_2(VAR_4->ieee80211);
 if(VAR_5){
  FUNC_6(VAR_3,VAR_5->data,VAR_5->len,VAR_0,
   0,0,FUNC_4(VAR_4->ieee80211->basic_rate));
  FUNC_1(VAR_5);
 }
}
