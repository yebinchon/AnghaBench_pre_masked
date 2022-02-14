
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct e1000_adapter {int blink_timer; int led_status; struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct e1000_adapter *VAR_4 = (struct e1000_adapter *) VAR_3;
 struct e1000_hw *VAR_5 = &VAR_4->hw;

 if (FUNC_3(VAR_1, &VAR_4->led_status))
  FUNC_0(VAR_5);
 else
  FUNC_1(VAR_5);

 FUNC_2(&VAR_4->blink_timer, VAR_2 + VAR_0);
}
