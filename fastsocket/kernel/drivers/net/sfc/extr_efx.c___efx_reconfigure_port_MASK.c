
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int phy_mode; TYPE_1__* type; int net_dev; int mac_lock; } ;
typedef enum efx_phy_mode { ____Placeholder_efx_phy_mode } efx_phy_mode ;
struct TYPE_2__ {int (* reconfigure_port ) (struct efx_nic*) ;} ;


 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct efx_nic*) ;

int FUNC_6(struct efx_nic *VAR_1)
{
 enum efx_phy_mode VAR_2;
 int VAR_3;

 FUNC_1(!FUNC_2(&VAR_1->mac_lock));


 FUNC_3(VAR_1->net_dev);
 FUNC_4(VAR_1->net_dev);


 VAR_2 = VAR_1->phy_mode;
 if (FUNC_0(VAR_1))
  VAR_1->phy_mode |= VAR_0;
 else
  VAR_1->phy_mode &= ~VAR_0;

 VAR_3 = VAR_1->type->reconfigure_port(VAR_1);

 if (VAR_3)
  VAR_1->phy_mode = VAR_2;

 return VAR_3;
}
