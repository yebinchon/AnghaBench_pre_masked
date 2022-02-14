
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ media_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct e1000_hw*,int ,int *) ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;

void FUNC_2(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 u16 VAR_5 = 0;


 if (VAR_4->media_type == VAR_2) {


  FUNC_0(VAR_4, VAR_1, &VAR_5);
  VAR_5 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_1, VAR_5);
 }
}
