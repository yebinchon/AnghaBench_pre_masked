
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {int skb_queue; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * skb_aggQ; int * skb_waitQ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,int ,int) ;

void FUNC_6(struct net_device *VAR_4)
{
 u8 VAR_5;
 struct r8192_priv *VAR_6 = FUNC_1(VAR_4);
        int VAR_7;

 VAR_5=FUNC_3(VAR_4,VAR_0);

  FUNC_5(VAR_4, VAR_0, VAR_5 &~ (VAR_2|VAR_1));


 FUNC_0(VAR_4);
 FUNC_2(30);

        for(VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
                FUNC_4(&VAR_6->ieee80211->skb_waitQ [VAR_7]);
        }
        for(VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
                FUNC_4(&VAR_6->ieee80211->skb_aggQ [VAR_7]);
        }


 FUNC_4(&VAR_6->skb_queue);
 return;
}
