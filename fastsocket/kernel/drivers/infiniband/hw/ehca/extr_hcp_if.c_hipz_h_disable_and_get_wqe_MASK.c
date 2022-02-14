
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipz_qp_handle {int handle; } ;
struct ipz_adapter_handle {int handle; } ;
struct ehca_pfqp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*,int ,int,int ,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_1(const struct ipz_adapter_handle VAR_2,
          const struct ipz_qp_handle VAR_3,
          struct ehca_pfqp *VAR_4,
          void **VAR_5,
          void **VAR_6,
          int VAR_7)
{
 u64 VAR_8;
 unsigned long VAR_9[VAR_1];

 VAR_8 = FUNC_0(VAR_0, VAR_9,
    VAR_2.handle,
    VAR_7,
    VAR_3.handle,
    0, 0, 0, 0, 0, 0);
 if (VAR_5)
  *VAR_5 = (void *)VAR_9[0];
 if (VAR_6)
  *VAR_6 = (void *)VAR_9[1];

 return VAR_8;
}
