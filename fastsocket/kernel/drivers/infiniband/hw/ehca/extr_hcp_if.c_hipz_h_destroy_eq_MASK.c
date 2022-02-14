
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_eq {TYPE_1__ ipz_eq_handle; int galpas; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

u64 FUNC_3(const struct ipz_adapter_handle VAR_2,
        struct ehca_eq *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_2(&VAR_3->galpas);
 if (VAR_4) {
  FUNC_0("Could not destruct eq->galpas");
  return VAR_1;
 }

 VAR_4 = FUNC_1(VAR_0,
          VAR_2.handle,
          VAR_3->ipz_eq_handle.handle,
          0, 0, 0, 0, 0);

 if (VAR_4 == VAR_1)
  FUNC_0("Resource in use. ret=%lli ", VAR_4);

 return VAR_4;
}
