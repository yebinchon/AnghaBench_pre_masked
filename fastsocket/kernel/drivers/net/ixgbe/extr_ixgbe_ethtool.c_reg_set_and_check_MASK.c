
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct ixgbe_adapter {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct ixgbe_adapter *VAR_1, u64 *VAR_2, int VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 VAR_7 = FUNC_1(VAR_1->hw.hw_addr + VAR_3);
 FUNC_2((VAR_5 & VAR_4), (VAR_1->hw.hw_addr + VAR_3));
 VAR_6 = FUNC_1(VAR_1->hw.hw_addr + VAR_3);
 if ((VAR_5 & VAR_4) != (VAR_6 & VAR_4)) {
  FUNC_0(VAR_0, "set/check reg %04X test failed: got 0x%08X "
        "expected 0x%08X\n", VAR_3, (VAR_6 & VAR_4), (VAR_5 & VAR_4));
  *VAR_2 = VAR_3;
  FUNC_2(VAR_7, (VAR_1->hw.hw_addr + VAR_3));
  return 1;
 }
 FUNC_2(VAR_7, (VAR_1->hw.hw_addr + VAR_3));
 return 0;
}
