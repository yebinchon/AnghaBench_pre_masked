
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_eh_save {int prot_op; int underflow; int result; int next_rq; int sdb; int data_direction; int cmnd; int cmd_len; } ;
struct scsi_cmnd {int prot_op; int underflow; int result; TYPE_1__* request; int sdb; int sc_data_direction; int cmnd; int cmd_len; } ;
struct TYPE_2__ {int next_rq; } ;



void FUNC_0(struct scsi_cmnd* VAR_0, struct scsi_eh_save *VAR_1)
{



 VAR_0->cmd_len = VAR_1->cmd_len;
 VAR_0->cmnd = VAR_1->cmnd;
 VAR_0->sc_data_direction = VAR_1->data_direction;
 VAR_0->sdb = VAR_1->sdb;
 VAR_0->request->next_rq = VAR_1->next_rq;
 VAR_0->result = VAR_1->result;
 VAR_0->underflow = VAR_1->underflow;
 VAR_0->prot_op = VAR_1->prot_op;
}
