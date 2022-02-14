
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int OpMode; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int* bssid; } ;
struct TYPE_6__ {TYPE_1__ current_network; int state; } ;
typedef int RT_OP_MODE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int*) ;
 int FUNC_1 (TYPE_2__*,int*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int * FUNC_4 (int*,int*,int) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ,int) ;
 int FUNC_7 (struct net_device*,scalar_t__,int ) ;
 int FUNC_8 (struct net_device*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_9(
 struct net_device* VAR_8,
 u8* VAR_9,
 u8 VAR_10
 )
{
 struct r8192_priv *VAR_11 = FUNC_3(VAR_8);
 u8 VAR_12;

 FUNC_0(VAR_11->ieee80211, VAR_9);

 FUNC_1( VAR_11->ieee80211, VAR_9, VAR_10 );

 if(FUNC_4(VAR_11->ieee80211->current_network.bssid,VAR_9,6) == ((void*)0))
 {


  VAR_11->ieee80211->state = VAR_1;

  for(VAR_12=0;VAR_12<6;VAR_12++) VAR_11->ieee80211->current_network.bssid[VAR_12] = 0x22;


  VAR_11->OpMode = VAR_7;
  {
   RT_OP_MODE VAR_13 = VAR_11->OpMode;

   u8 VAR_14 = FUNC_5(VAR_8, VAR_2);

   VAR_14 &= 0xfc;

   switch(VAR_13)
   {
   case 128:
    VAR_14 |= VAR_4;

    break;

   case 129:
    VAR_14 |= VAR_3;

    break;

   case 130:
    VAR_14 |= VAR_5;

    break;

   default:
    VAR_14 |= VAR_6;
    break;
   }

   FUNC_6(VAR_8, VAR_2, VAR_14);



  }
  FUNC_2(VAR_11->ieee80211);

  FUNC_8(VAR_8, VAR_0, ((u16*)VAR_11->ieee80211->current_network.bssid)[0]);
  FUNC_7(VAR_8, VAR_0+2, ((u32*)(VAR_11->ieee80211->current_network.bssid+2))[0]);

 }

}
