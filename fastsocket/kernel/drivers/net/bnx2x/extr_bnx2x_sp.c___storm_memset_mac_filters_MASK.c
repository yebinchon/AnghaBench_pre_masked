
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct tstorm_eth_mac_filter_config {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2x*,scalar_t__,size_t,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_1,
   struct tstorm_eth_mac_filter_config *VAR_2,
   u16 VAR_3)
{
 size_t VAR_4 = sizeof(struct tstorm_eth_mac_filter_config);

 u32 VAR_5 = VAR_0 +
   FUNC_0(VAR_3);

 FUNC_1(VAR_1, VAR_5, VAR_4, (u32 *)VAR_2);
}
