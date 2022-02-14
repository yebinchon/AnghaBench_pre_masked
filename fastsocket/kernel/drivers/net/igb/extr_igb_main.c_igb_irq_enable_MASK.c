
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int eims_enable_mask; scalar_t__ vfs_allocated_count; scalar_t__ msix_entries; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_13)
{
 struct e1000_hw *VAR_14 = &VAR_13->hw;

 if (VAR_13->msix_entries) {
  u32 VAR_15 = VAR_7 | VAR_5 | VAR_6;
  u32 VAR_16 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_16 | VAR_13->eims_enable_mask);
  VAR_16 = FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_16 | VAR_13->eims_enable_mask);
  FUNC_1(VAR_2, VAR_13->eims_enable_mask);
  if (VAR_13->vfs_allocated_count) {
   FUNC_1(VAR_10, 0xFF);
   VAR_15 |= VAR_9;
  }




  if (VAR_14->mac.type >= VAR_12)
   VAR_15 |= VAR_8;
  FUNC_1(VAR_4, VAR_15);
 } else {
  FUNC_1(VAR_4, VAR_11 |
    VAR_6);
  FUNC_1(VAR_3, VAR_11 |
    VAR_6);
 }
}
