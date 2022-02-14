
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsp_que {struct qla_msix_entry* msix; struct qla_hw_data* hw; } ;
struct qla_msix_entry {int have_irq; struct rsp_que* rsp; int vector; } ;
struct qla_init_msix_entry {int name; int handler; } ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 struct qla_init_msix_entry* VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,struct rsp_que*) ;

int FUNC_3(struct rsp_que *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;
 struct qla_init_msix_entry *VAR_4 = &VAR_0[2];
 struct qla_msix_entry *VAR_5 = VAR_2->msix;
 scsi_qla_host_t *VAR_6 = FUNC_0(VAR_3->pdev);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->vector, VAR_4->handler, 0, VAR_4->name, VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_1, VAR_6, 0x00e6,
      "MSI-X: Unable to register handler -- %x/%d.\n",
      VAR_5->vector, VAR_7);
  return VAR_7;
 }
 VAR_5->have_irq = 1;
 VAR_5->rsp = VAR_2;
 return VAR_7;
}
