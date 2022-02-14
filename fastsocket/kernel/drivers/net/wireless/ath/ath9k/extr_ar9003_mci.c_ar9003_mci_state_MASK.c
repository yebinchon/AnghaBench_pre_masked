
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_mci {int update_2g5g; int config; int last_recovery; int query_bt; int need_flush_btinfo; int unhalt_bt_gpm; void* bt_state; int ready; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int,int ) ;
 int FUNC_7 (struct ath_hw*,int,int) ;
 int FUNC_8 (struct ath_hw*,int) ;
 int FUNC_9 (struct ath_hw*,int) ;
 int FUNC_10 (struct ath_hw*,int) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (int ,int ,char*) ;

u32 FUNC_14(struct ath_hw *VAR_14, u32 VAR_15)
{
 struct ath9k_hw_mci *VAR_16 = &VAR_14->btcoex_hw.mci;
 u32 VAR_17 = 0, VAR_18;
 u8 VAR_19;

 switch (VAR_15) {
 case 138:
  if (VAR_16->ready) {
   VAR_17 = FUNC_1(VAR_14, VAR_0);

   if ((VAR_17 == 0xdeadbeef) || (VAR_17 == 0xffffffff))
    VAR_17 = 0;
  }
  VAR_17 &= VAR_1;
  break;
 case 137:
  VAR_17 = FUNC_0(FUNC_1(VAR_14, VAR_5),
        VAR_3);

  VAR_17 <<= 4;
  break;
 case 133:
  VAR_17 = FUNC_0(FUNC_1(VAR_14, VAR_5),
      VAR_4) ?
   VAR_11 : VAR_10;
  break;
 case 128:
  VAR_16->bt_state = VAR_10;
  FUNC_8(VAR_14, 1);
  FUNC_10(VAR_14, 1);

  if (VAR_16->unhalt_bt_gpm)
   FUNC_7(VAR_14, 0, 1);

  FUNC_2(VAR_14, 0);
  break;
 case 132:
  FUNC_5(VAR_14);
  VAR_16->update_2g5g = 1;

  if (VAR_16->config & VAR_8) {

   if ((FUNC_1(VAR_14, VAR_2) &
        VAR_7) !=
       VAR_7) {
    FUNC_3(VAR_14);
   }
  }
  break;
 case 129:
  FUNC_9(VAR_14, 1);
  break;
 case 130:
  FUNC_8(VAR_14, 1);
  break;
 case 131:
  VAR_19 = VAR_12;
  FUNC_6(VAR_14, 1, VAR_19);
  break;
 case 134:
  VAR_18 = FUNC_12(VAR_14);
  if ((VAR_18 - VAR_16->last_recovery) <= VAR_13) {
   FUNC_13(FUNC_11(VAR_14), VAR_9,
    "(MCI) ignore Rx recovery\n");
   break;
  }
  FUNC_13(FUNC_11(VAR_14), VAR_9, "(MCI) RECOVER RX\n");
  VAR_16->last_recovery = VAR_18;
  FUNC_4(VAR_14);
  VAR_16->query_bt = 1;
  VAR_16->need_flush_btinfo = 1;
  FUNC_10(VAR_14, 1);
  FUNC_2(VAR_14, 0);
  break;
 case 135:
  VAR_17 = !(VAR_16->config & VAR_6);
  break;
 case 136:
  VAR_17 = (!VAR_16->unhalt_bt_gpm && VAR_16->need_flush_btinfo) ? 1 : 0;
  VAR_16->need_flush_btinfo = 0;
  break;
 default:
  break;
 }

 return VAR_17;
}
