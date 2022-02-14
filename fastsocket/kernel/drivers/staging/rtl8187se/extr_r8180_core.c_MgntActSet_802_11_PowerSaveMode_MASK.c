
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {TYPE_1__* ieee80211; } ;
struct TYPE_2__ {scalar_t__ iw_mode; int ps; } ;
typedef int RT_PS_MODE ;


 scalar_t__ VAR_0 ;

bool
FUNC_0(
 struct r8180_priv *VAR_1,
 RT_PS_MODE VAR_2
)
{

 if(VAR_1->ieee80211->iw_mode == VAR_0)
  return 0;

 VAR_1->ieee80211->ps = VAR_2;

 return 1;
}
