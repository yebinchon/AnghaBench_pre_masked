
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_cq {TYPE_1__ ipz_cq_handle; int galpas; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,int ,long,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

u64 FUNC_3(const struct ipz_adapter_handle VAR_2,
        struct ehca_cq *VAR_3,
        u8 VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_2(&VAR_3->galpas);
 if (VAR_5) {
  FUNC_0("Could not destruct cp->galpas");
  return VAR_1;
 }

 VAR_5 = FUNC_1(VAR_0,
          VAR_2.handle,
          VAR_3->ipz_cq_handle.handle,
          VAR_4 != 0 ? 1L : 0L,
          0, 0, 0, 0);

 if (VAR_5 == VAR_1)
  FUNC_0("H_FREE_RESOURCE failed ret=%lli ", VAR_5);

 return VAR_5;
}
