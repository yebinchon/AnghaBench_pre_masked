
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ mPss; scalar_t__ mActingAsAp; int AwakeTimer; } ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ iw_mode; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct r8192_priv* FUNC_5 (struct net_device*) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static bool
FUNC_6(
 struct net_device* VAR_10,
 u8 VAR_11
)
{
 struct r8192_priv *VAR_12 = FUNC_5(VAR_10);
 if( VAR_12->ieee80211->state == VAR_3 )
 {
  if( VAR_12->ieee80211->iw_mode == VAR_4 )
  {

   FUNC_2(VAR_10);
  }
  if( VAR_12->ieee80211->iw_mode == VAR_5 )
  {






   FUNC_1(VAR_10, VAR_11);
  }



 }

 return 1;
}
