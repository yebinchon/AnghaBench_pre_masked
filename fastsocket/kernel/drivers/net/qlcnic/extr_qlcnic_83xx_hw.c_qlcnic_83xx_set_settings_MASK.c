
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct ethtool_cmd {scalar_t__ autoneg; } ;
struct TYPE_4__ {int port_config; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ethtool_cmd*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

int FUNC_3(struct qlcnic_adapter *VAR_6,
        struct ethtool_cmd *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9 = VAR_6->ahw->port_config;

 if (VAR_7->autoneg)
  VAR_6->ahw->port_config |= VAR_2;

 switch (FUNC_1(VAR_7)) {
 case 131:
  VAR_6->ahw->port_config |= VAR_3;
  break;
 case 130:
  VAR_6->ahw->port_config |= VAR_4;
  break;
 case 129:
  VAR_6->ahw->port_config |= VAR_0;
  break;
 case 128:
  VAR_6->ahw->port_config |= VAR_1;
  break;
 default:
  return -VAR_5;
 }

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_0(&VAR_6->pdev->dev,
    "Faild to Set Link Speed and autoneg.\n");
  VAR_6->ahw->port_config = VAR_9;
 }
 return VAR_8;
}
