
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int rf_type; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_device {int* dot11HTOperationalRateSet; int mode; TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ bCurShortGI20MHz; scalar_t__ bCurTxBW40MHz; scalar_t__ bCurShortGI40MHz; int PeerMimoPs; } ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,scalar_t__,int) ;

void FUNC_4(struct net_device* VAR_3)



{
 struct r8192_priv* VAR_4 = FUNC_0(VAR_3);
 struct ieee80211_device* VAR_5 = VAR_4->ieee80211;
 u8* VAR_6 = VAR_5->dot11HTOperationalRateSet;

 u32 VAR_7 = 0;
 u8 VAR_8 = 0;
 FUNC_1(VAR_3, (u16*)(&VAR_7));
 VAR_7 |= (*(u16*)(VAR_6)) << 12;

 switch (VAR_5->mode)
 {
  case 132:
   VAR_7 &= 0x00000FF0;
   break;
  case 131:
   VAR_7 &= 0x0000000F;
   break;
  case 130:
   VAR_7 &= 0x00000FF7;
   break;
  case 129:
  case 128:
   if (VAR_5->pHTInfo->PeerMimoPs == 0)
    VAR_7 &= 0x0007F007;
   else{
    if (VAR_4->rf_type == VAR_1)
     VAR_7 &= 0x000FF007;
    else
     VAR_7 &= 0x0F81F007;
   }
   break;
  default:
   break;
 }
 VAR_7 &= 0x0FFFFFFF;
 if(VAR_5->pHTInfo->bCurTxBW40MHz && VAR_5->pHTInfo->bCurShortGI40MHz){
  VAR_7 |= 0x80000000;
 }else if(!VAR_5->pHTInfo->bCurTxBW40MHz && VAR_5->pHTInfo->bCurShortGI20MHz){
  VAR_7 |= 0x80000000;
 }
 FUNC_3(VAR_3, VAR_0+VAR_8*4, VAR_7);
 FUNC_2(VAR_3, VAR_2, 1);
}
