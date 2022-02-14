
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct ipz_qp_handle {int handle; } ;
struct ipz_adapter_handle {int handle; } ;
struct h_galpa {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,scalar_t__,scalar_t__,int ,int ) ;

u64 FUNC_2(const struct ipz_adapter_handle VAR_2,
         const struct ipz_qp_handle VAR_3,
         struct h_galpa VAR_4,
         u16 VAR_5,
         u64 VAR_6, u64 VAR_7)
{
 u64 VAR_8;

 VAR_8 = FUNC_1(VAR_0,
          VAR_2.handle,
          VAR_3.handle,
          VAR_5,
          VAR_7,
          VAR_6,
          0, 0);

 if (VAR_8 == VAR_1)
  FUNC_0("Not enough resources. ret=%lli", VAR_8);

 return VAR_8;
}
