
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int id; int lun; int hostdata; } ;
struct scsi_cmnd {unsigned int result; int (* scsi_done ) (struct scsi_cmnd*) ;int * sense_buffer; struct scsi_device* device; } ;
struct esp_cmd_entry {int flags; int list; int * sense_ptr; int sense_dma; int * eh_done; } ;
struct esp {TYPE_2__* host; TYPE_1__* ops; int * active_cmd; } ;
struct TYPE_4__ {int unique_id; } ;
struct TYPE_3__ {int (* unmap_single ) (struct esp*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (struct esp_cmd_entry*,int ) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_4 (struct esp*,struct scsi_cmnd*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct esp*,int ,int ,int ) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_9(struct esp *VAR_9, struct esp_cmd_entry *VAR_10,
       struct scsi_cmnd *VAR_11, unsigned int VAR_12)
{
 struct scsi_device *VAR_13 = VAR_11->device;
 int VAR_14 = VAR_13->id;
 int VAR_15 = VAR_13->lun;

 VAR_9->active_cmd = ((void*)0);
 FUNC_4(VAR_9, VAR_11);
 FUNC_1(VAR_10, VAR_13->hostdata);
 VAR_11->result = VAR_12;

 if (VAR_10->eh_done) {
  FUNC_0(VAR_10->eh_done);
  VAR_10->eh_done = ((void*)0);
 }

 if (VAR_10->flags & VAR_4) {
  VAR_9->ops->unmap_single(VAR_9, VAR_10->sense_dma,
           VAR_7, VAR_2);
  VAR_10->sense_ptr = ((void*)0);





  VAR_11->result = ((VAR_3 << 24) |
          (VAR_1 << 16) |
          (VAR_0 << 8) |
          (VAR_6 << 0));

  VAR_10->flags &= ~VAR_4;
  if (VAR_8 & VAR_5) {
   int VAR_16;

   FUNC_6("esp%d: tgt[%d] lun[%d] AUTO SENSE[ ",
          VAR_9->host->unique_id, VAR_14, VAR_15);
   for (VAR_16 = 0; VAR_16 < 18; VAR_16++)
    FUNC_6("%02x ", VAR_11->sense_buffer[VAR_16]);
   FUNC_6("]\n");
  }
 }

 VAR_11->scsi_done(VAR_11);

 FUNC_5(&VAR_10->list);
 FUNC_3(VAR_9, VAR_10);

 FUNC_2(VAR_9);
}
