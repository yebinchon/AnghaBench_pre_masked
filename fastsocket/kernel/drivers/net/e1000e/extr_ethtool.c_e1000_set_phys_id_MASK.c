
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int (* led_off ) (struct e1000_hw*) ;int (* led_on ) (struct e1000_hw*) ;int (* cleanup_led ) (struct e1000_hw*) ;int (* blink_led ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*,int ,int ) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2,
        enum ethtool_phys_id_state VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_1(VAR_2);
 struct e1000_hw *VAR_5 = &VAR_4->hw;

 switch (VAR_3) {
 case 131:
  if (!VAR_5->mac.ops.blink_led)
   return 2;

  VAR_5->mac.ops.blink_led(VAR_5);
  break;

 case 130:
  if (VAR_5->phy.type == VAR_1)
   FUNC_0(VAR_5, VAR_0, 0);
  VAR_5->mac.ops.led_off(VAR_5);
  VAR_5->mac.ops.cleanup_led(VAR_5);
  break;

 case 128:
  VAR_5->mac.ops.led_on(VAR_5);
  break;

 case 129:
  VAR_5->mac.ops.led_off(VAR_5);
  break;
 }
 return 0;
}
