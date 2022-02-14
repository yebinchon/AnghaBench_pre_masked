
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct igb_adapter {int test_icr; struct e1000_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct igb_adapter *VAR_4 = (struct igb_adapter *) VAR_3;
 struct e1000_hw *VAR_5 = &VAR_4->hw;

 VAR_4->test_icr |= FUNC_0(VAR_0);

 return VAR_1;
}
