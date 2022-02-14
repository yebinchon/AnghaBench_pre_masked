
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct r8180_priv {int RegHiPwrUpperTh; int RegHiPwrLowerTh; scalar_t__ RegRSSIHiPwrUpperTh; scalar_t__ RegRSSIHiPwrLowerTh; char* chtxpwr_ofdm; char* chtxpwr; int UndecoratedSmoothedSS; scalar_t__ CurCCKRSSI; int bToUpdateTxPwr; scalar_t__ bCurCCKPkt; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {size_t channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,char) ;

void
FUNC_3(
 struct net_device *VAR_2
 )
{
 struct r8180_priv *VAR_3 = FUNC_0(VAR_2);
 u16 VAR_4 = 0;
 u16 VAR_5 = 0;
 u8 VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 char VAR_9, VAR_10;



 VAR_4 = VAR_3->RegHiPwrUpperTh;
 VAR_5 = VAR_3->RegHiPwrLowerTh;

 VAR_4 = VAR_4 * 10;
 VAR_5 = VAR_5 * 10;
 VAR_6 = VAR_3->RegRSSIHiPwrUpperTh;
 VAR_7 = VAR_3->RegRSSIHiPwrLowerTh;


 VAR_9 = VAR_3->chtxpwr_ofdm[VAR_3->ieee80211->current_network.channel];
 VAR_10 = VAR_3->chtxpwr[VAR_3->ieee80211->current_network.channel];



 if((VAR_3->UndecoratedSmoothedSS > VAR_4) ||
  (VAR_3->bCurCCKPkt && (VAR_3->CurCCKRSSI > VAR_6)))
 {



  VAR_3->bToUpdateTxPwr = 1;
  VAR_8= FUNC_1(VAR_2, VAR_0);


  if( VAR_10 == VAR_8)
  {
  VAR_8 = (VAR_8 > 16) ? (VAR_8 -16): 0;
  FUNC_2(VAR_2, VAR_0, VAR_8);

  VAR_8= FUNC_1(VAR_2, VAR_1);
  VAR_8 = (VAR_8 > 16) ? (VAR_8 -16): 0;
  FUNC_2(VAR_2, VAR_1, VAR_8);
  }

 }
 else if((VAR_3->UndecoratedSmoothedSS < VAR_5) &&
  (!VAR_3->bCurCCKPkt || VAR_3->CurCCKRSSI < VAR_7))
 {

  if(VAR_3->bToUpdateTxPwr)
  {
   VAR_3->bToUpdateTxPwr = 0;

   VAR_8= FUNC_1(VAR_2, VAR_0);
   if(VAR_8 < VAR_10)
   {


   FUNC_2(VAR_2, VAR_0, VAR_10);
   }

   VAR_8= FUNC_1(VAR_2, VAR_1);
   if(VAR_8 < VAR_9)
   {


   FUNC_2(VAR_2, VAR_1, VAR_9);
   }
  }
 }


}
