
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {size_t id; int hostdata; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct esp_target_data {int flags; } ;
struct esp_cmd_entry {int flags; int list; int * sense_ptr; int sense_dma; struct scsi_cmnd* cmd; } ;
struct esp {int seqreg; int ireg; scalar_t__ rev; int sreg; int prev_soff; struct esp_target_data* target; struct esp_cmd_entry* active_cmd; int queued_cmds; TYPE_1__* ops; scalar_t__ cmd_bytes_left; int * cmd_bytes_ptr; int flags; int select_state; } ;
struct TYPE_2__ {int (* unmap_single ) (struct esp*,int ,int ,int ) ;int (* dma_invalidate ) (struct esp*) ;scalar_t__ (* dma_error ) (struct esp*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct esp*,struct esp_cmd_entry*,struct scsi_cmnd*,int) ;
 int FUNC_1 (struct esp*,int ) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp_cmd_entry*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct esp*) ;
 int FUNC_6 (struct esp*,struct scsi_cmnd*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct esp*,int ) ;
 scalar_t__ FUNC_10 (struct esp*) ;
 int FUNC_11 (struct esp*) ;
 int FUNC_12 (struct esp*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct esp *VAR_24)
{
 struct esp_cmd_entry *VAR_25;
 struct scsi_cmnd *VAR_26;
 u8 VAR_27;

 VAR_27 = VAR_24->select_state;


 VAR_24->select_state = VAR_16;

 VAR_24->seqreg = FUNC_4(VAR_17) & VAR_19;
 VAR_25 = VAR_24->active_cmd;
 VAR_26 = VAR_25->cmd;

 if (VAR_24->ops->dma_error(VAR_24)) {



  FUNC_5(VAR_24);
  FUNC_0(VAR_24, VAR_25, VAR_26, (VAR_1 << 16));
  return 0;
 }

 VAR_24->ops->dma_invalidate(VAR_24);

 if (VAR_24->ireg == (VAR_15 | VAR_14)) {
  struct esp_target_data *VAR_28 = &VAR_24->target[VAR_26->device->id];





  if (!(VAR_25->flags & VAR_5)) {
   FUNC_6(VAR_24, VAR_26);
   FUNC_3(VAR_25, VAR_26->device->hostdata);
   VAR_28->flags &= ~(VAR_21 | VAR_22);
   VAR_24->flags &= ~VAR_11;
   VAR_24->cmd_bytes_ptr = ((void*)0);
   VAR_24->cmd_bytes_left = 0;
  } else {
   VAR_24->ops->unmap_single(VAR_24, VAR_25->sense_dma,
            VAR_23,
            VAR_2);
   VAR_25->sense_ptr = ((void*)0);
  }




  FUNC_7(&VAR_25->list, &VAR_24->queued_cmds);
  VAR_24->active_cmd = ((void*)0);




  return 0;
 }

 if (VAR_24->ireg == VAR_13) {
  struct scsi_device *VAR_29 = VAR_26->device;





  VAR_24->target[VAR_29->id].flags |= VAR_20;

  FUNC_9(VAR_24, VAR_4);
  FUNC_0(VAR_24, VAR_25, VAR_26, (VAR_0 << 16));
  return 1;
 }

 if (VAR_24->ireg == (VAR_14 | VAR_12)) {



  if (VAR_24->rev <= VAR_3) {
   int VAR_30 = FUNC_4(VAR_9) & VAR_10;

   FUNC_9(VAR_24, VAR_6);

   if (!VAR_30 &&
       (!VAR_24->prev_soff ||
        ((VAR_24->sreg & VAR_18) != VAR_7)))
    FUNC_2(VAR_24);
  }





  FUNC_1(VAR_24, VAR_8);
  return 0;
 }

 FUNC_8("ESP: Unexpected selection completion ireg[%x].\n",
        VAR_24->ireg);
 FUNC_5(VAR_24);
 return 0;
}
