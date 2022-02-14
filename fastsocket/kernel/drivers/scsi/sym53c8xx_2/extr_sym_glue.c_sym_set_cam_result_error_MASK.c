
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct sym_hcb {int dummy; } ;
struct sym_ccb {int ssss_status; int host_flags; int sv_scsi_status; int sv_resid; int xerr_status; int host_status; int lun; int target; int sns_bbuf; int sv_xerr_status; struct scsi_cmnd* cmd; } ;
struct scsi_cmnd {int result; TYPE_1__* device; scalar_t__ sense_data; int sense_buffer; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct scsi_cmnd*,int) ;
 int FUNC_4 (struct sym_hcb*,int ,int ,int ,int) ;
 int FUNC_5 (struct scsi_cmnd*,char*,int ,int,int ) ;
 int FUNC_6 (struct scsi_cmnd*,int ) ;
 int FUNC_7 (struct sym_hcb*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (int,int ) ;

void FUNC_9(struct sym_hcb *VAR_13, struct sym_ccb *VAR_14, int VAR_15)
{
 struct scsi_cmnd *VAR_16 = VAR_14->cmd;
 u_int VAR_17, VAR_18, VAR_19;

 VAR_19 = 0;
 VAR_17 = VAR_3;
 VAR_18 = VAR_14->ssss_status;

 if (VAR_14->host_flags & VAR_5) {
  VAR_18 = VAR_14->sv_scsi_status;
  VAR_15 = VAR_14->sv_resid;
  if (VAR_12 && VAR_14->sv_xerr_status)
   FUNC_6(VAR_16, VAR_14->sv_xerr_status);
  if (VAR_14->host_status == VAR_6 &&
      VAR_14->ssss_status == VAR_11 &&
      VAR_14->xerr_status == 0) {
   VAR_17 = FUNC_8(VAR_3,
        VAR_14->sv_xerr_status);
   VAR_19 = VAR_4;



   FUNC_1(VAR_16->sense_buffer, 0, VAR_9);
   FUNC_0(VAR_16->sense_buffer, VAR_14->sns_bbuf,
          FUNC_2(VAR_9, VAR_10));
  } else {






   FUNC_7(VAR_13, VAR_16->device->id);
   VAR_17 = VAR_1;
  }
 } else if (VAR_14->host_status == VAR_6)
  VAR_17 = VAR_3;
 else if (VAR_14->host_status == VAR_7)
  VAR_17 = VAR_2;
 else if (VAR_14->host_status == VAR_8)
  VAR_17 = VAR_1;
 else {
  if (VAR_12) {
   FUNC_5(VAR_16, "COMMAND FAILED (%x %x %x).\n",
    VAR_14->host_status, VAR_14->ssss_status,
    VAR_14->xerr_status);
  }



  VAR_17 = FUNC_8(VAR_1, VAR_14->xerr_status);
 }
 FUNC_3(VAR_16, VAR_15);
 VAR_16->result = (VAR_19 << 24) + (VAR_17 << 16) + VAR_18;
}
