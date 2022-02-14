
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd_queue {scalar_t__ qlen; struct ub_scsi_cmd* head; int * tail; } ;
struct ub_scsi_cmd {struct ub_scsi_cmd* next; } ;
struct ub_dev {struct ub_scsi_cmd_queue cmd_queue; } ;



__attribute__((used)) static struct ub_scsi_cmd *FUNC_0(struct ub_dev *VAR_0)
{
 struct ub_scsi_cmd_queue *VAR_1 = &VAR_0->cmd_queue;
 struct ub_scsi_cmd *VAR_2;

 if (VAR_1->qlen == 0)
  return ((void*)0);
 if (--VAR_1->qlen == 0)
  VAR_1->tail = ((void*)0);
 VAR_2 = VAR_1->head;
 VAR_1->head = VAR_2->next;
 VAR_2->next = ((void*)0);
 return VAR_2;
}
