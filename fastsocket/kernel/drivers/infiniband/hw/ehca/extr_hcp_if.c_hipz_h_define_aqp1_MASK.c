
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ipz_qp_handle {int handle; } ;
struct ipz_adapter_handle {int handle; } ;
struct h_galpa {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,unsigned long*,int ,int ,scalar_t__,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_2(const struct ipz_adapter_handle VAR_3,
         const struct ipz_qp_handle VAR_4,
         struct h_galpa VAR_5,
         u32 VAR_6, u32 * VAR_7,
         u32 * VAR_8)
{
 u64 VAR_9;
 unsigned long VAR_10[VAR_2];

 VAR_9 = FUNC_1(VAR_1, VAR_10,
    VAR_3.handle,
    VAR_4.handle,
    VAR_6,
    0, 0, 0, 0, 0, 0);
 *VAR_7 = (u32)VAR_10[0];
 *VAR_8 = (u32)VAR_10[1];

 if (VAR_9 == VAR_0)
  FUNC_0("AQP1 already exists. ret=%lli", VAR_9);

 return VAR_9;
}
