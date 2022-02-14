
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rfLSSIReadBack; int rfTxAFE; int rfTxIQImbalance; int rfRxAFE; int rfRxIQImbalance; int rfAGCControl2; int rfAGCControl1; void* rfSwitchControl; int rfHSSIPara2; int rfHSSIPara1; void* rfTxGainStage; void* rfLSSI_Select; int rf3wireOffset; void* rfintfe; void* rfintfo; void* rfintfi; void* rfintfs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
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

__attribute__((used)) static void FUNC_1(struct net_device* VAR_57)
{
 struct r8192_priv *VAR_58 = FUNC_0(VAR_57);

 VAR_58->PHYRegDef[VAR_0].rfintfs = VAR_6;
 VAR_58->PHYRegDef[VAR_1].rfintfs = VAR_6;
 VAR_58->PHYRegDef[VAR_2].rfintfs = VAR_20;
 VAR_58->PHYRegDef[VAR_3].rfintfs = VAR_20;


 VAR_58->PHYRegDef[VAR_0].rfintfi = VAR_5;
 VAR_58->PHYRegDef[VAR_1].rfintfi = VAR_5;
 VAR_58->PHYRegDef[VAR_2].rfintfi = VAR_19;
 VAR_58->PHYRegDef[VAR_3].rfintfi = VAR_19;


 VAR_58->PHYRegDef[VAR_0].rfintfo = VAR_13;
 VAR_58->PHYRegDef[VAR_1].rfintfo = VAR_18;
 VAR_58->PHYRegDef[VAR_2].rfintfo = VAR_27;
 VAR_58->PHYRegDef[VAR_3].rfintfo = VAR_32;


 VAR_58->PHYRegDef[VAR_0].rfintfe = VAR_13;
 VAR_58->PHYRegDef[VAR_1].rfintfe = VAR_18;
 VAR_58->PHYRegDef[VAR_2].rfintfe = VAR_27;
 VAR_58->PHYRegDef[VAR_3].rfintfe = VAR_32;


 VAR_58->PHYRegDef[VAR_0].rf3wireOffset = VAR_11;
 VAR_58->PHYRegDef[VAR_1].rf3wireOffset = VAR_16;
 VAR_58->PHYRegDef[VAR_2].rf3wireOffset = VAR_25;
 VAR_58->PHYRegDef[VAR_3].rf3wireOffset = VAR_30;


 VAR_58->PHYRegDef[VAR_0].rfLSSI_Select = VAR_7;
 VAR_58->PHYRegDef[VAR_1].rfLSSI_Select = VAR_7;
 VAR_58->PHYRegDef[VAR_2].rfLSSI_Select = VAR_21;
 VAR_58->PHYRegDef[VAR_3].rfLSSI_Select = VAR_21;


 VAR_58->PHYRegDef[VAR_0].rfTxGainStage = VAR_4;
 VAR_58->PHYRegDef[VAR_1].rfTxGainStage = VAR_4;
 VAR_58->PHYRegDef[VAR_2].rfTxGainStage = VAR_4;
 VAR_58->PHYRegDef[VAR_3].rfTxGainStage = VAR_4;


 VAR_58->PHYRegDef[VAR_0].rfHSSIPara1 = VAR_9;
 VAR_58->PHYRegDef[VAR_1].rfHSSIPara1 = VAR_14;
 VAR_58->PHYRegDef[VAR_2].rfHSSIPara1 = VAR_23;
 VAR_58->PHYRegDef[VAR_3].rfHSSIPara1 = VAR_28;


 VAR_58->PHYRegDef[VAR_0].rfHSSIPara2 = VAR_10;
 VAR_58->PHYRegDef[VAR_1].rfHSSIPara2 = VAR_15;
 VAR_58->PHYRegDef[VAR_2].rfHSSIPara2 = VAR_24;
 VAR_58->PHYRegDef[VAR_3].rfHSSIPara2 = VAR_29;


 VAR_58->PHYRegDef[VAR_0].rfSwitchControl = VAR_8;
 VAR_58->PHYRegDef[VAR_1].rfSwitchControl = VAR_8;
 VAR_58->PHYRegDef[VAR_2].rfSwitchControl = VAR_22;
 VAR_58->PHYRegDef[VAR_3].rfSwitchControl = VAR_22;


 VAR_58->PHYRegDef[VAR_0].rfAGCControl1 = VAR_33;
 VAR_58->PHYRegDef[VAR_1].rfAGCControl1 = VAR_39;
 VAR_58->PHYRegDef[VAR_2].rfAGCControl1 = VAR_45;
 VAR_58->PHYRegDef[VAR_3].rfAGCControl1 = VAR_51;


 VAR_58->PHYRegDef[VAR_0].rfAGCControl2 = VAR_34;
 VAR_58->PHYRegDef[VAR_1].rfAGCControl2 = VAR_40;
 VAR_58->PHYRegDef[VAR_2].rfAGCControl2 = VAR_46;
 VAR_58->PHYRegDef[VAR_3].rfAGCControl2 = VAR_52;


 VAR_58->PHYRegDef[VAR_0].rfRxIQImbalance = VAR_36;
 VAR_58->PHYRegDef[VAR_1].rfRxIQImbalance = VAR_42;
 VAR_58->PHYRegDef[VAR_2].rfRxIQImbalance = VAR_48;
 VAR_58->PHYRegDef[VAR_3].rfRxIQImbalance = VAR_54;


 VAR_58->PHYRegDef[VAR_0].rfRxAFE = VAR_35;
 VAR_58->PHYRegDef[VAR_1].rfRxAFE = VAR_41;
 VAR_58->PHYRegDef[VAR_2].rfRxAFE = VAR_47;
 VAR_58->PHYRegDef[VAR_3].rfRxAFE = VAR_53;


 VAR_58->PHYRegDef[VAR_0].rfTxIQImbalance = VAR_38;
 VAR_58->PHYRegDef[VAR_1].rfTxIQImbalance = VAR_44;
 VAR_58->PHYRegDef[VAR_2].rfTxIQImbalance = VAR_50;
 VAR_58->PHYRegDef[VAR_3].rfTxIQImbalance = VAR_56;


 VAR_58->PHYRegDef[VAR_0].rfTxAFE = VAR_37;
 VAR_58->PHYRegDef[VAR_1].rfTxAFE = VAR_43;
 VAR_58->PHYRegDef[VAR_2].rfTxAFE = VAR_49;
 VAR_58->PHYRegDef[VAR_3].rfTxAFE = VAR_55;


 VAR_58->PHYRegDef[VAR_0].rfLSSIReadBack = VAR_12;
 VAR_58->PHYRegDef[VAR_1].rfLSSIReadBack = VAR_17;
 VAR_58->PHYRegDef[VAR_2].rfLSSIReadBack = VAR_26;
 VAR_58->PHYRegDef[VAR_3].rfLSSIReadBack = VAR_31;

}
