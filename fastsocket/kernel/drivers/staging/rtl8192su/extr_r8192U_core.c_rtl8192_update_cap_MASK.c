
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct r8192_priv {int short_preamble; int nCur40MhzPrimeSC; int slot_time; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int mode; } ;
struct TYPE_4__ {TYPE_1__* pHTInfo; struct ieee80211_network current_network; } ;
struct TYPE_3__ {int bCurrentRT2RTLongSlotTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,scalar_t__,int) ;

void FUNC_2(struct net_device* VAR_8, u16 VAR_9)
{

 struct r8192_priv *VAR_10 = FUNC_0(VAR_8);
 struct ieee80211_network *VAR_11 = &VAR_10->ieee80211->current_network;
 VAR_10->short_preamble = VAR_9 & VAR_6;


 if(0)
 {
  u8 VAR_12 = 0;
  VAR_12 = ((VAR_10->nCur40MhzPrimeSC) << 5);
  if (VAR_10->short_preamble)
   VAR_12 |= 0x80;
  FUNC_1(VAR_8, VAR_3+2, VAR_12);
 }

 if (VAR_11->mode & (VAR_0|VAR_1))
 {
  u8 VAR_13 = 0;
  if ((VAR_9 & VAR_7)&&(!VAR_10->ieee80211->pHTInfo->bCurrentRT2RTLongSlotTime))
  {
   VAR_13 = VAR_4;
  }
  else
   VAR_13 = VAR_2;
  VAR_10->slot_time = VAR_13;
  FUNC_1(VAR_8, VAR_5, VAR_13);
 }

}
