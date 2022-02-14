
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct TYPE_4__ {int speed; int width; int type; } ;
struct ixgbe_hw {TYPE_2__ bus; struct ixgbe_mac_info mac; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int pdev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct ixgbe_hw*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = VAR_2->back;
 struct ixgbe_mac_info *VAR_4 = &VAR_2->mac;
 u16 VAR_5;

 VAR_2->bus.type = VAR_1;


 FUNC_2(VAR_3->pdev, VAR_0,
                      &VAR_5);

 VAR_2->bus.width = FUNC_1(VAR_5);
 VAR_2->bus.speed = FUNC_0(VAR_5);

 VAR_4->ops.set_lan_id(VAR_2);

 return 0;
}
