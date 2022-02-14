
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_mcdi_iface {int dummy; } ;
struct siena_nic_data {struct efx_mcdi_iface mcdi; } ;
struct efx_nic {struct siena_nic_data* nic_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;

__attribute__((used)) static inline struct efx_mcdi_iface *FUNC_2(struct efx_nic *VAR_1)
{
 struct siena_nic_data *VAR_2;
 FUNC_0(FUNC_1(VAR_1) < VAR_0);
 VAR_2 = VAR_1->nic_data;
 return &VAR_2->mcdi;
}
