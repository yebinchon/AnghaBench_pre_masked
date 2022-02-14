
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_2__* type; TYPE_1__* phy_op; scalar_t__ port_initialized; int mac_lock; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_4__ {int (* fini ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* fini ) (struct efx_nic*) ;} ;


 int FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;

void FUNC_6(struct efx_nic *VAR_1, enum reset_type VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1, 0);

 FUNC_3(&VAR_1->mac_lock);
 if (VAR_1->port_initialized && VAR_2 != VAR_0)
  VAR_1->phy_op->fini(VAR_1);
 VAR_1->type->fini(VAR_1);
}
