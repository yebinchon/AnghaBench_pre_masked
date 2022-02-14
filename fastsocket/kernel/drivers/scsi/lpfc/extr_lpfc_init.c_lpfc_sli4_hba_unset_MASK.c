
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_11__ {int sli_flag; TYPE_6__* mbox_active; } ;
struct TYPE_8__ {scalar_t__ intr_enable; } ;
struct lpfc_hba {TYPE_5__* pport; int worker_thread; scalar_t__ cfg_sriov_nr_virtfn; int hbalock; TYPE_4__ sli; TYPE_1__ sli4_hba; struct pci_dev* pcidev; } ;
struct TYPE_9__ {int mbxStatus; } ;
struct TYPE_10__ {TYPE_2__ mb; } ;
struct TYPE_13__ {TYPE_3__ u; } ;
struct TYPE_12__ {scalar_t__ work_port_events; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct lpfc_hba *VAR_4)
{
 int VAR_5 = 0;
 LPFC_MBOXQ_t *VAR_6;
 struct pci_dev *VAR_7 = VAR_4->pcidev;

 FUNC_7(VAR_4);
 VAR_4->sli4_hba.intr_enable = 0;







 FUNC_10(&VAR_4->hbalock);
 VAR_4->sli.sli_flag |= VAR_1;
 FUNC_11(&VAR_4->hbalock);

 while (VAR_4->sli.sli_flag & VAR_2) {
  FUNC_8(10);
  if (++VAR_5 > VAR_0)
   break;
 }

 if (VAR_4->sli.sli_flag & VAR_2) {
  FUNC_10(&VAR_4->hbalock);
  VAR_6 = VAR_4->sli.mbox_active;
  VAR_6->u.mb.mbxStatus = VAR_3;
  FUNC_0(VAR_4, VAR_6);
  VAR_4->sli.sli_flag &= ~VAR_2;
  VAR_4->sli.mbox_active = ((void*)0);
  FUNC_11(&VAR_4->hbalock);
 }


 FUNC_6(VAR_4);


 FUNC_5(VAR_4);


 FUNC_3(VAR_4);


 if (VAR_4->cfg_sriov_nr_virtfn)
  FUNC_9(VAR_7);


 FUNC_1(VAR_4->worker_thread);


 FUNC_2(VAR_4);
 FUNC_4(VAR_4);


 VAR_4->pport->work_port_events = 0;
}
