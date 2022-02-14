
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
struct TYPE_2__ {int PeerMimoPs; int IOTAction; scalar_t__ bCurShortGI20MHz; scalar_t__ bCurBW40MHz; scalar_t__ bCurShortGI40MHz; int bCurTxBW40MHz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct net_device*,int*) ;
 int FUNC_4 (struct net_device*,int ,int) ;
 int FUNC_5 (struct net_device*,scalar_t__,int) ;

void FUNC_6(struct net_device* VAR_9)
{
  struct r8192_priv* VAR_10 = FUNC_1(VAR_9);
 struct ieee80211_device* VAR_11 = VAR_10->ieee80211;
 u8* VAR_12 = VAR_11->dot11HTOperationalRateSet;

 u32 VAR_13 = 0;

 u8 VAR_14 = 0;
 int VAR_15 = VAR_11->mode;
 u8 VAR_16 = VAR_11->pHTInfo->PeerMimoPs;

 u8 VAR_17 = 0;

 FUNC_3(VAR_9, (u16*)(&VAR_13));
 VAR_13 |= (*(u16*)(VAR_12)) << 12;


 switch (VAR_15)
 {
  case 132:
   VAR_13 &= 0x00000FF0;
   break;
  case 131:
   VAR_13 &= 0x0000000D;
   break;
  case 130:
   VAR_13 &= 0x00000FF5;
   break;
  case 129:
  case 128:
  {
   VAR_17 = 1;

   if (VAR_16 == 0)
     {
    VAR_13 &= 0x0007F005;
   }
   else
   {
    u32 VAR_18;


    if ( VAR_10->rf_type == VAR_7 ||
     VAR_10->rf_type == VAR_6 ||
     (VAR_11->pHTInfo->IOTAction & VAR_4) )
      VAR_18 = 0x000ff005;
     else
      VAR_18 = 0x0f0ff005;

    if((VAR_11->pHTInfo->bCurTxBW40MHz) &&
        !(VAR_11->pHTInfo->IOTAction & VAR_5))
     VAR_18 |= 0x00000010;


     VAR_13 &= VAR_18;
     }
   }
   break;
  default:
   if(0)
   {
    if(VAR_10->rf_type == VAR_7)
    {
    VAR_13 &= 0x000ff0f5;
    }
    else
    {
    VAR_13 &= 0x0f0ff0f5;
    }
   }

   break;
 }

 VAR_13 &= 0x0FFFFFFF;


 if ( (VAR_17 && ((VAR_11->pHTInfo->IOTAction & VAR_3)==0)) &&
  ((VAR_11->pHTInfo->bCurBW40MHz && VAR_11->pHTInfo->bCurShortGI40MHz) ||
         (!VAR_11->pHTInfo->bCurBW40MHz && VAR_11->pHTInfo->bCurShortGI20MHz)))
 {
  u8 VAR_19 = 0;
  u32 VAR_20 = 0;
  VAR_13 |= 0x10000000;
  VAR_20 = (VAR_13>>12);
  for(VAR_19=15; VAR_19>0; VAR_19--)
  {
   if((1<<VAR_19) & VAR_20)
    break;
  }
  VAR_19 = (VAR_19<<12)|(VAR_19<<8)|(VAR_19<<4)|(VAR_19);
  FUNC_4(VAR_9, VAR_8, VAR_19);

 }
 FUNC_5(VAR_9, VAR_0+VAR_14*4, VAR_13);
 FUNC_2("=============>ARFR0+rate_index*4:%#x\n", VAR_13);


 if (VAR_13 & 0xfffff000){

  FUNC_0(VAR_9, VAR_2);
 }
 else {

  FUNC_0(VAR_9, VAR_1);
 }
}
