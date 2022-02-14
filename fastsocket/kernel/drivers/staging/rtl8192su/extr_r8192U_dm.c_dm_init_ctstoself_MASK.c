
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int CTSToSelfTH; int bCTSToSelfEnable; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device * VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0((struct net_device *)VAR_2);

 VAR_3->ieee80211->bCTSToSelfEnable = VAR_1;
 VAR_3->ieee80211->CTSToSelfTH = VAR_0;
}
