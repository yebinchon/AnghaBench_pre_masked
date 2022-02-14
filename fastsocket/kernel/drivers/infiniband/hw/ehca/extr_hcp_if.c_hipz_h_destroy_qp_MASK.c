
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_qp {TYPE_1__ ipz_qp_handle; int galpas; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,unsigned long*,int ,int,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

u64 FUNC_4(const struct ipz_adapter_handle VAR_5,
        struct ehca_qp *VAR_6)
{
 u64 VAR_7;
 unsigned long VAR_8[VAR_4];

 VAR_7 = FUNC_3(&VAR_6->galpas);
 if (VAR_7) {
  FUNC_0("Could not destruct qp->galpas");
  return VAR_3;
 }
 VAR_7 = FUNC_1(VAR_0, VAR_8,
    VAR_5.handle,

    1,
    VAR_6->ipz_qp_handle.handle,
    0, 0, 0, 0, 0, 0);
 if (VAR_7 == VAR_2)
  FUNC_0("HCA not operational. ret=%lli", VAR_7);

 VAR_7 = FUNC_2(VAR_1,
          VAR_5.handle,
          VAR_6->ipz_qp_handle.handle,
          0, 0, 0, 0, 0);

 if (VAR_7 == VAR_3)
  FUNC_0("Resource still in use. ret=%lli", VAR_7);

 return VAR_7;
}
