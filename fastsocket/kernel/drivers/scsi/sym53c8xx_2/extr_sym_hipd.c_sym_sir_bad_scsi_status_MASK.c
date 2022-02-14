
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
struct sym_hcb {int squeue_ba; scalar_t__ last_cp; } ;
struct TYPE_13__ {void* start; } ;
struct TYPE_14__ {TYPE_5__ go; void* lastp; void* savep; } ;
struct TYPE_12__ {void* size; void* addr; } ;
struct TYPE_10__ {void* size; void* addr; } ;
struct TYPE_9__ {void* size; void* addr; } ;
struct TYPE_15__ {TYPE_6__ head; TYPE_4__ sense; TYPE_2__ cmd; TYPE_1__ smsg; } ;
struct sym_ccb {int ssss_status; int host_flags; int lun; int sv_scsi_status; int* sensecmd; int data_len; TYPE_7__ phys; int extra_bytes; int xerr_status; int nego_status; int host_status; int host_xflags; void* goalp; void* startp; int sns_bbuf; TYPE_8__* cmd; int * scsi_smsg2; int sv_resid; int sv_xerr_status; int target; } ;
struct TYPE_16__ {TYPE_3__* device; } ;
struct TYPE_11__ {int scsi_level; } ;


 void* FUNC_0 (struct sym_ccb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int FUNC_3 (struct sym_hcb*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct sym_hcb*,int ) ;
 int FUNC_5 (struct sym_hcb*,int ) ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;


 void* FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct sym_hcb*,struct sym_ccb*) ;
 int FUNC_9 (struct sym_hcb*,struct sym_ccb*) ;
 int FUNC_10 (struct sym_hcb*,int,int ,int,int) ;
 int FUNC_11 (struct sym_hcb*,int ) ;
 int FUNC_12 (struct sym_hcb*,struct sym_ccb*,int *) ;
 int FUNC_13 (TYPE_8__*,char*,char*) ;
 int FUNC_14 (struct sym_hcb*,struct sym_ccb*) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_15(struct sym_hcb *VAR_16, int VAR_17, struct sym_ccb *VAR_18)
{
 u32 VAR_19;
 u_char VAR_20 = VAR_18->ssss_status;
 u_char VAR_21 = VAR_18->host_flags;
 int VAR_22;
 int VAR_23;




 VAR_23 = (FUNC_2(VAR_16, VAR_8) - VAR_16->squeue_ba) / 4;
 switch(VAR_20) {
 case 131:
 case 129:
  if (VAR_15 >= 2) {
   FUNC_13(VAR_18->cmd, "%s\n",
           VAR_20 == 131 ? "BUSY" : "QUEUE FULL\n");
  }
 default:
  FUNC_8 (VAR_16, VAR_18);
  break;
 case 128:
 case 130:



  if (VAR_21 & VAR_1) {
   FUNC_8 (VAR_16, VAR_18);
   break;
  }





  FUNC_10(VAR_16, VAR_23, VAR_18->target, VAR_18->lun, -1);
  FUNC_3(VAR_16, FUNC_4(VAR_16, VAR_14));





  VAR_18->sv_scsi_status = VAR_18->ssss_status;
  VAR_18->sv_xerr_status = VAR_18->xerr_status;
  VAR_18->sv_resid = FUNC_9(VAR_16, VAR_18);






  VAR_18->scsi_smsg2[0] = FUNC_1(0, VAR_18->lun);
  VAR_22 = 1;
  VAR_18->nego_status = 0;
  VAR_22 += FUNC_12(VAR_16, VAR_18, &VAR_18->scsi_smsg2[VAR_22]);



  VAR_18->phys.smsg.addr = FUNC_0(VAR_18, VAR_9);
  VAR_18->phys.smsg.size = FUNC_6(VAR_22);




  VAR_18->phys.cmd.addr = FUNC_0(VAR_18, VAR_12);
  VAR_18->phys.cmd.size = FUNC_6(6);




  VAR_18->sensecmd[0] = VAR_4;
  VAR_18->sensecmd[1] = 0;
  if (VAR_18->cmd->device->scsi_level <= VAR_5 && VAR_18->lun <= 7)
   VAR_18->sensecmd[1] = VAR_18->lun << 5;
  VAR_18->sensecmd[4] = VAR_6;
  VAR_18->data_len = VAR_6;




  FUNC_7(VAR_18->sns_bbuf, 0, VAR_6);
  VAR_18->phys.sense.addr = FUNC_0(VAR_18, VAR_13);
  VAR_18->phys.sense.size = FUNC_6(VAR_6);




  VAR_19 = FUNC_5(VAR_16, VAR_10);

  VAR_18->phys.head.savep = FUNC_6(VAR_19);
  VAR_18->phys.head.lastp = FUNC_6(VAR_19);
  VAR_18->startp = FUNC_6(VAR_19);
  VAR_18->goalp = FUNC_6(VAR_19 + 16);

  VAR_18->host_xflags = 0;
  VAR_18->host_status = VAR_18->nego_status ? VAR_3 : VAR_2;
  VAR_18->ssss_status = VAR_7;
  VAR_18->host_flags = (VAR_1|VAR_0);
  VAR_18->xerr_status = 0;
  VAR_18->extra_bytes = 0;

  VAR_18->phys.head.go.start = FUNC_6(FUNC_4(VAR_16, VAR_11));




  FUNC_14(VAR_16, VAR_18);




  FUNC_11(VAR_16, 0);
  break;
 }
}
