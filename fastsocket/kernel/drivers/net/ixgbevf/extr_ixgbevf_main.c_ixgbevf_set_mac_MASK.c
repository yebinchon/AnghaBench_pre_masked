
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_3__ {int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct ixgbevf_adapter *VAR_3 = FUNC_2(VAR_1);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 struct sockaddr *VAR_5 = VAR_2;

 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;

 FUNC_1(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);
 FUNC_1(VAR_4->mac.addr, VAR_5->sa_data, VAR_1->addr_len);

 FUNC_3(&VAR_3->mbx_lock);

 VAR_4->mac.ops.set_rar(VAR_4, 0, VAR_4->mac.addr, 0);

 FUNC_4(&VAR_3->mbx_lock);

 return 0;
}
