
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_mcdi_iface {int mode; int state; int iface_lock; int wq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct efx_mcdi_iface* FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct efx_nic *VAR_3)
{
 struct efx_mcdi_iface *VAR_4;

 if (FUNC_3(VAR_3) < VAR_0)
  return;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_4(&VAR_4->wq);
 FUNC_5(&VAR_4->iface_lock);
 FUNC_0(&VAR_4->state, VAR_2);
 VAR_4->mode = VAR_1;

 (void) FUNC_2(VAR_3);
}
