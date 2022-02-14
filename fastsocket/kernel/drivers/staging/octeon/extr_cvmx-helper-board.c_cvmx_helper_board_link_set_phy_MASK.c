
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_21__ {int capable_10_half; int capable_100base_x_half; scalar_t__ capable_extended_status; scalar_t__ capable_100base_x_full; scalar_t__ capable_10_full; scalar_t__ capable_100base_t4; } ;
struct TYPE_23__ {TYPE_5__ s; void* u16; } ;
typedef TYPE_7__ cvmx_mdio_phy_reg_status_t ;
struct TYPE_18__ {int capable_1000base_t_half; scalar_t__ capable_1000base_t_full; } ;
struct TYPE_24__ {void* u16; TYPE_2__ s; } ;
typedef TYPE_8__ cvmx_mdio_phy_reg_extended_status_t ;
struct TYPE_19__ {int autoneg_enable; int restart_autoneg; int speed_msb; int speed_lsb; scalar_t__ duplex; } ;
struct TYPE_25__ {void* u16; TYPE_3__ s; } ;
typedef TYPE_9__ cvmx_mdio_phy_reg_control_t ;
struct TYPE_22__ {int advert_1000base_t_half; scalar_t__ advert_1000base_t_full; } ;
struct TYPE_14__ {void* u16; TYPE_6__ s; } ;
typedef TYPE_10__ cvmx_mdio_phy_reg_control_1000_t ;
struct TYPE_20__ {int asymmetric_pause; int pause; int advert_10base_tx_half; int advert_100base_tx_half; scalar_t__ advert_100base_tx_full; scalar_t__ advert_10base_tx_full; scalar_t__ advert_100base_t4; } ;
struct TYPE_15__ {void* u16; TYPE_4__ s; } ;
typedef TYPE_11__ cvmx_mdio_phy_reg_autoneg_adver_t ;
struct TYPE_17__ {int speed; scalar_t__ full_duplex; } ;
struct TYPE_16__ {TYPE_1__ s; } ;
typedef TYPE_12__ cvmx_helper_link_info_t ;
typedef int cvmx_helper_board_set_phy_link_flags_types_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int ,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_2(int VAR_9,
       cvmx_helper_board_set_phy_link_flags_types_t
       VAR_10,
       cvmx_helper_link_info_t VAR_11)
{


 if ((VAR_10 & VAR_8) !=
     VAR_6) {
  cvmx_mdio_phy_reg_autoneg_adver_t VAR_12;
  VAR_12.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_0);
  VAR_12.s.asymmetric_pause =
      (VAR_10 & VAR_8) ==
      VAR_7;
  VAR_12.s.pause =
      (VAR_10 & VAR_8) ==
      VAR_7;
  FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
    VAR_0,
    VAR_12.u16);
 }


 if ((VAR_10 & VAR_5)
     && (VAR_11.s.speed == 0)) {
  cvmx_mdio_phy_reg_control_t VAR_13;
  cvmx_mdio_phy_reg_status_t VAR_14;
  cvmx_mdio_phy_reg_autoneg_adver_t VAR_15;
  cvmx_mdio_phy_reg_extended_status_t VAR_16;
  cvmx_mdio_phy_reg_control_1000_t VAR_17;

  VAR_14.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_4);
  VAR_15.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_0);
  VAR_15.s.advert_100base_t4 =
      VAR_14.s.capable_100base_t4;
  VAR_15.s.advert_10base_tx_full =
      VAR_14.s.capable_10_full;
  VAR_15.s.advert_10base_tx_half =
      VAR_14.s.capable_10_half;
  VAR_15.s.advert_100base_tx_full =
      VAR_14.s.capable_100base_x_full;
  VAR_15.s.advert_100base_tx_half =
      VAR_14.s.capable_100base_x_half;
  FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
    VAR_0,
    VAR_15.u16);
  if (VAR_14.s.capable_extended_status) {
   VAR_16.u16 =
       FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
        VAR_3);
   VAR_17 =
       FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
        VAR_2);
   VAR_17 =
       VAR_16.s.capable_1000base_t_full;
   VAR_17 =
       VAR_16.s.capable_1000base_t_half;
   FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
     VAR_2,
     VAR_17);
  }
  VAR_13.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_1);
  VAR_13.s.autoneg_enable = 1;
  VAR_13.s.restart_autoneg = 1;
  FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
    VAR_1, VAR_13.u16);
 } else if ((VAR_10 & VAR_5)) {
  cvmx_mdio_phy_reg_control_t VAR_18;
  cvmx_mdio_phy_reg_status_t VAR_19;
  cvmx_mdio_phy_reg_autoneg_adver_t VAR_20;
  cvmx_mdio_phy_reg_extended_status_t VAR_21;
  cvmx_mdio_phy_reg_control_1000_t VAR_22;

  VAR_19.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_4);
  VAR_20.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_0);
  VAR_20.s.advert_100base_t4 = 0;
  VAR_20.s.advert_10base_tx_full = 0;
  VAR_20.s.advert_10base_tx_half = 0;
  VAR_20.s.advert_100base_tx_full = 0;
  VAR_20.s.advert_100base_tx_half = 0;
  if (VAR_19.s.capable_extended_status) {
   VAR_21.u16 =
       FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
        VAR_3);
   VAR_22 =
       FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
        VAR_2);
   VAR_22 = 0;
   VAR_22 = 0;
  }
  switch (VAR_11.s.speed) {
  case 10:
   VAR_20.s.advert_10base_tx_full =
       VAR_11.s.full_duplex;
   VAR_20.s.advert_10base_tx_half =
       !VAR_11.s.full_duplex;
   break;
  case 100:
   VAR_20.s.advert_100base_tx_full =
       VAR_11.s.full_duplex;
   VAR_20.s.advert_100base_tx_half =
       !VAR_11.s.full_duplex;
   break;
  case 1000:
   VAR_22 =
       VAR_11.s.full_duplex;
   VAR_22 =
       !VAR_11.s.full_duplex;
   break;
  }
  FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
    VAR_0,
    VAR_20.u16);
  if (VAR_19.s.capable_extended_status)
   FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
     VAR_2,
     VAR_22);
  VAR_18.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_1);
  VAR_18.s.autoneg_enable = 1;
  VAR_18.s.restart_autoneg = 1;
  FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
    VAR_1, VAR_18.u16);
 } else {
  cvmx_mdio_phy_reg_control_t VAR_23;
  VAR_23.u16 =
      FUNC_0(VAR_9 >> 8, VAR_9 & 0xff,
       VAR_1);
  VAR_23.s.autoneg_enable = 0;
  VAR_23.s.restart_autoneg = 1;
  VAR_23.s.duplex = VAR_11.s.full_duplex;
  if (VAR_11.s.speed == 1000) {
   VAR_23.s.speed_msb = 1;
   VAR_23.s.speed_lsb = 0;
  } else if (VAR_11.s.speed == 100) {
   VAR_23.s.speed_msb = 0;
   VAR_23.s.speed_lsb = 1;
  } else if (VAR_11.s.speed == 10) {
   VAR_23.s.speed_msb = 0;
   VAR_23.s.speed_lsb = 0;
  }
  FUNC_1(VAR_9 >> 8, VAR_9 & 0xff,
    VAR_1, VAR_23.u16);
 }
 return 0;
}
