
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int fw_tgt_reported; } ;
struct scsi_qla_host {int host; int device_flags; int dpc_flags; TYPE_1__ flags; int loop_state; int loop_down_timer; } ;
struct TYPE_5__ {int evtcode; int* mbx; } ;
struct TYPE_6__ {TYPE_2__ aenfx; } ;
struct qla_work_evt {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct scsi_qla_host*,int) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct scsi_qla_host*,int) ;
 int FUNC_6 (int ,int *) ;

int
FUNC_7(struct scsi_qla_host *VAR_6, struct qla_work_evt *VAR_7)
{
 int VAR_8 = 0;
 uint32_t VAR_9, VAR_10;

 VAR_9 = VAR_3;
 VAR_10 = VAR_7->u.aenfx.evtcode;

 switch (VAR_7->u.aenfx.evtcode) {
 case 128:
  if (VAR_7->u.aenfx.mbx[1] == 0) {
   if (VAR_7->u.aenfx.mbx[2] == 1) {
    if (!VAR_6->flags.fw_tgt_reported)
     VAR_6->flags.fw_tgt_reported = 1;
    FUNC_0(&VAR_6->loop_down_timer, 0);
    FUNC_0(&VAR_6->loop_state, VAR_5);
    FUNC_6(VAR_4, &VAR_6->dpc_flags);
    FUNC_4(VAR_6);
   } else if (VAR_7->u.aenfx.mbx[2] == 2) {
    FUNC_5(VAR_6, VAR_7->u.aenfx.mbx[3]);
   }
  } else if (VAR_7->u.aenfx.mbx[1] == 0xffff) {
   if (VAR_7->u.aenfx.mbx[2] == 1) {
    if (!VAR_6->flags.fw_tgt_reported)
     VAR_6->flags.fw_tgt_reported = 1;
    FUNC_6(VAR_4, &VAR_6->dpc_flags);
   } else if (VAR_7->u.aenfx.mbx[2] == 2) {
    VAR_6->device_flags |= VAR_0;
    FUNC_3(VAR_6, 1);
   }
  }
  break;
 case 129:
  VAR_9 = VAR_2;
  VAR_10 = 0;
  break;
 case 130:
  VAR_9 = VAR_1;
  VAR_10 = 0;
  break;
 }

 FUNC_2(VAR_6->host, FUNC_1(),
     VAR_9, VAR_10);

 return VAR_8;
}
