
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct igb_adapter *VAR_3, u8 *VAR_4, u32 VAR_5,
        u8 VAR_6)
{
 u32 VAR_7, VAR_8;
 struct e1000_hw *VAR_9 = &VAR_3->hw;




 VAR_7 = ((u32) VAR_4[0] | ((u32) VAR_4[1] << 8) |
     ((u32) VAR_4[2] << 16) | ((u32) VAR_4[3] << 24));
 VAR_8 = ((u32) VAR_4[4] | ((u32) VAR_4[5] << 8));


 VAR_8 |= VAR_0;

 if (VAR_9->mac.type == VAR_2)
  VAR_8 |= VAR_1 * VAR_6;
 else
  VAR_8 |= VAR_1 << VAR_6;

 FUNC_2(FUNC_1(VAR_5), VAR_7);
 FUNC_3();
 FUNC_2(FUNC_0(VAR_5), VAR_8);
 FUNC_3();
}
