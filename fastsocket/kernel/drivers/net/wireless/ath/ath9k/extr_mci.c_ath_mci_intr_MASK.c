
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* bf_addr; } ;
struct ath_mci_coex {TYPE_2__ gpm_buf; } ;
struct ath_softc {int sc_flags; struct ath_hw* sc_ah; struct ath_mci_coex mci_coex; } ;
struct ath9k_hw_mci {scalar_t__ bt_state; int cont_status; } ;
struct TYPE_3__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_21 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int ,int ) ;
 int VAR_30 ;
 int FUNC_5 (struct ath_hw*,int*,int*) ;
 int FUNC_6 (struct ath_hw*,int,int*) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int*,int,int,int) ;
 scalar_t__ FUNC_8 (struct ath_hw*,int ) ;
 struct ath_common* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_common*,int ,char*,char*,int,int) ;
 int FUNC_11 (struct ath_softc*,int,int *) ;
 int FUNC_12 (struct ath_softc*,int,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct ath_softc *VAR_31)
{
 struct ath_mci_coex *VAR_32 = &VAR_31->mci_coex;
 struct ath_hw *VAR_33 = VAR_31->sc_ah;
 struct ath_common *VAR_34 = FUNC_9(VAR_33);
 struct ath9k_hw_mci *VAR_35 = &VAR_33->btcoex_hw.mci;
 u32 VAR_36, VAR_37;
 u32 VAR_38, VAR_39, VAR_40;
 u32 *VAR_41;
 u32 VAR_42 = VAR_21;
 bool VAR_43 = 0;

 FUNC_5(VAR_31->sc_ah, &VAR_36, &VAR_37);

 if (FUNC_8(VAR_33, VAR_23) == 0) {
  FUNC_6(VAR_33, 1, ((void*)0));
  return;
 }

 if (VAR_37 & VAR_12) {
  u32 VAR_44[4] = { 0xffffffff, 0xffffffff,
       0xffffffff, 0xffffff00};






  FUNC_7(VAR_33, VAR_22, 0,
     VAR_44, 16, 1, 0);
  FUNC_7(VAR_33, VAR_29, 0,
     ((void*)0), 0, 1, 0);

  VAR_37 &= ~VAR_12;
  FUNC_8(VAR_33, VAR_27);




  FUNC_8(VAR_33, VAR_28);
 }

 if (VAR_37 & VAR_15) {
  VAR_37 &= ~VAR_15;

  if ((VAR_35->bt_state == VAR_18) &&
      (FUNC_8(VAR_33, VAR_26) !=
       VAR_18))
   FUNC_8(VAR_33, VAR_28);
 }

 if (VAR_37 & VAR_14) {
  VAR_37 &= ~VAR_14;

  if ((VAR_35->bt_state == VAR_17) &&
      (FUNC_8(VAR_33, VAR_26) !=
       VAR_17))
   VAR_35->bt_state = VAR_18;
 }

 if ((VAR_36 & VAR_5) ||
     (VAR_36 & VAR_3)) {
  FUNC_8(VAR_33, VAR_25);
  VAR_43 = 1;
 }

 if (VAR_37 & VAR_13) {
  VAR_37 &= ~VAR_13;
  VAR_38 = FUNC_8(VAR_33, VAR_24);
 }

 if (VAR_37 & VAR_9) {
  VAR_37 &= ~VAR_9;

  while (VAR_42 == VAR_21) {
   if (FUNC_13(VAR_30, &VAR_31->sc_flags))
    return;

   VAR_41 = VAR_32->gpm_buf.bf_addr;
   VAR_38 = FUNC_6(VAR_33, 0,
        &VAR_42);

   if (VAR_38 == VAR_20)
    break;

   VAR_41 += (VAR_38 >> 2);





   VAR_39 = FUNC_3(VAR_41);
   VAR_40 = FUNC_1(VAR_41);

   if (VAR_43)
    goto recycle;

   if (FUNC_0(VAR_39)) {
    FUNC_11(VAR_31, VAR_39, (u8 *)VAR_41);
   } else {
    switch (VAR_39) {
    case 128:
     FUNC_12(VAR_31, VAR_40, (u8 *)VAR_41);
     break;
    default:
     break;
    }
   }
  recycle:
   FUNC_2(VAR_41);
  }
 }

 if (VAR_37 & VAR_4) {
  if (VAR_37 & VAR_10)
   VAR_37 &= ~VAR_10;

  if (VAR_37 & VAR_11)
   VAR_37 &= ~VAR_11;

  if (VAR_37 & VAR_6) {
   int VAR_45 = FUNC_4(VAR_35->cont_status,
        VAR_1);

   VAR_37 &= ~VAR_6;

   FUNC_10(VAR_34, VAR_16,
    "MCI CONT_INFO: (%s) pri = %d pwr = %d dBm\n",
    FUNC_4(VAR_35->cont_status, VAR_2) ?
    "tx" : "rx",
    FUNC_4(VAR_35->cont_status, VAR_0),
    VAR_45);
  }

  if (VAR_37 & VAR_7)
   VAR_37 &= ~VAR_7;

  if (VAR_37 & VAR_8)
   VAR_37 &= ~VAR_8;
 }

 if ((VAR_36 & VAR_5) ||
     (VAR_36 & VAR_3)) {
  VAR_36 &= ~(VAR_5 |
        VAR_3);
  FUNC_12(VAR_31, VAR_19, ((void*)0));
 }
}
