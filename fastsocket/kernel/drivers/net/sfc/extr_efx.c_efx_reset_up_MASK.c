
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {int port_initialized; int mac_lock; TYPE_2__* type; int net_dev; TYPE_1__* phy_op; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_4__ {int (* init ) (struct efx_nic*) ;int (* reconfigure_mac ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* init ) (struct efx_nic*) ;scalar_t__ (* reconfigure ) (struct efx_nic*) ;} ;


 int FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 scalar_t__ FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;

int FUNC_11(struct efx_nic *VAR_2, enum reset_type VAR_3, bool VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2);

 VAR_5 = VAR_2->type->init(VAR_2);
 if (VAR_5) {
  FUNC_6(VAR_2, VAR_1, VAR_2->net_dev, "failed to initialise NIC\n");
  goto fail;
 }

 if (!VAR_4)
  goto fail;

 if (VAR_2->port_initialized && VAR_3 != VAR_0) {
  VAR_5 = VAR_2->phy_op->init(VAR_2);
  if (VAR_5)
   goto fail;
  if (VAR_2->phy_op->reconfigure(VAR_2))
   FUNC_6(VAR_2, VAR_1, VAR_2->net_dev,
      "could not restore PHY settings\n");
 }

 VAR_2->type->reconfigure_mac(VAR_2);

 FUNC_4(VAR_2, 0);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 FUNC_5(&VAR_2->mac_lock);

 FUNC_3(VAR_2);

 return 0;

fail:
 VAR_2->port_initialized = 0;

 FUNC_5(&VAR_2->mac_lock);

 return VAR_5;
}
