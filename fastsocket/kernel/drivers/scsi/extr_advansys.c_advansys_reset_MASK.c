
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_7__ {scalar_t__ err_code; } ;
struct TYPE_6__ {int adv_dvc_var; TYPE_3__ asc_dvc_var; } ;
struct asc_board {int last_reset; TYPE_2__ dvc_var; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {struct Scsi_Host* host; } ;
typedef TYPE_3__ ASC_DVC_VAR ;
typedef int ADV_DVC_VAR ;


 int FUNC_0 (int,char*,...) ;

 scalar_t__ FUNC_1 (struct asc_board*) ;
 int FUNC_2 (struct Scsi_Host*,int ) ;

 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,struct scsi_cmnd*,char*,...) ;
 struct asc_board* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->device->host;
 struct asc_board *VAR_7 = FUNC_7(VAR_6);
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10 = VAR_2;

 FUNC_0(1, "0x%p\n", VAR_5);

 FUNC_2(VAR_6, VAR_4);

 FUNC_6(VAR_1, VAR_5, "SCSI bus reset started...\n");

 if (FUNC_1(VAR_7)) {
  ASC_DVC_VAR *VAR_11 = &VAR_7->dvc_var.asc_dvc_var;


  FUNC_0(1, "before AscInitAsc1000Driver()\n");
  VAR_9 = FUNC_5(VAR_11);


  if (VAR_11->err_code) {
   FUNC_6(VAR_1, VAR_5, "SCSI bus reset error: "
        "0x%x\n", VAR_11->err_code);
   VAR_10 = VAR_0;
  } else if (VAR_9) {
   FUNC_6(VAR_1, VAR_5, "SCSI bus reset warning: "
        "0x%x\n", VAR_9);
  } else {
   FUNC_6(VAR_1, VAR_5, "SCSI bus reset "
        "successful\n");
  }

  FUNC_0(1, "after AscInitAsc1000Driver()\n");
  FUNC_8(VAR_6->host_lock, VAR_8);
 } else {




  ADV_DVC_VAR *VAR_12 = &VAR_7->dvc_var.adv_dvc_var;




  FUNC_0(1, "before AdvResetChipAndSB()\n");
  switch (FUNC_4(VAR_12)) {
  case 128:
   FUNC_6(VAR_1, VAR_5, "SCSI bus reset "
        "successful\n");
   break;
  case 129:
  default:
   FUNC_6(VAR_1, VAR_5, "SCSI bus reset error\n");
   VAR_10 = VAR_0;
   break;
  }
  FUNC_8(VAR_6->host_lock, VAR_8);
  FUNC_3(VAR_12);
 }


 VAR_7->last_reset = VAR_3;
 FUNC_9(VAR_6->host_lock, VAR_8);

 FUNC_0(1, "ret %d\n", VAR_10);

 return VAR_10;
}
