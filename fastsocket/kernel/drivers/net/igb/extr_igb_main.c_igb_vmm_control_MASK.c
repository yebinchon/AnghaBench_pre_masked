
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int vfs_allocated_count; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (struct e1000_hw*,int,int ) ;
 int FUNC_1 (struct e1000_hw*,int) ;
 int FUNC_2 (struct e1000_hw*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct igb_adapter *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6;

 switch (VAR_5->mac.type) {
 case 134:
 case 131:
 case 130:
 case 128:
 default:

  return;
 case 133:

  VAR_6 = FUNC_3(VAR_0);
  VAR_6 |= VAR_1;
  FUNC_4(VAR_0, VAR_6);
 case 132:

  VAR_6 = FUNC_3(VAR_2);
  VAR_6 |= VAR_3;
  FUNC_4(VAR_2, VAR_6);
 case 129:

  break;
 }

 if (VAR_4->vfs_allocated_count) {
  FUNC_1(VAR_5, 1);
  FUNC_2(VAR_5, 1);
  FUNC_0(VAR_5, 1,
           VAR_4->vfs_allocated_count);
 } else {
  FUNC_1(VAR_5, 0);
  FUNC_2(VAR_5, 0);
 }
}
