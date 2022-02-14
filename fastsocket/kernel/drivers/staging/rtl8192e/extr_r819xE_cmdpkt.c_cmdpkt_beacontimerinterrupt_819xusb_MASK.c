
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct r8192_priv {TYPE_3__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_6__ {TYPE_1__* pHTInfo; TYPE_2__ current_network; } ;
struct TYPE_4__ {int bCurSuppCCK; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_3);
 u16 VAR_5;
 {



  if((VAR_4->ieee80211->current_network.mode == VAR_0) ||
   (VAR_4->ieee80211->current_network.mode == VAR_2) ||
   ((VAR_4->ieee80211->current_network.mode == VAR_1) && (!VAR_4->ieee80211->pHTInfo->bCurSuppCCK)))
  {
   VAR_5 = 60;
   FUNC_0("send beacon frame  tx rate is 6Mbpm\n");
  }
  else
  {
   VAR_5 =10;
   FUNC_0("send beacon frame  tx rate is 1Mbpm\n");
  }



 }

}
