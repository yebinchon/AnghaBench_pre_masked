
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_4, int VAR_5)
{
 struct igb_adapter *VAR_6 = (struct igb_adapter *)VAR_4;
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 s32 VAR_8 = FUNC_0(VAR_0);

 if (VAR_5)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;

 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_1;
 FUNC_1(VAR_0, VAR_8);
 FUNC_2();

}
