
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct falcon_nic_data {int xmac_poll_required; } ;
struct efx_nic {int phy_mode; struct falcon_nic_data* nic_data; } ;
typedef int s32 ;
struct TYPE_2__ {int ioexp_client; } ;


 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_6)
{
 struct falcon_nic_data *VAR_7 = VAR_6->nic_data;
 s32 VAR_8;


 if (FUNC_0(VAR_6) && !VAR_7->xmac_poll_required)
  return 0;
 VAR_8 = FUNC_2(FUNC_1(VAR_6)->ioexp_client, VAR_4);
 if (VAR_8 >= 0 &&
     (VAR_8 & ((1 << VAR_2) | (1 << VAR_3))) != 0)
  return 0;


 FUNC_3(VAR_6);
 VAR_6->phy_mode = VAR_5;

 return (VAR_8 < 0) ? -VAR_0 : -VAR_1;
}
