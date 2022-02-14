
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct scsi_qla_host {int dpc_flags; struct qla_hw_data* hw; } ;
struct req_que {size_t num_outstanding_cmds; TYPE_1__** outstanding_cmds; } ;
struct qla_hw_data {int dummy; } ;
struct TYPE_3__ {int (* done ) (struct qla_hw_data*,TYPE_1__*,int) ;} ;
typedef TYPE_1__ srb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct qla_hw_data*,TYPE_1__*,int) ;

void
FUNC_4(struct scsi_qla_host *VAR_4,
      struct req_que *VAR_5, uint32_t VAR_6)
{
 srb_t *VAR_7;
 struct qla_hw_data *VAR_8 = VAR_4->hw;


 if (VAR_6 >= VAR_5->num_outstanding_cmds) {
  FUNC_1(VAR_3, VAR_4, 0x3014,
      "Invalid SCSI command index (%x).\n", VAR_6);

  if (FUNC_0(VAR_8))
   FUNC_2(VAR_1, &VAR_4->dpc_flags);
  else
   FUNC_2(VAR_2, &VAR_4->dpc_flags);
  return;
 }

 VAR_7 = VAR_5->outstanding_cmds[VAR_6];
 if (VAR_7) {

  VAR_5->outstanding_cmds[VAR_6] = ((void*)0);


  VAR_7->done(VAR_8, VAR_7, VAR_0 << 16);
 } else {
  FUNC_1(VAR_3, VAR_4, 0x3016, "Invalid SCSI SRB.\n");

  if (FUNC_0(VAR_8))
   FUNC_2(VAR_1, &VAR_4->dpc_flags);
  else
   FUNC_2(VAR_2, &VAR_4->dpc_flags);
 }
}
