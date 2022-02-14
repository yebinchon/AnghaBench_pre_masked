
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_3__ {int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ,int ) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_3(VAR_2);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 struct sockaddr *VAR_6 = VAR_3;

 if (!FUNC_1(VAR_6->sa_data))
  return -VAR_0;

 FUNC_2(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_2(VAR_5->mac.addr, VAR_6->sa_data, VAR_2->addr_len);

 VAR_5->mac.ops.set_rar(VAR_5, 0, VAR_5->mac.addr, FUNC_0(0), VAR_1);

 return 0;
}
