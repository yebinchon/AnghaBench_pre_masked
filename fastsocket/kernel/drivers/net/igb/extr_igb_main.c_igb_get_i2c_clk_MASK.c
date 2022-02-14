
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 struct igb_adapter *VAR_3 = (struct igb_adapter *)VAR_2;
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 s32 VAR_5 = FUNC_0(VAR_0);

 return ((VAR_5 & VAR_1) != 0);
}
