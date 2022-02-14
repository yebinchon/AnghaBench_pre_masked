
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (struct e1000_hw*,int,int) ;

__attribute__((used)) static void FUNC_1(struct e1000_adapter *VAR_0)
{
 struct e1000_hw *VAR_1 = &VAR_0->hw;


 FUNC_0(VAR_1, 29, 0x001F);
 FUNC_0(VAR_1, 30, 0x8FFC);
 FUNC_0(VAR_1, 29, 0x001A);
 FUNC_0(VAR_1, 30, 0x8FF0);
}
