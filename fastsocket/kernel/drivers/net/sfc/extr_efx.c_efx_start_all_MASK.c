
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {scalar_t__ state; TYPE_2__* type; int mac_lock; TYPE_1__* phy_op; int monitor_work; int workqueue; int net_dev; scalar_t__ port_enabled; } ;
struct TYPE_4__ {int (* start_stats ) (struct efx_nic*) ;int * monitor; } ;
struct TYPE_3__ {scalar_t__ (* poll ) (struct efx_nic*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct efx_nic*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int ) ;
 scalar_t__ FUNC_10 (struct efx_nic*) ;
 int FUNC_11 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_12(struct efx_nic *VAR_3)
{
 FUNC_1(VAR_3);
 FUNC_0(VAR_3->state == VAR_1);



 if (VAR_3->port_enabled || !FUNC_8(VAR_3->net_dev))
  return;

 FUNC_5(VAR_3);
 FUNC_4(VAR_3);


 if (VAR_3->type->monitor != ((void*)0))
  FUNC_9(VAR_3->workqueue, &VAR_3->monitor_work,
       VAR_2);




 if (FUNC_3(VAR_3) >= VAR_0) {
  FUNC_6(&VAR_3->mac_lock);
  if (VAR_3->phy_op->poll(VAR_3))
   FUNC_2(VAR_3);
  FUNC_7(&VAR_3->mac_lock);
 }

 VAR_3->type->start_stats(VAR_3);
}
