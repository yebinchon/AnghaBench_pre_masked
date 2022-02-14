
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; } ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {int hw_csum_good; int hw_csum_err; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_5, u32 VAR_6,
         u32 VAR_7, struct sk_buff *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_5->hw;
 u16 VAR_10 = (u16)VAR_6;
 u8 VAR_11 = (u8)(VAR_6 >> 24);

 FUNC_1(VAR_8);


 if (FUNC_2(VAR_9->mac_type < VAR_4)) return;

 if (FUNC_2(VAR_10 & VAR_2)) return;

 if (FUNC_2(VAR_11 & VAR_1)) {

  VAR_5->hw_csum_err++;
  return;
 }

 if (!(VAR_10 & VAR_3))
  return;


 if (FUNC_0(VAR_10 & VAR_3)) {

  VAR_8->ip_summed = VAR_0;
 }
 VAR_5->hw_csum_good++;
}
