
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct igb_q_vector {struct igb_adapter* adapter; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct igb_adapter*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct igb_q_vector *VAR_4,
    struct sk_buff *VAR_5)
{
 struct igb_adapter *VAR_6 = VAR_4->adapter;
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 u64 VAR_8;
 if (!(FUNC_1(VAR_2) & VAR_3))
  return;

 VAR_8 = FUNC_1(VAR_1);
 VAR_8 |= (u64)FUNC_1(VAR_0) << 32;

 FUNC_0(VAR_6, FUNC_2(VAR_5), VAR_8);
}
