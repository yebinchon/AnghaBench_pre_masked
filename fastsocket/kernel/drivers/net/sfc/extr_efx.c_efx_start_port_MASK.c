
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int port_enabled; int mac_lock; TYPE_1__* type; int net_dev; } ;
struct TYPE_2__ {int (* reconfigure_mac ) (struct efx_nic*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_4 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_1)
{
 FUNC_3(VAR_1, VAR_0, VAR_1->net_dev, "start port\n");
 FUNC_0(VAR_1->port_enabled);

 FUNC_1(&VAR_1->mac_lock);
 VAR_1->port_enabled = 1;



 VAR_1->type->reconfigure_mac(VAR_1);

 FUNC_2(&VAR_1->mac_lock);
}
