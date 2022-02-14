
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pci_channel_io_perm_failure; } ;
struct qla_hw_data {TYPE_2__* isp_ops; TYPE_1__ flags; int pdev; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_8__ {int (* disable_intrs ) (struct qla_hw_data*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct qla_hw_data*) ;

void
FUNC_4(scsi_qla_host_t *VAR_0)
{
 struct qla_hw_data *VAR_1 = VAR_0->hw;

 if (FUNC_0(VAR_1->pdev) &&
     VAR_1->flags.pci_channel_io_perm_failure) {
  return;
 }

 VAR_1->isp_ops->disable_intrs(VAR_1);

 FUNC_2(VAR_0);


 FUNC_1(VAR_0);
}
