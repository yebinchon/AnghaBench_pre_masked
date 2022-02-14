
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct rsp_que {int dummy; } ;
struct TYPE_10__ {scalar_t__ mbox_busy; } ;
struct qla_hw_data {TYPE_2__* isp_ops; TYPE_1__ flags; struct rsp_que** rsp_q_map; scalar_t__ mem_only; } ;
struct pci_dev {int error_state; } ;
struct TYPE_12__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef int pci_ers_result_t ;
struct TYPE_11__ {scalar_t__ (* abort_isp ) (TYPE_3__*) ;scalar_t__ (* pci_config ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 TYPE_3__* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_9 (int ,TYPE_3__*,int,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (struct qla_hw_data*,struct rsp_que*) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_15(struct pci_dev *VAR_7)
{
 pci_ers_result_t VAR_8 = VAR_1;
 scsi_qla_host_t *VAR_9 = FUNC_5(VAR_7);
 struct qla_hw_data *VAR_10 = VAR_9->hw;
 struct rsp_que *VAR_11;
 int VAR_12, VAR_13 = 10;

 FUNC_8(VAR_5, VAR_9, 0x9004,
     "Slot Reset.\n");





 VAR_7->error_state = VAR_4;

 FUNC_6(VAR_7);




 FUNC_7(VAR_7);

 if (VAR_10->mem_only)
  VAR_12 = FUNC_4(VAR_7);
 else
  VAR_12 = FUNC_3(VAR_7);

 if (VAR_12) {
  FUNC_9(VAR_6, VAR_9, 0x9005,
      "Can't re-enable PCI device after reset.\n");
  goto exit_slot_reset;
 }

 VAR_11 = VAR_10->rsp_q_map[0];
 if (FUNC_10(VAR_10, VAR_11))
  goto exit_slot_reset;

 if (VAR_10->isp_ops->pci_config(VAR_9))
  goto exit_slot_reset;

 if (FUNC_0(VAR_10)) {
  if (FUNC_11(VAR_9) == VAR_3) {
   VAR_8 = VAR_2;
   goto exit_slot_reset;
  } else
   goto exit_slot_reset;
 }

 while (VAR_10->flags.mbox_busy && VAR_13--)
  FUNC_2(1000);

 FUNC_12(VAR_0, &VAR_9->dpc_flags);
 if (VAR_10->isp_ops->abort_isp(VAR_9) == VAR_3)
  VAR_8 = VAR_2;
 FUNC_1(VAR_0, &VAR_9->dpc_flags);

exit_slot_reset:
 FUNC_8(VAR_5, VAR_9, 0x900e,
     "slot_reset return %x.\n", VAR_8);

 return VAR_8;
}
