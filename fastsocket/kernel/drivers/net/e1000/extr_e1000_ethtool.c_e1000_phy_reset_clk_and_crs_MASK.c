
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct e1000_hw*,int ,int *) ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 u16 VAR_6;





 FUNC_0(VAR_5, VAR_1, &VAR_6);
 VAR_6 |= VAR_0;
 FUNC_1(VAR_5,
  VAR_1, VAR_6);





 FUNC_0(VAR_5, VAR_2, &VAR_6);
 VAR_6 |= VAR_3;
 FUNC_1(VAR_5,
  VAR_2, VAR_6);
}
