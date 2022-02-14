
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * blink_led; } ;
struct TYPE_6__ {int type; TYPE_1__ ops; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
struct e1000_adapter {int flags2; struct e1000_hw hw; int flags; scalar_t__ max_hw_frame_size; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;



 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_adapter *VAR_10)
{
 struct e1000_hw *VAR_11 = &VAR_10->hw;
 s32 VAR_12;

 VAR_12 = FUNC_0(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12)
  return VAR_12;

 switch (VAR_11->mac.type) {
 case 132:
 case 131:
 case 133:
  VAR_12 = FUNC_2(VAR_11);
  break;
 case 128:
 case 130:
 case 129:
  VAR_12 = FUNC_3(VAR_11);
  break;
 default:
  break;
 }
 if (VAR_12)
  return VAR_12;




 if ((VAR_10->hw.phy.type == VAR_9) ||
     ((VAR_10->hw.mac.type >= 130) &&
      (!(FUNC_4(VAR_0) & VAR_1)))) {
  VAR_10->flags &= ~VAR_6;
  VAR_10->max_hw_frame_size = VAR_4 + VAR_3;

  VAR_11->mac.ops.blink_led = ((void*)0);
 }

 if ((VAR_10->hw.mac.type == 132) &&
     (VAR_10->hw.phy.type != VAR_9))
  VAR_10->flags |= VAR_7;


 if ((VAR_10->hw.mac.type == 130) &&
     (FUNC_4(VAR_8) & VAR_2))
  VAR_10->flags2 |= VAR_5;

 return 0;
}
