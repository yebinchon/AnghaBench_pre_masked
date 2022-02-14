
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int dummy; } ;


 int FUNC_0 (struct efx_mcdi_phy_data*) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_0)
{
 struct efx_mcdi_phy_data *VAR_1 = VAR_0->phy_data;

 VAR_0->phy_data = ((void*)0);
 FUNC_0(VAR_1);
}
