
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ iw_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;

void FUNC_3(struct net_device *VAR_11)
{
 struct r8192_priv *VAR_12 = FUNC_0(VAR_11);
 u8 VAR_13;

 VAR_13 = FUNC_1(VAR_11, VAR_4);
 VAR_13 &= ~ VAR_7;






 if (VAR_12->ieee80211->state == VAR_0){

  if (VAR_12->ieee80211->iw_mode == VAR_2)
   VAR_13 |= (VAR_6<<VAR_10);
  else if (VAR_12->ieee80211->iw_mode == VAR_1)
   VAR_13 |= (VAR_5<<VAR_10);
  else if (VAR_12->ieee80211->iw_mode == VAR_3)
   VAR_13 |= (VAR_8<<VAR_10);

 }else
  VAR_13 |= (VAR_9<<VAR_10);

 FUNC_2(VAR_11, VAR_4, VAR_13);
}
