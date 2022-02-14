
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int* tx_rx_cal_phy_saveregs; int radio_chanspec; TYPE_1__ pubpi; int internal_tx_iqlo_cal_tapoff_intpa_nphy; scalar_t__ use_int_tx_iqlo_cal_nphy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct brcms_phy*,int,int,int) ;
 int FUNC_5 (struct brcms_phy*,int ,int,int) ;
 void* FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 int FUNC_8 (struct brcms_phy*,int,int ,int,int ,int ) ;
 int FUNC_9 (struct brcms_phy*,int ,int,int) ;
 int FUNC_10 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_11 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_12 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_13(struct brcms_phy *VAR_13)
{
 u16 VAR_14, VAR_15;

 if (FUNC_2(VAR_13->pubpi.phy_rev, 3)) {
  VAR_13->tx_rx_cal_phy_saveregs[0] = FUNC_6(VAR_13, 0xa6);
  VAR_13->tx_rx_cal_phy_saveregs[1] = FUNC_6(VAR_13, 0xa7);

  VAR_15 = ((0x3 << 8) | (0x3 << 10));
  VAR_14 = (0x2 << 8);
  VAR_14 |= (0x2 << 10);
  FUNC_4(VAR_13, 0xa6, VAR_15, VAR_14);
  FUNC_4(VAR_13, 0xa7, VAR_15, VAR_14);

  VAR_14 = FUNC_6(VAR_13, 0x8f);
  VAR_13->tx_rx_cal_phy_saveregs[2] = VAR_14;
  VAR_14 |= ((0x1 << 9) | (0x1 << 10));
  FUNC_12(VAR_13, 0x8f, VAR_14);

  VAR_14 = FUNC_6(VAR_13, 0xa5);
  VAR_13->tx_rx_cal_phy_saveregs[3] = VAR_14;
  VAR_14 |= ((0x1 << 9) | (0x1 << 10));
  FUNC_12(VAR_13, 0xa5, VAR_14);

  VAR_13->tx_rx_cal_phy_saveregs[4] = FUNC_6(VAR_13, 0x01);
  FUNC_4(VAR_13, 0x01, (0x1 << 15), 0);

  FUNC_10(VAR_13, VAR_4, 1, 3, 16,
     &VAR_14);
  VAR_13->tx_rx_cal_phy_saveregs[5] = VAR_14;
  VAR_14 = 0;
  FUNC_11(VAR_13, VAR_4, 1, 3, 16,
      &VAR_14);

  FUNC_10(VAR_13, VAR_4, 1, 19, 16,
     &VAR_14);
  VAR_13->tx_rx_cal_phy_saveregs[6] = VAR_14;
  VAR_14 = 0;
  FUNC_11(VAR_13, VAR_4, 1, 19, 16,
      &VAR_14);

  VAR_13->tx_rx_cal_phy_saveregs[7] = FUNC_6(VAR_13, 0x91);
  VAR_13->tx_rx_cal_phy_saveregs[8] = FUNC_6(VAR_13, 0x92);

  if (!(VAR_13->use_int_tx_iqlo_cal_nphy))
   FUNC_9(
    VAR_13,
    VAR_2,
    1,
    VAR_11
    |
    VAR_12);
  else
   FUNC_9(
    VAR_13,
    VAR_2,
    0,
    VAR_11
    |
    VAR_12);

  FUNC_9(VAR_13,
       VAR_3,
       0x2, VAR_11);
  FUNC_9(VAR_13,
       VAR_3,
       0x8, VAR_12);

  VAR_13->tx_rx_cal_phy_saveregs[9] = FUNC_6(VAR_13, 0x297);
  VAR_13->tx_rx_cal_phy_saveregs[10] = FUNC_6(VAR_13, 0x29b);
  FUNC_4(VAR_13, (0 == VAR_5) ? 0x297 :
       0x29b, (0x1 << 0), (0) << 0);

  FUNC_4(VAR_13, (1 == VAR_5) ? 0x297 :
       0x29b, (0x1 << 0), (0) << 0);

  if (FUNC_3(VAR_13->pubpi.phy_rev, 7)
      || FUNC_2(VAR_13->pubpi.phy_rev, 8))
   FUNC_8(
    VAR_13, (0x1 << 7),
    FUNC_7
     (VAR_13,
     0), 0, 0,
    VAR_1);

  if (VAR_13->use_int_tx_iqlo_cal_nphy
      && !(VAR_13->internal_tx_iqlo_cal_tapoff_intpa_nphy)) {

   if (FUNC_3(VAR_13->pubpi.phy_rev, 7)) {

    FUNC_5(VAR_13, VAR_8, 1 << 4,
           1 << 4);

    if (FUNC_0(VAR_13->radio_chanspec)) {
     FUNC_5(
      VAR_13,
      VAR_9,
      1, 0);
     FUNC_5(
      VAR_13,
      VAR_10,
      1, 0);
    } else {
     FUNC_5(
          VAR_13,
          VAR_6,
          1, 0);
     FUNC_5(
          VAR_13,
          VAR_7,
          1, 0);
    }
   } else if (FUNC_2(VAR_13->pubpi.phy_rev, 8)) {
    FUNC_8(
     VAR_13,
     (0x1 << 3), 0,
     0x3, 0,
     VAR_0);
   }
  }
 } else {
  VAR_13->tx_rx_cal_phy_saveregs[0] = FUNC_6(VAR_13, 0xa6);
  VAR_13->tx_rx_cal_phy_saveregs[1] = FUNC_6(VAR_13, 0xa7);

  VAR_15 = ((0x3 << 12) | (0x3 << 14));
  VAR_14 = (0x2 << 12);
  VAR_14 |= (0x2 << 14);
  FUNC_4(VAR_13, 0xa6, VAR_15, VAR_14);
  FUNC_4(VAR_13, 0xa7, VAR_15, VAR_14);

  VAR_14 = FUNC_6(VAR_13, 0xa5);
  VAR_13->tx_rx_cal_phy_saveregs[2] = VAR_14;
  VAR_14 |= ((0x1 << 12) | (0x1 << 13));
  FUNC_12(VAR_13, 0xa5, VAR_14);

  FUNC_10(VAR_13, VAR_4, 1, 2, 16,
     &VAR_14);
  VAR_13->tx_rx_cal_phy_saveregs[3] = VAR_14;
  VAR_14 |= 0x2000;
  FUNC_11(VAR_13, VAR_4, 1, 2, 16,
      &VAR_14);

  FUNC_10(VAR_13, VAR_4, 1, 18, 16,
     &VAR_14);
  VAR_13->tx_rx_cal_phy_saveregs[4] = VAR_14;
  VAR_14 |= 0x2000;
  FUNC_11(VAR_13, VAR_4, 1, 18, 16,
      &VAR_14);

  VAR_13->tx_rx_cal_phy_saveregs[5] = FUNC_6(VAR_13, 0x91);
  VAR_13->tx_rx_cal_phy_saveregs[6] = FUNC_6(VAR_13, 0x92);
  VAR_14 = FUNC_1(VAR_13->radio_chanspec) ? 0x180 : 0x120;
  FUNC_12(VAR_13, 0x91, VAR_14);
  FUNC_12(VAR_13, 0x92, VAR_14);
 }
}
