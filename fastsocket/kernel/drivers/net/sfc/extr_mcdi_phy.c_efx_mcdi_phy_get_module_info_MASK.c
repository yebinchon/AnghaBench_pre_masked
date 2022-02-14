
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_modinfo {int eeprom_len; int type; } ;
struct efx_nic {struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static int FUNC_0(struct efx_nic *VAR_3,
     struct ethtool_modinfo *VAR_4)
{
 struct efx_mcdi_phy_data *VAR_5 = VAR_3->phy_data;

 switch (VAR_5->media) {
 case 128:
  VAR_4->type = VAR_1;
  VAR_4->eeprom_len = VAR_2;
  return 0;
 default:
  return -VAR_0;
 }
}
