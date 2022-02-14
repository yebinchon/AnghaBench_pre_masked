
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_cmnd {void* result; TYPE_2__* device; } ;
struct asc_scsi_q {int sg_head; } ;
struct TYPE_10__ {int err_code; } ;
struct TYPE_9__ {int err_code; } ;
struct TYPE_7__ {TYPE_4__ adv_dvc_var; TYPE_3__ asc_dvc_var; } ;
struct asc_board {int * reqcnt; TYPE_1__ dvc_var; } ;
struct TYPE_8__ {size_t id; int host; } ;
typedef TYPE_3__ ASC_DVC_VAR ;
typedef int ADV_SCSI_REQ_Q ;
typedef TYPE_4__ ADV_DVC_VAR ;



 int FUNC_0 (int,char*,...) ;

 scalar_t__ FUNC_1 (struct asc_board*) ;

 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_3__*,struct asc_scsi_q*) ;
 int VAR_0 ;
 void* FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (struct asc_board*,struct scsi_cmnd*,int **) ;
 int FUNC_7 (struct asc_board*,struct scsi_cmnd*,struct asc_scsi_q*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct scsi_cmnd*,char*,int) ;
 struct asc_board* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_7)
{
 int VAR_8, VAR_9;
 struct asc_board *VAR_10 = FUNC_10(VAR_7->device->host);

 FUNC_0(1, "scp 0x%p\n", VAR_7);

 if (FUNC_1(VAR_10)) {
  ASC_DVC_VAR *VAR_11 = &VAR_10->dvc_var.asc_dvc_var;
  struct asc_scsi_q VAR_12;


  VAR_8 = FUNC_7(VAR_10, VAR_7, &VAR_12);
  if (VAR_8 == 129) {
   FUNC_2(VAR_7->device->host, VAR_2);
   return 129;
  }

  VAR_8 = FUNC_4(VAR_11, &VAR_12);
  FUNC_8(VAR_12.sg_head);
  VAR_9 = VAR_11->err_code;
 } else {
  ADV_DVC_VAR *VAR_13 = &VAR_10->dvc_var.adv_dvc_var;
  ADV_SCSI_REQ_Q *VAR_14;

  switch (FUNC_6(VAR_10, VAR_7, &VAR_14)) {
  case 128:
   FUNC_0(3, "adv_build_req ASC_NOERROR\n");
   break;
  case 130:
   FUNC_0(1, "adv_build_req ASC_BUSY\n");






   return 130;
  case 129:
  default:
   FUNC_0(1, "adv_build_req ASC_ERROR\n");
   FUNC_2(VAR_7->device->host, VAR_2);
   return 129;
  }

  VAR_8 = FUNC_3(VAR_13, VAR_14);
  VAR_9 = VAR_13->err_code;
 }

 switch (VAR_8) {
 case 128:
  FUNC_2(VAR_7->device->host, VAR_5);




  VAR_10->reqcnt[VAR_7->device->id]++;
  FUNC_0(1, "ExeScsiQueue() ASC_NOERROR\n");
  break;
 case 130:
  FUNC_2(VAR_7->device->host, VAR_3);
  break;
 case 129:
  FUNC_9(VAR_1, VAR_7, "ExeScsiQueue() ASC_ERROR, "
   "err_code 0x%x\n", VAR_9);
  FUNC_2(VAR_7->device->host, VAR_4);
  VAR_7->result = FUNC_5(VAR_0);
  break;
 default:
  FUNC_9(VAR_1, VAR_7, "ExeScsiQueue() unknown, "
   "err_code 0x%x\n", VAR_9);
  FUNC_2(VAR_7->device->host, VAR_6);
  VAR_7->result = FUNC_5(VAR_0);
  break;
 }

 FUNC_0(1, "end\n");
 return VAR_8;
}
