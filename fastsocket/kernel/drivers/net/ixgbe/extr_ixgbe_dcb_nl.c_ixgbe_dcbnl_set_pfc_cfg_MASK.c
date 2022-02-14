
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int pfc_mode_enable; TYPE_1__* tc_config; } ;
struct TYPE_8__ {TYPE_3__* tc_config; } ;
struct ixgbe_adapter {TYPE_2__ temp_dcb_cfg; TYPE_4__ dcb_cfg; } ;
struct TYPE_7__ {scalar_t__ dcb_pfc; } ;
struct TYPE_5__ {scalar_t__ dcb_pfc; } ;


 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1,
                                    u8 VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_0(VAR_0);

 VAR_3->temp_dcb_cfg.tc_config[VAR_1].dcb_pfc = VAR_2;
 if (VAR_3->temp_dcb_cfg.tc_config[VAR_1].dcb_pfc !=
     VAR_3->dcb_cfg.tc_config[VAR_1].dcb_pfc)
  VAR_3->temp_dcb_cfg.pfc_mode_enable = 1;
}
