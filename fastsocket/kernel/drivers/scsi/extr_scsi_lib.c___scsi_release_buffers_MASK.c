
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nents; } ;
struct scsi_data_buffer {TYPE_3__ table; } ;
struct scsi_cmnd {struct scsi_data_buffer* prot_sdb; TYPE_2__* request; struct scsi_data_buffer sdb; } ;
struct TYPE_5__ {TYPE_1__* next_rq; } ;
struct TYPE_4__ {struct scsi_data_buffer* special; } ;


 int FUNC_0 (int ,struct scsi_data_buffer*) ;
 int FUNC_1 (struct scsi_data_buffer*,int ,int) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_data_buffer*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_1, int VAR_2)
{

 if (VAR_1->sdb.table.nents)
  FUNC_3(&VAR_1->sdb);

 FUNC_1(&VAR_1->sdb, 0, sizeof(VAR_1->sdb));

 if (VAR_2 && FUNC_2(VAR_1)) {
  struct scsi_data_buffer *VAR_3 =
   VAR_1->request->next_rq->special;
  FUNC_3(VAR_3);
  FUNC_0(VAR_0, VAR_3);
  VAR_1->request->next_rq->special = ((void*)0);
 }

 if (FUNC_4(VAR_1))
  FUNC_3(VAR_1->prot_sdb);
}
