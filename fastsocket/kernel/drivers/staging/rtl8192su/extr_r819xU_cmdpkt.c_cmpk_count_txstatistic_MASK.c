
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int txfeedbackretry; int txretrycount; int txerrunicast; int txerrbroadcast; int txerrmulticast; int txerrbytestotal; int txerrtotal; int txfeedbackfail; int txbytesunicast; int txunicast; int txbytesbroadcast; int txbroadcast; int txbytesmulticast; int txmulticast; int txokinperiod; int txokbytestotal; int txoktotal; int txfeedbackok; } ;
struct r8192_priv {TYPE_2__ stats; } ;
struct net_device {int dummy; } ;
typedef int pu1Byte ;
struct TYPE_9__ {scalar_t__ pkt_type; scalar_t__ retry_cnt; scalar_t__ pkt_length; scalar_t__ tok; } ;
typedef TYPE_3__ cmpk_txfb_t ;
struct TYPE_7__ {int (* GetHwRegHandler ) (TYPE_4__*,int ,int ) ;} ;
struct TYPE_10__ {scalar_t__ bInHctTest; TYPE_1__ HalFunc; } ;
typedef scalar_t__ RT_RF_POWER_STATE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(
 struct net_device *VAR_5,
 cmpk_txfb_t *VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_0(VAR_5);
 if (VAR_6->tok)
 {
  VAR_7->stats.txfeedbackok++;
  VAR_7->stats.txoktotal++;
  VAR_7->stats.txokbytestotal += VAR_6->pkt_length;
  VAR_7->stats.txokinperiod++;


  if (VAR_6->pkt_type == VAR_2)
  {
   VAR_7->stats.txmulticast++;
   VAR_7->stats.txbytesmulticast += VAR_6->pkt_length;
  }
  else if (VAR_6->pkt_type == VAR_1)
  {
   VAR_7->stats.txbroadcast++;
   VAR_7->stats.txbytesbroadcast += VAR_6->pkt_length;
  }
  else
  {
   VAR_7->stats.txunicast++;
   VAR_7->stats.txbytesunicast += VAR_6->pkt_length;
  }
 }
 else
 {
  VAR_7->stats.txfeedbackfail++;
  VAR_7->stats.txerrtotal++;
  VAR_7->stats.txerrbytestotal += VAR_6->pkt_length;


  if (VAR_6->pkt_type == VAR_2)
  {
   VAR_7->stats.txerrmulticast++;
  }
  else if (VAR_6->pkt_type == VAR_1)
  {
   VAR_7->stats.txerrbroadcast++;
  }
  else
  {
   VAR_7->stats.txerrunicast++;
  }
 }

 VAR_7->stats.txretrycount += VAR_6->retry_cnt;
 VAR_7->stats.txfeedbackretry += VAR_6->retry_cnt;

}
