
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int short_preamble; int slot_time; TYPE_2__* ieee80211; int basic_rate; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int mode; } ;
struct TYPE_4__ {TYPE_1__* pHTInfo; struct ieee80211_network current_network; } ;
struct TYPE_3__ {int bCurrentRT2RTLongSlotTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device* VAR_9, u16 VAR_10)
{
 u32 VAR_11 = 0;
 struct r8192_priv *VAR_12 = FUNC_0(VAR_9);
 struct ieee80211_network *VAR_13 = &VAR_12->ieee80211->current_network;
 VAR_12->short_preamble = VAR_10 & VAR_7;
 VAR_11 = VAR_12->basic_rate;
 if (VAR_12->short_preamble)
  VAR_11 |= VAR_0;
 FUNC_2(VAR_9, VAR_4, VAR_11);

 if (VAR_13->mode & (VAR_1|VAR_2))
 {
  u8 VAR_14 = 0;
  if ((VAR_10 & VAR_8)&&(!VAR_12->ieee80211->pHTInfo->bCurrentRT2RTLongSlotTime))
  {
   VAR_14 = VAR_5;
  }
  else
   VAR_14 = VAR_3;
  VAR_12->slot_time = VAR_14;
  FUNC_1(VAR_9, VAR_6, VAR_14);
 }

}
