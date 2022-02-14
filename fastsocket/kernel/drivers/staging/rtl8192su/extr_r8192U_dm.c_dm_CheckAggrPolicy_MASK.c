
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int txbytesunicast; int rxbytesunicast; } ;
struct r8192_priv {TYPE_2__ stats; TYPE_1__* ieee80211; } ;
struct net_device {int * TcbCountInAggrQueue; int * TcbAggrQueue; } ;
struct TYPE_6__ {int IOTAction; int bCurrent_AMSDU_Support; int bCurrentAMPDUEnable; } ;
struct TYPE_4__ {TYPE_3__* pHTInfo; } ;
typedef scalar_t__ PRT_TCB ;
typedef TYPE_3__* PRT_HIGH_THROUGHPUT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 size_t VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_3(VAR_7);
 PRT_HIGH_THROUGHPUT VAR_9 = VAR_8->ieee80211->pHTInfo;


 bool VAR_10 = 0;

 static u8 VAR_11 = 0;
 static u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;


 if(VAR_8->ieee80211->pHTInfo->IOTAction & VAR_2)
 {
  if(FUNC_4(VAR_7, VAR_3) > VAR_0)
   VAR_10 = 1;
 }
 else if(VAR_8->ieee80211->pHTInfo->IOTAction & VAR_1)
 {
  if(FUNC_4(VAR_7, VAR_3) > VAR_0)
  {
   VAR_13 = VAR_8->stats.txbytesunicast - VAR_11;
   VAR_14 = VAR_8->stats.rxbytesunicast - VAR_12;

   if(VAR_14 <= 4*VAR_13)
    VAR_10 = 1;
  }
 }
 else
 {

  return;
 }


 if(VAR_10 && !VAR_9->bCurrent_AMSDU_Support)
 {
  VAR_9->bCurrent_AMSDU_Support = 1;
 }
 else if(!VAR_10 && VAR_9->bCurrent_AMSDU_Support)
 {
 }


 if(VAR_8->ieee80211->pHTInfo->IOTAction & VAR_1)
 {
  if(!VAR_10)
   VAR_9->bCurrentAMPDUEnable = 1;
 }


 VAR_11 = VAR_8->stats.txbytesunicast;
 VAR_12 = VAR_8->stats.rxbytesunicast;
}
