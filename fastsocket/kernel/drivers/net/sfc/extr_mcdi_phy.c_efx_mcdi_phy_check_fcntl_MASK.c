
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int wanted_fc; int net_dev; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int supported_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct efx_nic*,int ,int ,char*) ;

void FUNC_1(struct efx_nic *VAR_8, u32 VAR_9)
{
 struct efx_mcdi_phy_data *VAR_10 = VAR_8->phy_data;
 u32 VAR_11;



 if (~VAR_10->supported_cap & (1 << VAR_4))
  return;


 if (VAR_8->wanted_fc & VAR_2)
  return;

 VAR_11 = 0;
 if (VAR_9 & (1 << VAR_6))
  VAR_11 |= VAR_1;
 if (VAR_9 & (1 << VAR_5))
  VAR_11 |= VAR_0;

 if ((VAR_8->wanted_fc & VAR_3) && VAR_11 == VAR_0)
  FUNC_0(VAR_8, VAR_7, VAR_8->net_dev,
     "warning: link partner doesn't support pause frames");
}
