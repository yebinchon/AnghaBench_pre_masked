
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int OpMode; int ReceiveConfig; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int* bssid; } ;
struct TYPE_5__ {TYPE_1__ current_network; int state; } ;
typedef int RT_OP_MODE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,scalar_t__) ;
 int FUNC_5 (struct net_device*,int ,int) ;
 int FUNC_6 (struct net_device*,scalar_t__,int) ;
 int FUNC_7 (struct net_device*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_8(
 struct net_device* VAR_10
)
{
 struct r8192_priv *VAR_11 = FUNC_0(VAR_10);

 u8 VAR_12;
 bool VAR_13 = 0;



 VAR_11->ieee80211->state = VAR_1;


 for(VAR_12=0;VAR_12<6;VAR_12++) VAR_11->ieee80211->current_network.bssid[VAR_12]= 0x55;
 VAR_11->OpMode = VAR_9;
 FUNC_7(VAR_10, VAR_0, ((u16*)VAR_11->ieee80211->current_network.bssid)[0]);
 FUNC_6(VAR_10, VAR_0+2, ((u32*)(VAR_11->ieee80211->current_network.bssid+2))[0]);
 {
   RT_OP_MODE VAR_14 = VAR_11->OpMode;

   u8 VAR_15 = FUNC_3(VAR_10, VAR_2);

   VAR_15 &= 0xfc;

   switch(VAR_14)
   {
   case 128:
    VAR_15 |= VAR_4;

    break;

   case 129:
    VAR_15 |= VAR_3;

    break;

   case 130:
    VAR_15 |= VAR_5;

    break;

   default:
    VAR_15 |= VAR_6;
    break;
   }

   FUNC_5(VAR_10, VAR_2, VAR_15);



 }
 FUNC_1(VAR_11->ieee80211);


 VAR_13 = 0;
 {
   u32 VAR_16, VAR_17;
   VAR_17 = VAR_13;
   VAR_16 = FUNC_4(VAR_10,VAR_7);
   VAR_11->ReceiveConfig = VAR_16;
   if (VAR_17 == 1)
    VAR_16 |= (VAR_8);
   else if (VAR_17 == 0)
    VAR_16 &= (~VAR_8);

   {
    FUNC_6(VAR_10, VAR_7,VAR_16);
    VAR_11->ReceiveConfig = VAR_16;
   }

  }

 FUNC_2(VAR_11->ieee80211);

}
