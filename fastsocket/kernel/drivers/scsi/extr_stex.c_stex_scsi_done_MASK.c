
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_ccb {int srb_status; int scsi_status; struct scsi_cmnd* cmd; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct st_ccb *VAR_8)
{
 struct scsi_cmnd *VAR_9 = VAR_8->cmd;
 int VAR_10;

 if (VAR_8->srb_status == VAR_7 || VAR_8->srb_status == 0) {
  VAR_10 = VAR_8->scsi_status;
  switch (VAR_8->scsi_status) {
  case 132:
   VAR_10 |= VAR_4 << 16 | VAR_0 << 8;
   break;
  case 133:
   VAR_10 |= VAR_5 << 24;
   break;
  case 134:
   VAR_10 |= VAR_1 << 16 | VAR_0 << 8;
   break;
  default:
   VAR_10 |= VAR_2 << 16 | VAR_0 << 8;
   break;
  }
 }
 else if (VAR_8->srb_status & VAR_6)
  VAR_10 = VAR_5 << 24 | 133;
 else switch (VAR_8->srb_status) {
  case 128:
   VAR_10 = VAR_3 << 16 | VAR_0 << 8;
   break;
  case 131:
   VAR_10 = VAR_1 << 16 | VAR_0 << 8;
   break;
  case 129:
  case 130:
  default:
   VAR_10 = VAR_2 << 16 | VAR_0 << 8;
   break;
 }

 VAR_9->result = VAR_10;
 VAR_9->scsi_done(VAR_9);
}
