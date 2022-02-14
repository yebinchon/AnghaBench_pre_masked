
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txc43128_data {int phy_mode; } ;
struct TYPE_2__ {int mode_support; int mmds; } ;
struct efx_nic {int loopback_modes; TYPE_1__ mdio; int phy_mode; struct txc43128_data* phy_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct txc43128_data* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_7)
{
 struct txc43128_data *VAR_8;


 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;
 VAR_7->phy_data = VAR_8;
 VAR_8->phy_mode = VAR_7->phy_mode;

 VAR_7->mdio.mmds = VAR_6;
 VAR_7->mdio.mode_support = VAR_4 | VAR_3;

 VAR_7->loopback_modes = VAR_5 | VAR_1;

 return 0;
}
