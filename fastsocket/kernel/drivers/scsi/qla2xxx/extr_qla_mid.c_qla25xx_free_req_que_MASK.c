
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct req_que {int id; int length; struct req_que* outstanding_cmds; scalar_t__ dma; int * ring; } ;
struct qla_hw_data {int vport_lock; int req_qid_map; int ** req_q_map; TYPE_1__* pdev; } ;
typedef int request_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int,int *,scalar_t__) ;
 int FUNC_2 (struct req_que*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct scsi_qla_host *VAR_0, struct req_que *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_0->hw;
 uint16_t VAR_3 = VAR_1->id;

 FUNC_1(&VAR_2->pdev->dev, (VAR_1->length + 1) *
  sizeof(request_t), VAR_1->ring, VAR_1->dma);
 VAR_1->ring = ((void*)0);
 VAR_1->dma = 0;
 if (VAR_3) {
  VAR_2->req_q_map[VAR_3] = ((void*)0);
  FUNC_3(&VAR_2->vport_lock);
  FUNC_0(VAR_3, VAR_2->req_qid_map);
  FUNC_4(&VAR_2->vport_lock);
 }
 FUNC_2(VAR_1->outstanding_cmds);
 FUNC_2(VAR_1);
 VAR_1 = ((void*)0);
}
