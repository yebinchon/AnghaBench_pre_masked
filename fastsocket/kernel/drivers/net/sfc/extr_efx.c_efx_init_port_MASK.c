
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {int port_initialized; int mac_lock; TYPE_2__* phy_op; TYPE_1__* type; int net_dev; } ;
struct TYPE_4__ {int (* init ) (struct efx_nic*) ;int (* reconfigure ) (struct efx_nic*) ;int (* fini ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* reconfigure_mac ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_7(struct efx_nic *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1, VAR_0, VAR_1->net_dev, "init port\n");

 FUNC_0(&VAR_1->mac_lock);

 VAR_2 = VAR_1->phy_op->init(VAR_1);
 if (VAR_2)
  goto fail1;

 VAR_1->port_initialized = 1;



 VAR_1->type->reconfigure_mac(VAR_1);


 VAR_2 = VAR_1->phy_op->reconfigure(VAR_1);
 if (VAR_2)
  goto fail2;

 FUNC_1(&VAR_1->mac_lock);
 return 0;

fail2:
 VAR_1->phy_op->fini(VAR_1);
fail1:
 FUNC_1(&VAR_1->mac_lock);
 return VAR_2;
}
