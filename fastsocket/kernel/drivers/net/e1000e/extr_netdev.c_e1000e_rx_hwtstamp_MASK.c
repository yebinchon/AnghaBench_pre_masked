
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; int flags2; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct e1000_adapter*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_7, u32 VAR_8,
          struct sk_buff *VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_7->hw;
 u64 VAR_11;

 if (!(VAR_7->flags & VAR_3) ||
     !(VAR_8 & VAR_0) ||
     !(FUNC_1(VAR_6) & VAR_1))
  return;
 VAR_11 = (u64)FUNC_1(VAR_5);
 VAR_11 |= (u64)FUNC_1(VAR_4) << 32;
 FUNC_0(VAR_7, FUNC_2(VAR_9), VAR_11);

 VAR_7->flags2 &= ~VAR_2;
}
