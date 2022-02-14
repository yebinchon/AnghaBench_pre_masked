
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int loopback_mode; scalar_t__ link_advertising; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int forced_cap; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct efx_nic *VAR_0)
{
 struct efx_mcdi_phy_data *VAR_1 = VAR_0->phy_data;
 u32 VAR_2 = (VAR_0->link_advertising ?
      FUNC_2(VAR_0->link_advertising) :
      VAR_1->forced_cap);

 return FUNC_1(VAR_0, VAR_2, FUNC_0(VAR_0),
     VAR_0->loopback_mode, 0);
}
