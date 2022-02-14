
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {int state; TYPE_2__* pdev; TYPE_1__* ahw; } ;
struct qlc_83xx_idc {scalar_t__ prev_state; int status; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct qlc_83xx_idc idc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_4)
{
 struct qlc_83xx_idc *VAR_5 = &VAR_4->ahw->idc;

 FUNC_1(&VAR_4->pdev->dev, "Device is in failed state\n");
 if (VAR_5->prev_state == VAR_1)
  FUNC_2(VAR_4);

 FUNC_0(VAR_2, &VAR_5->status);
 FUNC_0(VAR_3, &VAR_4->state);
 return -VAR_0;
}
