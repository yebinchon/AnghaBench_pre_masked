
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rsp_que {int dummy; } ;
struct TYPE_5__ {scalar_t__ msi_enabled; scalar_t__ msix_enabled; } ;
struct qla_hw_data {TYPE_4__* pdev; TYPE_1__ flags; struct rsp_que** rsp_q_map; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_7__ {int irq; } ;


 int FUNC_0 (int ,struct rsp_que*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct qla_hw_data*) ;

void
FUNC_3(scsi_qla_host_t *VAR_0)
{
 struct qla_hw_data *VAR_1 = VAR_0->hw;
 struct rsp_que *VAR_2;





 if (!VAR_1->rsp_q_map || !VAR_1->rsp_q_map[0])
  return;
 VAR_2 = VAR_1->rsp_q_map[0];

 if (VAR_1->flags.msix_enabled)
  FUNC_2(VAR_1);
 else if (VAR_1->flags.msi_enabled) {
  FUNC_0(VAR_1->pdev->irq, VAR_2);
  FUNC_1(VAR_1->pdev);
 } else
  FUNC_0(VAR_1->pdev->irq, VAR_2);
}
