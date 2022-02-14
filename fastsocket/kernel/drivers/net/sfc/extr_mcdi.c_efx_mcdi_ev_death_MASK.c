
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_mcdi_iface {scalar_t__ mode; int resprc; int iface_lock; int credits; scalar_t__ resplen; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 scalar_t__ FUNC_1 (struct efx_mcdi_iface*) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct efx_nic *VAR_4, int VAR_5)
{
 struct efx_mcdi_iface *VAR_6 = FUNC_0(VAR_4);
 FUNC_4(&VAR_6->iface_lock);
 if (FUNC_1(VAR_6)) {
  if (VAR_6->mode == VAR_0) {
   VAR_6->resprc = VAR_5;
   VAR_6->resplen = 0;
   ++VAR_6->credits;
  }
 } else {
  int VAR_7;


  FUNC_3(VAR_4, VAR_3);


  for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
   if (FUNC_2(VAR_4))
    break;
   FUNC_6(VAR_2);
  }
 }

 FUNC_5(&VAR_6->iface_lock);
}
