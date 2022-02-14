
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* tc_config; } ;
struct ixgbe_adapter {TYPE_3__ dcb_cfg; } ;
struct TYPE_5__ {TYPE_1__* path; } ;
struct TYPE_4__ {int up_to_tc_bitmap; int bwg_percent; int bwg_id; int prio_type; } ;


 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1,
                                         u8 *VAR_2, u8 *VAR_3, u8 *VAR_4,
                                         u8 *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_0(VAR_0);

 *VAR_2 = VAR_6->dcb_cfg.tc_config[VAR_1].path[1].prio_type;
 *VAR_3 = VAR_6->dcb_cfg.tc_config[VAR_1].path[1].bwg_id;
 *VAR_4 = VAR_6->dcb_cfg.tc_config[VAR_1].path[1].bwg_percent;
 *VAR_5 = VAR_6->dcb_cfg.tc_config[VAR_1].path[1].up_to_tc_bitmap;
}
