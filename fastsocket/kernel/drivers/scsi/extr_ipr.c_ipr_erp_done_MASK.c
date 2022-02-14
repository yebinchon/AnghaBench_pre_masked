
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int sense_buffer; TYPE_1__* device; } ;
struct ipr_resource_entry {int needs_sync_complete; scalar_t__ in_erp; } ;
struct TYPE_7__ {int ioasc; } ;
struct TYPE_8__ {TYPE_2__ hdr; } ;
struct TYPE_9__ {TYPE_3__ ioasa; } ;
struct ipr_cmnd {TYPE_5__* hrrq; int queue; struct scsi_cmnd* scsi_cmd; int sense_buffer; TYPE_4__ s; } ;
struct TYPE_10__ {int hrrq_free_q; } ;
struct TYPE_6__ {struct ipr_resource_entry* hostdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipr_resource_entry*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_8(struct ipr_cmnd *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->scsi_cmd;
 struct ipr_resource_entry *VAR_5 = VAR_4->device->hostdata;
 u32 VAR_6 = FUNC_1(VAR_3->s.ioasa.hdr.ioasc);

 if (FUNC_0(VAR_6) > 0) {
  VAR_4->result |= (VAR_0 << 16);
  FUNC_5(VAR_1, VAR_4,
       "Request Sense failed with IOASC: 0x%08X\n", VAR_6);
 } else {
  FUNC_4(VAR_4->sense_buffer, VAR_3->sense_buffer,
         VAR_2);
 }

 if (VAR_5) {
  if (!FUNC_2(VAR_5))
   VAR_5->needs_sync_complete = 1;
  VAR_5->in_erp = 0;
 }
 FUNC_6(VAR_3->scsi_cmd);
 FUNC_3(&VAR_3->queue, &VAR_3->hrrq->hrrq_free_q);
 VAR_4->scsi_done(VAR_4);
}
