
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long txbytesunicast; unsigned long rxbytesunicast; } ;
struct r8192_priv {scalar_t__ undecorated_smoothed_pwdb; TYPE_2__ stats; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ IOTPeer; int IOTAction; } ;
struct TYPE_4__ {scalar_t__ bCTSToSelfEnable; scalar_t__ CTSToSelfTH; TYPE_3__* pHTInfo; } ;
typedef TYPE_3__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_0((struct net_device *)VAR_3);
 PRT_HIGH_THROUGHPUT VAR_5 = VAR_4->ieee80211->pHTInfo;
 static unsigned long VAR_6 = 0;
 static unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;

 if(VAR_4->ieee80211->bCTSToSelfEnable != VAR_2)
 {
  VAR_5->IOTAction &= ~VAR_0;
  return;
 }






 if(VAR_5->IOTPeer == VAR_1)
 {
  VAR_8 = VAR_4->stats.txbytesunicast - VAR_6;
  VAR_9 = VAR_4->stats.rxbytesunicast - VAR_7;
  if(VAR_9 > 4*VAR_8)
  {
   VAR_5->IOTAction &= ~VAR_0;

  }
  else
  {

   VAR_5->IOTAction |= VAR_0;
  }

  VAR_6 = VAR_4->stats.txbytesunicast;
  VAR_7 = VAR_4->stats.rxbytesunicast;
 }
}
