
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int pfc_mode_enable; } ;
struct ixgbe_adapter {TYPE_1__ temp_dcb_cfg; } ;


 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, u8 VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_2->temp_dcb_cfg.pfc_mode_enable = VAR_1;
}
