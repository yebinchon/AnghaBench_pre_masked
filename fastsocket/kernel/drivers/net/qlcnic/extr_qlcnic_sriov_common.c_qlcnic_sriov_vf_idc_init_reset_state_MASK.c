
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {scalar_t__ reset_ctx_cnt; scalar_t__ tx_timeo_cnt; int state; TYPE_1__* pdev; TYPE_2__* ahw; } ;
struct qlc_83xx_idc {scalar_t__ prev_state; int status; } ;
struct TYPE_4__ {int pci_func; struct qlc_83xx_idc idc; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_3)
{
 struct qlc_83xx_idc *VAR_4 = &VAR_3->ahw->idc;
 u8 VAR_5 = VAR_3->ahw->pci_func;

 if (VAR_4->prev_state == VAR_0) {
  FUNC_1(&VAR_3->pdev->dev,
   "Firmware hang detected by VF 0x%x\n", VAR_5);
  FUNC_3(VAR_2, &VAR_3->state);
  VAR_3->tx_timeo_cnt = 0;
  VAR_3->reset_ctx_cnt = 0;
  FUNC_0(VAR_1, &VAR_4->status);
  FUNC_2(VAR_3);
 }
 return 0;
}
