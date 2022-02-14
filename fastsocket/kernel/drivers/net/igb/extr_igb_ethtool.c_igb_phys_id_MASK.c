
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int led_status; struct e1000_hw hw; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (unsigned long) ;
 struct igb_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, u32 VAR_3)
{
 struct igb_adapter *VAR_4 = FUNC_5(VAR_2);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 unsigned long VAR_6;

 VAR_6 = VAR_3 * 1000;





 if (!VAR_6 || VAR_6 > VAR_1)
  VAR_6 = VAR_1;

 FUNC_1(VAR_5);
 FUNC_4(VAR_6);

 FUNC_3(VAR_5);
 FUNC_0(VAR_0, &VAR_4->led_status);
 FUNC_2(VAR_5);

 return 0;
}
