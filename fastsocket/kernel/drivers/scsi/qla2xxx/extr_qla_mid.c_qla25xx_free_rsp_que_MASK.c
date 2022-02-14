
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct rsp_que {int id; int length; scalar_t__ dma; int * ring; TYPE_1__* msix; } ;
struct qla_hw_data {int vport_lock; int rsp_qid_map; int ** rsp_q_map; TYPE_2__* pdev; } ;
typedef int response_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int * rsp; scalar_t__ have_irq; int vector; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int,int *,scalar_t__) ;
 int FUNC_2 (int ,struct rsp_que*) ;
 int FUNC_3 (struct rsp_que*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct scsi_qla_host *VAR_0, struct rsp_que *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_0->hw;
 uint16_t VAR_3 = VAR_1->id;

 if (VAR_1->msix && VAR_1->msix->have_irq) {
  FUNC_2(VAR_1->msix->vector, VAR_1);
  VAR_1->msix->have_irq = 0;
  VAR_1->msix->rsp = ((void*)0);
 }
 FUNC_1(&VAR_2->pdev->dev, (VAR_1->length + 1) *
  sizeof(response_t), VAR_1->ring, VAR_1->dma);
 VAR_1->ring = ((void*)0);
 VAR_1->dma = 0;
 if (VAR_3) {
  VAR_2->rsp_q_map[VAR_3] = ((void*)0);
  FUNC_4(&VAR_2->vport_lock);
  FUNC_0(VAR_3, VAR_2->rsp_qid_map);
  FUNC_5(&VAR_2->vport_lock);
 }
 FUNC_3(VAR_1);
 VAR_1 = ((void*)0);
}
