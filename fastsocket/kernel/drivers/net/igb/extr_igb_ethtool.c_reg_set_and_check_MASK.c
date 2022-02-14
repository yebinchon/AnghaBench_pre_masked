
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {TYPE_1__* pdev; struct e1000_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static bool FUNC_3(struct igb_adapter *VAR_0, u64 *VAR_1,
         int VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_0->hw;
 u32 VAR_6;
 FUNC_2(VAR_2, VAR_4 & VAR_3);
 VAR_6 = FUNC_1(VAR_2);
 if ((VAR_4 & VAR_3) != (VAR_6 & VAR_3)) {
  FUNC_0(&VAR_0->pdev->dev,
   "set/check reg %04X test failed: got 0x%08X expected 0x%08X\n", VAR_2,
   (VAR_6 & VAR_3), (VAR_4 & VAR_3));
  *VAR_1 = VAR_2;
  return 1;
 }

 return 0;
}
