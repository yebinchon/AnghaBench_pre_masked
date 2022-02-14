
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * skb_aggQ; int * skb_waitQ; } ;
typedef int RESET_TYPE ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 size_t VAR_4 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int *) ;

RESET_TYPE
FUNC_4(struct net_device *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_2(VAR_5);
 u8 VAR_7;


 bool VAR_8 = 0;
      for (VAR_7 = 0; VAR_7<=VAR_0;VAR_7 ++)
      {
        if(VAR_7 == VAR_4)
           continue;

        if((FUNC_3(&VAR_6->ieee80211->skb_waitQ[VAR_7]) == 0) && (FUNC_3(&VAR_6->ieee80211->skb_aggQ[VAR_7]) == 0))
     continue;


              VAR_8 = 1;
      }




 if(VAR_8)
 {
  if(FUNC_0(VAR_5))
  {
   FUNC_1(VAR_1, "TxCheckStuck(): Fw indicates no Tx condition! \n");
   return VAR_3;
  }
 }

 return VAR_2;
}
