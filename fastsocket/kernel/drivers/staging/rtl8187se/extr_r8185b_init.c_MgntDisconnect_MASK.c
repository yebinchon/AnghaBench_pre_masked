
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct r8180_priv {TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ iw_mode; } ;
struct TYPE_4__ {scalar_t__ mPss; int AwakeTimer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 TYPE_1__* VAR_5 ;

bool
FUNC_6(
 struct net_device *VAR_6,
 u8 VAR_7
)
{
 struct r8180_priv *VAR_8 = (struct r8180_priv *)FUNC_5(VAR_6);
 if(FUNC_1(VAR_8->ieee80211))
  FUNC_0(VAR_8->ieee80211);

 if( VAR_8->ieee80211->state == VAR_1 )
 {
  if( VAR_8->ieee80211->iw_mode == VAR_2 )
  {


   FUNC_3(VAR_6);
  }
  if( VAR_8->ieee80211->iw_mode == VAR_3 )
  {
   FUNC_2(VAR_6, VAR_7);
  }



 }

 return 1;
}
