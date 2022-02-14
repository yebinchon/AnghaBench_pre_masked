
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* led_off ) (struct ixgbe_hw*,int ) ;int (* led_on ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (int) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, u32 VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_3(VAR_2);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6 = FUNC_0(VAR_5, VAR_0);
 u32 VAR_7;

 if (!VAR_3 || VAR_3 > 300)
  VAR_3 = 300;

 for (VAR_7 = 0; VAR_7 < (VAR_3 * 1000); VAR_7 += 400) {
  VAR_5->mac.ops.led_on(VAR_5, VAR_1);
  FUNC_2(200);
  VAR_5->mac.ops.led_off(VAR_5, VAR_1);
  FUNC_2(200);
 }


 FUNC_1(&VAR_4->hw, VAR_0, VAR_6);

 return 0;
}
