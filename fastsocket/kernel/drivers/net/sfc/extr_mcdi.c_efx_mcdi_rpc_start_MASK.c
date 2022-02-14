
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int dummy; } ;
struct efx_mcdi_iface {int iface_lock; int seqno; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct efx_mcdi_iface* FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_mcdi_iface*) ;
 int FUNC_3 (struct efx_nic*,unsigned int,int const*,size_t) ;
 scalar_t__ FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct efx_nic *VAR_1, unsigned VAR_2, const u8 *VAR_3,
   size_t VAR_4)
{
 struct efx_mcdi_iface *VAR_5 = FUNC_1(VAR_1);

 FUNC_0(FUNC_4(VAR_1) < VAR_0);

 FUNC_2(VAR_5);


 FUNC_5(&VAR_5->iface_lock);
 ++VAR_5->seqno;
 FUNC_6(&VAR_5->iface_lock);

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
}
