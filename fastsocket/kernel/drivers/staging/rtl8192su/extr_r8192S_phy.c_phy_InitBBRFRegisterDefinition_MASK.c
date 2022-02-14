
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rfLSSIReadBackPi; int rfLSSIReadBack; int rfTxAFE; int rfTxIQImbalance; int rfRxAFE; int rfRxIQImbalance; int rfAGCControl2; int rfAGCControl1; void* rfSwitchControl; int rfHSSIPara2; int rfHSSIPara1; void* rfTxGainStage; void* rfLSSI_Select; int rf3wireOffset; void* rfintfe; void* rfintfo; void* rfintfi; void* rfintfs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;

__attribute__((used)) static void FUNC_1( struct net_device* VAR_59)
{
 struct r8192_priv *VAR_60 = FUNC_0(VAR_59);


 VAR_60->PHYRegDef[VAR_0].rfintfs = VAR_8;
 VAR_60->PHYRegDef[VAR_1].rfintfs = VAR_8;
 VAR_60->PHYRegDef[VAR_2].rfintfs = VAR_22;
 VAR_60->PHYRegDef[VAR_3].rfintfs = VAR_22;


 VAR_60->PHYRegDef[VAR_0].rfintfi = VAR_7;
 VAR_60->PHYRegDef[VAR_1].rfintfi = VAR_7;
 VAR_60->PHYRegDef[VAR_2].rfintfi = VAR_21;
 VAR_60->PHYRegDef[VAR_3].rfintfi = VAR_21;


 VAR_60->PHYRegDef[VAR_0].rfintfo = VAR_15;
 VAR_60->PHYRegDef[VAR_1].rfintfo = VAR_20;
 VAR_60->PHYRegDef[VAR_2].rfintfo = VAR_29;
 VAR_60->PHYRegDef[VAR_3].rfintfo = VAR_34;


 VAR_60->PHYRegDef[VAR_0].rfintfe = VAR_15;
 VAR_60->PHYRegDef[VAR_1].rfintfe = VAR_20;
 VAR_60->PHYRegDef[VAR_2].rfintfe = VAR_29;
 VAR_60->PHYRegDef[VAR_3].rfintfe = VAR_34;


 VAR_60->PHYRegDef[VAR_0].rf3wireOffset = VAR_13;
 VAR_60->PHYRegDef[VAR_1].rf3wireOffset = VAR_18;
 VAR_60->PHYRegDef[VAR_2].rf3wireOffset = VAR_27;
 VAR_60->PHYRegDef[VAR_3].rf3wireOffset = VAR_32;


 VAR_60->PHYRegDef[VAR_0].rfLSSI_Select = VAR_9;
 VAR_60->PHYRegDef[VAR_1].rfLSSI_Select = VAR_9;
 VAR_60->PHYRegDef[VAR_2].rfLSSI_Select = VAR_23;
 VAR_60->PHYRegDef[VAR_3].rfLSSI_Select = VAR_23;


 VAR_60->PHYRegDef[VAR_0].rfTxGainStage = VAR_6;
 VAR_60->PHYRegDef[VAR_1].rfTxGainStage = VAR_6;
 VAR_60->PHYRegDef[VAR_2].rfTxGainStage = VAR_6;
 VAR_60->PHYRegDef[VAR_3].rfTxGainStage = VAR_6;


 VAR_60->PHYRegDef[VAR_0].rfHSSIPara1 = VAR_11;
 VAR_60->PHYRegDef[VAR_1].rfHSSIPara1 = VAR_16;
 VAR_60->PHYRegDef[VAR_2].rfHSSIPara1 = VAR_25;
 VAR_60->PHYRegDef[VAR_3].rfHSSIPara1 = VAR_30;


 VAR_60->PHYRegDef[VAR_0].rfHSSIPara2 = VAR_12;
 VAR_60->PHYRegDef[VAR_1].rfHSSIPara2 = VAR_17;
 VAR_60->PHYRegDef[VAR_2].rfHSSIPara2 = VAR_26;
 VAR_60->PHYRegDef[VAR_3].rfHSSIPara2 = VAR_31;


 VAR_60->PHYRegDef[VAR_0].rfSwitchControl = VAR_10;
 VAR_60->PHYRegDef[VAR_1].rfSwitchControl = VAR_10;
 VAR_60->PHYRegDef[VAR_2].rfSwitchControl = VAR_24;
 VAR_60->PHYRegDef[VAR_3].rfSwitchControl = VAR_24;


 VAR_60->PHYRegDef[VAR_0].rfAGCControl1 = VAR_35;
 VAR_60->PHYRegDef[VAR_1].rfAGCControl1 = VAR_41;
 VAR_60->PHYRegDef[VAR_2].rfAGCControl1 = VAR_47;
 VAR_60->PHYRegDef[VAR_3].rfAGCControl1 = VAR_53;


 VAR_60->PHYRegDef[VAR_0].rfAGCControl2 = VAR_36;
 VAR_60->PHYRegDef[VAR_1].rfAGCControl2 = VAR_42;
 VAR_60->PHYRegDef[VAR_2].rfAGCControl2 = VAR_48;
 VAR_60->PHYRegDef[VAR_3].rfAGCControl2 = VAR_54;


 VAR_60->PHYRegDef[VAR_0].rfRxIQImbalance = VAR_38;
 VAR_60->PHYRegDef[VAR_1].rfRxIQImbalance = VAR_44;
 VAR_60->PHYRegDef[VAR_2].rfRxIQImbalance = VAR_50;
 VAR_60->PHYRegDef[VAR_3].rfRxIQImbalance = VAR_56;


 VAR_60->PHYRegDef[VAR_0].rfRxAFE = VAR_37;
 VAR_60->PHYRegDef[VAR_1].rfRxAFE = VAR_43;
 VAR_60->PHYRegDef[VAR_2].rfRxAFE = VAR_49;
 VAR_60->PHYRegDef[VAR_3].rfRxAFE = VAR_55;


 VAR_60->PHYRegDef[VAR_0].rfTxIQImbalance = VAR_40;
 VAR_60->PHYRegDef[VAR_1].rfTxIQImbalance = VAR_46;
 VAR_60->PHYRegDef[VAR_2].rfTxIQImbalance = VAR_52;
 VAR_60->PHYRegDef[VAR_3].rfTxIQImbalance = VAR_58;


 VAR_60->PHYRegDef[VAR_0].rfTxAFE = VAR_39;
 VAR_60->PHYRegDef[VAR_1].rfTxAFE = VAR_45;
 VAR_60->PHYRegDef[VAR_2].rfTxAFE = VAR_51;
 VAR_60->PHYRegDef[VAR_3].rfTxAFE = VAR_57;


 VAR_60->PHYRegDef[VAR_0].rfLSSIReadBack = VAR_14;
 VAR_60->PHYRegDef[VAR_1].rfLSSIReadBack = VAR_19;
 VAR_60->PHYRegDef[VAR_2].rfLSSIReadBack = VAR_28;
 VAR_60->PHYRegDef[VAR_3].rfLSSIReadBack = VAR_33;


 VAR_60->PHYRegDef[VAR_0].rfLSSIReadBackPi = VAR_4;
 VAR_60->PHYRegDef[VAR_1].rfLSSIReadBackPi = VAR_5;



}
