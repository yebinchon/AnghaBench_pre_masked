
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int link_autoneg; int port_config; int port_type; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

int FUNC_4(struct qlcnic_adapter *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  FUNC_2(&VAR_3->pdev->dev,
   "Get Port Info failed\n");
 } else {
  if (FUNC_1(VAR_3->ahw->port_config))
   VAR_3->ahw->port_type = VAR_2;
  else
   VAR_3->ahw->port_type = VAR_1;

  if (FUNC_0(VAR_3->ahw->port_config))
   VAR_3->ahw->link_autoneg = VAR_0;
 }
 return VAR_4;
}
