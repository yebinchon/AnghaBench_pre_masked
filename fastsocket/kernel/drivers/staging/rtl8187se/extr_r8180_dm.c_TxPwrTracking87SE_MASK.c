
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct r8180_priv {int ThermalMeter; char* chtxpwr; char* chtxpwr_ofdm; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;

void
FUNC_3(
 struct net_device *VAR_1
)
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_0(VAR_1);
 u8 VAR_3, VAR_4, VAR_5;
 char VAR_6, VAR_7;


 VAR_3 = FUNC_1(VAR_1, VAR_0);
 VAR_4 = (VAR_3 & 0xf0)>>4;
 VAR_4 = (VAR_4>0x0c)? 0x0c:VAR_4;



 if( VAR_4 != VAR_2->ThermalMeter)
 {



  for(VAR_5 = 1; VAR_5<15; VAR_5++)
  {
   VAR_6 = VAR_2->chtxpwr[VAR_5];
   VAR_7 = VAR_2->chtxpwr_ofdm[VAR_5];

   if( VAR_4 > VAR_2->ThermalMeter )
   {
    VAR_6 += (VAR_4 - VAR_2->ThermalMeter)*2;
    VAR_7 += (VAR_4 - VAR_2->ThermalMeter)*2;

    if(VAR_6 >35)
     VAR_6 = 35;
    if(VAR_7 >35)
     VAR_7 = 35;
   }
   else
   {
    VAR_6 -= (VAR_2->ThermalMeter - VAR_4)*2;
    VAR_7 -= (VAR_2->ThermalMeter - VAR_4)*2;

    if(VAR_6 <0)
     VAR_6 = 0;
    if(VAR_7 <0)
     VAR_7 = 0;
   }


   VAR_2->chtxpwr[VAR_5] = VAR_6;
   VAR_2->chtxpwr_ofdm[VAR_5] = VAR_7;
  }


  FUNC_2(VAR_1, VAR_2->ieee80211->current_network.channel);
 }
 VAR_2->ThermalMeter = VAR_4;
}
