
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ** bw_percentage; } ;
struct ixgbe_adapter {TYPE_1__ dcb_cfg; } ;


 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1,
                                          u8 *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->dcb_cfg.bw_percentage[0][VAR_1];
}
