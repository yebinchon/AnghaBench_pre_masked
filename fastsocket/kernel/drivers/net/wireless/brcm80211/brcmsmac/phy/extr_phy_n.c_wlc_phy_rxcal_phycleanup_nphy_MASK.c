
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int * tx_rx_cal_phy_saveregs; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_1, u8 VAR_2)
{

 FUNC_1(VAR_1, 0xa2, VAR_1->tx_rx_cal_phy_saveregs[0]);
 FUNC_1(VAR_1, (VAR_2 == VAR_0) ? 0xa6 : 0xa7,
        VAR_1->tx_rx_cal_phy_saveregs[1]);
 FUNC_1(VAR_1, (VAR_2 == VAR_0) ? 0x8f : 0xa5,
        VAR_1->tx_rx_cal_phy_saveregs[2]);
 FUNC_1(VAR_1, 0x91, VAR_1->tx_rx_cal_phy_saveregs[3]);
 FUNC_1(VAR_1, 0x92, VAR_1->tx_rx_cal_phy_saveregs[4]);

 FUNC_1(VAR_1, 0x7a, VAR_1->tx_rx_cal_phy_saveregs[5]);
 FUNC_1(VAR_1, 0x7d, VAR_1->tx_rx_cal_phy_saveregs[6]);
 FUNC_1(VAR_1, 0xe7, VAR_1->tx_rx_cal_phy_saveregs[7]);
 FUNC_1(VAR_1, 0xec, VAR_1->tx_rx_cal_phy_saveregs[8]);
 if (FUNC_0(VAR_1->pubpi.phy_rev, 7)) {
  FUNC_1(VAR_1, 0x342, VAR_1->tx_rx_cal_phy_saveregs[11]);
  FUNC_1(VAR_1, 0x343, VAR_1->tx_rx_cal_phy_saveregs[12]);
  FUNC_1(VAR_1, 0x346, VAR_1->tx_rx_cal_phy_saveregs[13]);
  FUNC_1(VAR_1, 0x347, VAR_1->tx_rx_cal_phy_saveregs[14]);
 }

 FUNC_1(VAR_1, 0x297, VAR_1->tx_rx_cal_phy_saveregs[9]);
 FUNC_1(VAR_1, 0x29b, VAR_1->tx_rx_cal_phy_saveregs[10]);
}
