
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcm_loop_cmd {int work; struct scsi_cmnd* sc; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int * cmnd; TYPE_2__* device; } ;
struct TYPE_4__ {int lun; int channel; int id; TYPE_1__* host; } ;
struct TYPE_3__ {int host_no; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct tcm_loop_cmd* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,int ) ;
 void FUNC_8 (struct scsi_cmnd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_5, void (* VAR_6)(struct scsi_cmnd *))
{
 struct tcm_loop_cmd *VAR_7;

 FUNC_0(!VAR_6);
 VAR_5->scsi_done = VAR_6;

 FUNC_3("tcm_loop_queuecommand() %d:%d:%d:%d got CDB: 0x%02x"
  " scsi_buf_len: %u\n", VAR_5->device->host->host_no,
  VAR_5->device->id, VAR_5->device->channel, VAR_5->device->lun,
  VAR_5->cmnd[0], FUNC_6(VAR_5));

 VAR_7 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_7) {
  FUNC_4("Unable to allocate struct tcm_loop_cmd\n");
  FUNC_7(VAR_5, VAR_0);
  VAR_5->scsi_done(VAR_5);
  return 0;
 }

 VAR_7->sc = VAR_5;
 FUNC_1(&VAR_7->work, VAR_3);
 FUNC_5(VAR_4, &VAR_7->work);
 return 0;
}
