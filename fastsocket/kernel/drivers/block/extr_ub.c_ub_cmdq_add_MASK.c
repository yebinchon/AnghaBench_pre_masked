
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd_queue {scalar_t__ qlen; scalar_t__ qmax; struct ub_scsi_cmd* tail; struct ub_scsi_cmd* head; } ;
struct ub_scsi_cmd {struct ub_scsi_cmd* next; } ;
struct ub_dev {struct ub_scsi_cmd_queue cmd_queue; } ;



__attribute__((used)) static void FUNC_0(struct ub_dev *VAR_0, struct ub_scsi_cmd *VAR_1)
{
 struct ub_scsi_cmd_queue *VAR_2 = &VAR_0->cmd_queue;

 if (VAR_2->qlen++ == 0) {
  VAR_2->head = VAR_1;
  VAR_2->tail = VAR_1;
 } else {
  VAR_2->tail->next = VAR_1;
  VAR_2->tail = VAR_1;
 }

 if (VAR_2->qlen > VAR_2->qmax)
  VAR_2->qmax = VAR_2->qlen;
}
