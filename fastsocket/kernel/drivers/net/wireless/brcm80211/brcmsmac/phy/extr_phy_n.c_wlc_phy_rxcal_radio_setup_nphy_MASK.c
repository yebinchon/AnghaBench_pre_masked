
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int radiorev; int phy_rev; } ;
struct brcms_phy {int* tx_rx_cal_radio_saveregs; TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 void* FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_5(struct brcms_phy *VAR_21, u8 VAR_22)
{
 u16 VAR_23;
 u16 VAR_24 = 0;
 u16 VAR_25 = 0;

 if (FUNC_1(VAR_21->pubpi.phy_rev, 7)) {
  if (VAR_22 == VAR_0) {
   if (FUNC_0(VAR_21->radio_chanspec)) {
    VAR_21->tx_rx_cal_radio_saveregs[0] =
     FUNC_3(VAR_21,
         VAR_16);
    VAR_21->tx_rx_cal_radio_saveregs[1] =
     FUNC_3(VAR_21,
         VAR_15);

    FUNC_4(VAR_21,
     VAR_16,
     0x3);
    FUNC_4(VAR_21,
     VAR_15,
     0xaf);

   } else {
    VAR_21->tx_rx_cal_radio_saveregs[0] =
     FUNC_3(VAR_21,
         VAR_14);
    VAR_21->tx_rx_cal_radio_saveregs[1] =
     FUNC_3(VAR_21,
         VAR_13);

    FUNC_4(
     VAR_21,
     VAR_14,
     0x3);
    FUNC_4(
     VAR_21,
     VAR_13,
     0x7f);
   }

  } else {
   if (FUNC_0(VAR_21->radio_chanspec)) {
    VAR_21->tx_rx_cal_radio_saveregs[0] =
     FUNC_3(VAR_21,
         VAR_20);
    VAR_21->tx_rx_cal_radio_saveregs[1] =
     FUNC_3(VAR_21,
         VAR_19);

    FUNC_4(
     VAR_21,
     VAR_20,
     0x3);
    FUNC_4(
     VAR_21,
     VAR_19,
     0xaf);

   } else {
    VAR_21->tx_rx_cal_radio_saveregs[0] =
     FUNC_3(VAR_21,
         VAR_18);
    VAR_21->tx_rx_cal_radio_saveregs[1] =
     FUNC_3(VAR_21,
         VAR_17);

    FUNC_4(VAR_21,
     VAR_18,
     0x3);
    FUNC_4(VAR_21,
     VAR_17,
     0x7f);
   }
  }

 } else {
  if (VAR_22 == VAR_0) {
   VAR_21->tx_rx_cal_radio_saveregs[0] =
    FUNC_3(VAR_21,
            VAR_11 |
            VAR_10);
   VAR_21->tx_rx_cal_radio_saveregs[1] =
    FUNC_3(VAR_21,
            VAR_7 |
            VAR_1);

   if (VAR_21->pubpi.radiorev >= 5) {
    VAR_21->tx_rx_cal_radio_saveregs[2] =
     FUNC_3(VAR_21,
             VAR_8 |
             VAR_1);
    VAR_21->tx_rx_cal_radio_saveregs[3] =
     FUNC_3(VAR_21,
             VAR_12 |
             VAR_10);
   }

   if (FUNC_0(VAR_21->radio_chanspec)) {

    if (VAR_21->pubpi.radiorev >= 5) {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(VAR_21,
            VAR_3
            | VAR_1);

     FUNC_4(
      VAR_21,
      VAR_3
      | VAR_1, 0x40);

     FUNC_4(VAR_21,
      VAR_12 |
      VAR_10, VAR_25);

     FUNC_4(VAR_21,
      VAR_8 |
      VAR_1, VAR_25);
    } else {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(VAR_21,
       VAR_4
       | VAR_1);

     VAR_23 =
      (VAR_21->tx_rx_cal_radio_saveregs
       [2] & 0xF0) >> 8;
     VAR_23 =
      (VAR_23 <= 0x7) ? 0xF : 0;

     FUNC_2(VAR_21,
            VAR_4 |
            VAR_1, 0xF0,
            (VAR_23 << 8));
    }

    FUNC_4(VAR_21,
      VAR_11 |
      VAR_10, 0x9);
    FUNC_4(VAR_21,
      VAR_7 |
      VAR_1, 0x9);
   } else {
    if (VAR_21->pubpi.radiorev >= 5) {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(
            VAR_21,
            VAR_5
          | VAR_1);

     FUNC_4(
      VAR_21,
      VAR_5
      | VAR_1, 0x40);

     FUNC_4(
      VAR_21,
      VAR_12
      |
      VAR_10, VAR_24);

     FUNC_4(
      VAR_21,
      VAR_8
      |
      VAR_1, VAR_24);

    } else {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(
       VAR_21,
       VAR_6
       | VAR_1);

     VAR_23 =
      (VAR_21->
       tx_rx_cal_radio_saveregs[2] &
       0xF0) >> 8;
     VAR_23 =
      (VAR_23 <= 0x7) ? 0xF : 0;

     FUNC_2(VAR_21,
            VAR_6 |
            VAR_1, 0xF0,
            (VAR_23 << 8));
    }

    FUNC_4(VAR_21,
      VAR_11 |
      VAR_10, 0x6);
    FUNC_4(VAR_21,
      VAR_7 |
      VAR_1, 0x6);
   }

  } else {
   VAR_21->tx_rx_cal_radio_saveregs[0] =
    FUNC_3(VAR_21,
            VAR_11 |
            VAR_9);
   VAR_21->tx_rx_cal_radio_saveregs[1] =
    FUNC_3(VAR_21,
            VAR_7 |
            VAR_2);

   if (VAR_21->pubpi.radiorev >= 5) {
    VAR_21->tx_rx_cal_radio_saveregs[2] =
     FUNC_3(VAR_21,
             VAR_8 |
             VAR_2);
    VAR_21->tx_rx_cal_radio_saveregs[3] =
     FUNC_3(VAR_21,
             VAR_12 |
             VAR_9);
   }

   if (FUNC_0(VAR_21->radio_chanspec)) {

    if (VAR_21->pubpi.radiorev >= 5) {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(
             VAR_21,
             VAR_3
             | VAR_2);

     FUNC_4(
      VAR_21,
      VAR_3 |
      VAR_2, 0x40);

     FUNC_4(
      VAR_21,
      VAR_12
      |
      VAR_9, VAR_25);

     FUNC_4(
      VAR_21,
      VAR_8
      |
      VAR_2, VAR_25);
    } else {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(
       VAR_21,
       VAR_4
       | VAR_2);

     VAR_23 =
      (VAR_21->
       tx_rx_cal_radio_saveregs[2] &
       0xF0) >> 8;
     VAR_23 =
      (VAR_23 <= 0x7) ? 0xF : 0;

     FUNC_2(VAR_21,
            VAR_4 |
            VAR_2, 0xF0,
            (VAR_23 << 8));
    }

    FUNC_4(VAR_21,
      VAR_11 |
      VAR_9, 0x9);
    FUNC_4(VAR_21,
      VAR_7 |
      VAR_2, 0x9);
   } else {
    if (VAR_21->pubpi.radiorev >= 5) {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(
            VAR_21,
            VAR_5
          | VAR_2);

     FUNC_4(
      VAR_21,
      VAR_5
      | VAR_2, 0x40);

     FUNC_4(
      VAR_21,
      VAR_12
      |
      VAR_9, VAR_24);

     FUNC_4(
      VAR_21,
      VAR_8
      |
      VAR_2, VAR_24);
    } else {
     VAR_21->tx_rx_cal_radio_saveregs[4] =
      FUNC_3(
       VAR_21,
       VAR_6
       | VAR_2);

     VAR_23 =
      (VAR_21->
       tx_rx_cal_radio_saveregs[2] &
       0xF0) >> 8;
     VAR_23 =
      (VAR_23 <= 0x7) ? 0xF : 0;

     FUNC_2(VAR_21,
            VAR_6 |
            VAR_2, 0xF0,
            (VAR_23 << 8));
    }

    FUNC_4(VAR_21,
      VAR_11 |
      VAR_9, 0x6);
    FUNC_4(VAR_21,
      VAR_7 |
      VAR_2, 0x6);
   }
  }
 }
}
