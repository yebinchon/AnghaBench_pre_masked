
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8180_priv {TYPE_1__* ieee80211; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,int ,int) ;

void FUNC_5(struct net_device *VAR_13)
{
 struct r8180_priv *VAR_14 = FUNC_0(VAR_13);
 u8 VAR_15;
 u32 VAR_16;

 VAR_15 = FUNC_1(VAR_13, VAR_4);
 VAR_15 &= ~ VAR_7;

 VAR_16=FUNC_2(VAR_13,VAR_12);

 if(VAR_14->ieee80211->state == VAR_0)
 {
  if(VAR_14->ieee80211->iw_mode == VAR_1)
   VAR_15 |= (VAR_5<<VAR_10);
  else if (VAR_14->ieee80211->iw_mode == VAR_3)
   VAR_15 |= (VAR_8<<VAR_10);
  else if (VAR_14->ieee80211->iw_mode == VAR_2)
   VAR_15 |= (VAR_6<<VAR_10);
  else
   VAR_15 |= (VAR_9<<VAR_10);
  VAR_16 |= (1<<VAR_11);

 }else {
  VAR_15 |= (VAR_9<<VAR_10);
  VAR_16 &= ~(1<<VAR_11);
 }

 FUNC_3(VAR_13, VAR_4, VAR_15);
 FUNC_4(VAR_13, VAR_12, VAR_16);
}
