
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {size_t rfa_txpowertrackingindex; size_t cck_present_attentuation; size_t rfc_txpowertrackingindex; TYPE_1__* txbbgain_table; int bcck_in_ch14; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {size_t txbbgain_value; size_t txbb_iq_amplifygain; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int ) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*,int ,int ,size_t) ;

__attribute__((used)) static void FUNC_4(
 struct net_device *VAR_4
)
{
 struct r8192_priv *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_0, "Start Reset Recovery ==>\n");
 FUNC_3(VAR_4, VAR_2, VAR_1, VAR_5->txbbgain_table[VAR_5->rfa_txpowertrackingindex].txbbgain_value);
 FUNC_0(VAR_0, "Reset Recovery: Fill in 0xc80 is %08x\n",VAR_5->txbbgain_table[VAR_5->rfa_txpowertrackingindex].txbbgain_value);
 FUNC_0(VAR_0, "Reset Recovery: Fill in RFA_txPowerTrackingIndex is %x\n",VAR_5->rfa_txpowertrackingindex);
 FUNC_0(VAR_0, "Reset Recovery : RF A I/Q Amplify Gain is %ld\n",VAR_5->txbbgain_table[VAR_5->rfa_txpowertrackingindex].txbb_iq_amplifygain);
 FUNC_0(VAR_0, "Reset Recovery: CCK Attenuation is %d dB\n",VAR_5->cck_present_attentuation);
 FUNC_1(VAR_4,VAR_5->bcck_in_ch14);

 FUNC_3(VAR_4, VAR_3, VAR_1, VAR_5->txbbgain_table[VAR_5->rfc_txpowertrackingindex].txbbgain_value);
 FUNC_0(VAR_0, "Reset Recovery: Fill in 0xc90 is %08x\n",VAR_5->txbbgain_table[VAR_5->rfc_txpowertrackingindex].txbbgain_value);
 FUNC_0(VAR_0, "Reset Recovery: Fill in RFC_txPowerTrackingIndex is %x\n",VAR_5->rfc_txpowertrackingindex);
 FUNC_0(VAR_0, "Reset Recovery : RF C I/Q Amplify Gain is %ld\n",VAR_5->txbbgain_table[VAR_5->rfc_txpowertrackingindex].txbb_iq_amplifygain);

}
