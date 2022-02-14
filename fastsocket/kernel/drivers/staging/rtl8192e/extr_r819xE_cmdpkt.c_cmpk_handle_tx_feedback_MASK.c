
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int txfeedback; } ;
struct r8192_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int TOK; int Fail_Reason; int TID; int Qos_Pkt; int Bandwidth; int Retry_Cnt; int Pkt_ID; int Seq_Num; int S_Rate; int F_Rate; int S_RTS_Rate; int F_RTS_Rate; int pkt_length; } ;
typedef TYPE_2__ cmpk_txfb_t ;
struct TYPE_9__ {scalar_t__ RegWirelessMode; } ;
struct TYPE_8__ {int CurrentOperaRate; int HTCurrentOperaRate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net_device*,TYPE_2__*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *,int) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static void
FUNC_3(
 struct net_device *VAR_8,
 u8 * VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_1(VAR_8);
 cmpk_txfb_t VAR_11;

 VAR_10->stats.txfeedback++;
 FUNC_2((u8*)&VAR_11, VAR_9, sizeof(cmpk_txfb_t));

 FUNC_0(VAR_8, &VAR_11);
}
