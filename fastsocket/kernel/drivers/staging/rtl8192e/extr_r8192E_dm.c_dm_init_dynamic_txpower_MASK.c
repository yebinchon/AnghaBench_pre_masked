
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int bLastDTPFlag_High; int bLastDTPFlag_Low; int bDynamicTxHighPower; int bDynamicTxLowPower; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int bdynamic_txpower_enable; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);


 VAR_1->ieee80211->bdynamic_txpower_enable = 1;
 VAR_1->bLastDTPFlag_High = 0;
 VAR_1->bLastDTPFlag_Low = 0;
 VAR_1->bDynamicTxHighPower = 0;
 VAR_1->bDynamicTxLowPower = 0;
}
