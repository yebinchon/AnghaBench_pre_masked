
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethtool_cmd {int advertising; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct efx_nic {int loopback_mode; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int forced_cap; } ;


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
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int) ;
 int FUNC_2 (struct efx_nic*,int,int ,int ,int ) ;
 int FUNC_3 (struct ethtool_cmd*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_10, struct ethtool_cmd *VAR_11)
{
 struct efx_mcdi_phy_data *VAR_12 = VAR_10->phy_data;
 u32 VAR_13;
 int VAR_14;

 if (VAR_11->autoneg) {
  VAR_13 = (FUNC_4(VAR_11->advertising) |
    1 << VAR_9);
 } else if (VAR_11->duplex) {
  switch (FUNC_3(VAR_11)) {
  case 10: VAR_13 = 1 << VAR_7; break;
  case 100: VAR_13 = 1 << VAR_5; break;
  case 1000: VAR_13 = 1 << VAR_3; break;
  case 10000: VAR_13 = 1 << VAR_2; break;
  default: return -VAR_1;
  }
 } else {
  switch (FUNC_3(VAR_11)) {
  case 10: VAR_13 = 1 << VAR_8; break;
  case 100: VAR_13 = 1 << VAR_6; break;
  case 1000: VAR_13 = 1 << VAR_4; break;
  default: return -VAR_1;
  }
 }

 VAR_14 = FUNC_2(VAR_10, VAR_13, FUNC_0(VAR_10),
          VAR_10->loopback_mode, 0);
 if (VAR_14)
  return VAR_14;

 if (VAR_11->autoneg) {
  FUNC_1(
   VAR_10, VAR_11->advertising | VAR_0);
  VAR_12->forced_cap = 0;
 } else {
  FUNC_1(VAR_10, 0);
  VAR_12->forced_cap = VAR_13;
 }
 return 0;
}
