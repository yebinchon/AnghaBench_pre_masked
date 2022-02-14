
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct e1000_adapter {int eiac_mask; scalar_t__ msix_entries; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_8->hw;

 if (VAR_8->msix_entries) {
  FUNC_1(VAR_4, VAR_8->eiac_mask & VAR_0);
  FUNC_1(VAR_5, VAR_8->eiac_mask | VAR_3 | VAR_2);
 } else if (VAR_9->mac.type == VAR_7) {
  FUNC_1(VAR_5, VAR_6 | VAR_1);
 } else {
  FUNC_1(VAR_5, VAR_6);
 }
 FUNC_0();
}
