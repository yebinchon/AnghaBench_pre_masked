
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct qla_hw_data {int dummy; } ;
struct TYPE_7__ {int ref_count; TYPE_1__* fcport; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_6__ {int vha; } ;


 int FUNC_0 () ;
 struct scsi_cmnd* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int,int ,int,char*,TYPE_2__*,struct scsi_cmnd*) ;
 int VAR_1 ;
 int FUNC_5 (struct qla_hw_data*,TYPE_2__*) ;
 int FUNC_6 (struct scsi_cmnd*) ;

void
FUNC_7(void *VAR_2, void *VAR_3, int VAR_4)
{
 struct qla_hw_data *VAR_5 = (struct qla_hw_data *)VAR_2;
 srb_t *VAR_6 = (srb_t*)VAR_3;
 struct scsi_cmnd *VAR_7 = FUNC_1(VAR_6);

 VAR_7->result = VAR_4;

 if (FUNC_3(&VAR_6->ref_count) == 0) {
  FUNC_4(VAR_1, VAR_6->fcport->vha, 0x3015,
      "SP reference-count to ZERO -- sp=%p cmd=%p.\n",
      VAR_6, FUNC_1(VAR_6));
  if (VAR_0 & VAR_1)
   FUNC_0();
  return;
 }
 if (!FUNC_2(&VAR_6->ref_count))
  return;

 FUNC_5(VAR_5, VAR_6);
 VAR_7->scsi_done(VAR_7);
}
