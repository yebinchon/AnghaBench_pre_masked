
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int last_packet_rate; int txbytesunicast; int txbytesbroadcast; int txbytesmulticast; int txerrunicast; int txerrbroadcast; int txerrmulticast; int txunicast; int txbroadcast; int txmulticast; int txfeedbackretry; int txretrycount; int txerrtotal; int txfeedbackfail; int txoktotal; int txfeedbackok; } ;
struct r8192_priv {TYPE_2__ stats; } ;
struct net_device {int dummy; } ;
typedef int pu1Byte ;
struct TYPE_9__ {int rate; scalar_t__ txuclength; scalar_t__ txbclength; scalar_t__ txmclength; scalar_t__ txucfail; scalar_t__ txbcfail; scalar_t__ txmcfail; scalar_t__ txucok; scalar_t__ txbcok; scalar_t__ txmcok; scalar_t__ txretry; scalar_t__ txfail; scalar_t__ txok; } ;
typedef TYPE_3__ cmpk_tx_status_t ;
struct TYPE_7__ {int (* GetHwRegHandler ) (TYPE_4__*,int ,int ) ;} ;
struct TYPE_10__ {TYPE_1__ HalFunc; } ;
typedef int RT_RF_POWER_STATE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_2( struct net_device *VAR_4,
         cmpk_tx_status_t *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_0(VAR_4);
 VAR_6->stats.txfeedbackok += VAR_5->txok;
 VAR_6->stats.txoktotal += VAR_5->txok;

 VAR_6->stats.txfeedbackfail += VAR_5->txfail;
 VAR_6->stats.txerrtotal += VAR_5->txfail;

 VAR_6->stats.txretrycount += VAR_5->txretry;
 VAR_6->stats.txfeedbackretry += VAR_5->txretry;





 VAR_6->stats.txmulticast += VAR_5->txmcok;
 VAR_6->stats.txbroadcast += VAR_5->txbcok;
 VAR_6->stats.txunicast += VAR_5->txucok;

 VAR_6->stats.txerrmulticast += VAR_5->txmcfail;
 VAR_6->stats.txerrbroadcast += VAR_5->txbcfail;
 VAR_6->stats.txerrunicast += VAR_5->txucfail;

 VAR_6->stats.txbytesmulticast += VAR_5->txmclength;
 VAR_6->stats.txbytesbroadcast += VAR_5->txbclength;
 VAR_6->stats.txbytesunicast += VAR_5->txuclength;

 VAR_6->stats.last_packet_rate = VAR_5->rate;
}
