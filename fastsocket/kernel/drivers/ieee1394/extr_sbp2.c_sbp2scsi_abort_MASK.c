
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct sbp2_lu {int cmd_orb_lock; } ;
struct sbp2_command_info {TYPE_3__* Current_SCpnt; int (* Current_done ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int result; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct sbp2_lu*,int) ;
 int FUNC_2 (struct sbp2_lu*,int ) ;
 struct sbp2_command_info* FUNC_3 (struct sbp2_lu*,struct scsi_cmnd*) ;
 int FUNC_4 (struct sbp2_lu*,struct sbp2_command_info*) ;
 scalar_t__ FUNC_5 (struct sbp2_lu*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_3)
{
 struct sbp2_lu *VAR_4 = (struct sbp2_lu *)VAR_3->device->host->hostdata[0];
 struct sbp2_command_info *VAR_5;
 unsigned long VAR_6;

 FUNC_0("aborting sbp2 command");
 FUNC_6(VAR_3);

 if (FUNC_5(VAR_4)) {
  FUNC_1(VAR_4, 1);


  FUNC_7(&VAR_4->cmd_orb_lock, VAR_6);
  VAR_5 = FUNC_3(VAR_4, VAR_3);
  if (VAR_5) {
   FUNC_4(VAR_4, VAR_5);
   if (VAR_5->Current_SCpnt) {
    VAR_5->Current_SCpnt->result = VAR_0 << 16;
    VAR_5->Current_done(VAR_5->Current_SCpnt);
   }
  }
  FUNC_8(&VAR_4->cmd_orb_lock, VAR_6);

  FUNC_2(VAR_4, VAR_1);
 }

 return VAR_2;
}
