
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ media_type; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_1__ phy; TYPE_2__ mac; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct e1000_adapter*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7;

 if (VAR_6->phy.media_type == VAR_3 ||
     VAR_6->phy.media_type == VAR_4) {
  switch (VAR_6->mac.type) {
  case 130:
   return FUNC_2(VAR_5);
   break;
  case 129:
  case 128:
   return FUNC_1(VAR_5);
   break;
  default:
   VAR_7 = FUNC_3(VAR_1);
   VAR_7 |= VAR_0;
   FUNC_4(VAR_1, VAR_7);
   return 0;
  }
 } else if (VAR_6->phy.media_type == VAR_2) {
  return FUNC_0(VAR_5);
 }

 return 7;
}
