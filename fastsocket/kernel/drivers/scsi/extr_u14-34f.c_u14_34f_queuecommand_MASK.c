
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {unsigned char* host_scribble; void (* scsi_done ) (struct scsi_cmnd*) ;int serial_number; int request; TYPE_3__* device; int cmd_len; int cmnd; } ;
struct mscp {unsigned int cpp_index; int cp_dma_addr; int cdb; int cdb_len; struct scsi_cmnd* SCpnt; int lun; int target; int channel; int opcode; } ;
struct hostdata {unsigned int board_number; } ;
struct TYPE_8__ {int last_cp_used; scalar_t__* cp_stat; struct mscp* cp; } ;
struct TYPE_7__ {int queue_depth; int type; int lun; int id; int channel; TYPE_1__* host; } ;
struct TYPE_6__ {unsigned int can_queue; scalar_t__ io_port; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (unsigned int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (TYPE_3__*,int ,unsigned int,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct mscp*,int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (char*,int ,int ,struct scsi_cmnd*) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (int ,struct scsi_cmnd*,char*,int ) ;
 int FUNC_14 (unsigned int,unsigned int) ;
 TYPE_2__** VAR_13 ;
 int FUNC_15 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_17(struct scsi_cmnd *VAR_14, void (*VAR_15)(struct scsi_cmnd *)) {
   unsigned int VAR_16, VAR_17, VAR_18;
   struct mscp *VAR_19;


   VAR_17 = ((struct hostdata *) VAR_14->device->host->hostdata)->board_number;

   if (VAR_14->host_scribble)
      FUNC_11("%s: qcomm, pid %ld, SCpnt %p already active.\n",
            FUNC_0(VAR_17), VAR_14->serial_number, VAR_14);



   VAR_16 = FUNC_2(VAR_17)->last_cp_used + 1;

   for (VAR_18 = 0; VAR_18 < VAR_13[VAR_17]->can_queue; VAR_18++, VAR_16++) {

      if (VAR_16 >= VAR_13[VAR_17]->can_queue) VAR_16 = 0;

      if (FUNC_2(VAR_17)->cp_stat[VAR_16] == VAR_3) {
         FUNC_2(VAR_17)->last_cp_used = VAR_16;
         break;
         }
      }

   if (VAR_18 == VAR_13[VAR_17]->can_queue) {
      FUNC_12("%s: qcomm, no free mailbox.\n", FUNC_0(VAR_17));
      return 1;
      }


   VAR_19 = &FUNC_2(VAR_17)->cp[VAR_16];

   FUNC_8(VAR_19, 0, sizeof(struct mscp) - VAR_1);
   VAR_14->scsi_done = VAR_15;
   VAR_19->cpp_index = VAR_16;
   VAR_14->host_scribble = (unsigned char *) &VAR_19->cpp_index;

   if (VAR_11) FUNC_12("%s: qcomm, mbox %d, target %d.%d:%d, pid %ld.\n",
                        FUNC_0(VAR_17), VAR_16, VAR_14->device->channel, VAR_14->device->id,
                        VAR_14->device->lun, VAR_14->serial_number);

   VAR_19->opcode = VAR_7;
   VAR_19->channel = VAR_14->device->channel;
   VAR_19->target = VAR_14->device->id;
   VAR_19->lun = VAR_14->device->lun;
   VAR_19->SCpnt = VAR_14;
   VAR_19->cdb_len = VAR_14->cmd_len;
   FUNC_7(VAR_19->cdb, VAR_14->cmnd, VAR_14->cmd_len);


   FUNC_14(VAR_16, VAR_17);


   FUNC_6(VAR_16, VAR_17);

   if (VAR_12 && VAR_14->device->queue_depth > 2
                                     && FUNC_3(VAR_14->device->type)) {
      FUNC_2(VAR_17)->cp_stat[VAR_16] = VAR_8;
      FUNC_5(VAR_14->device, FUNC_4(VAR_14->request), VAR_17, VAR_2);
      return 0;
      }

   if (FUNC_16(VAR_13[VAR_17]->io_port, VAR_6)) {
      FUNC_15(VAR_16, VAR_17);
      VAR_14->host_scribble = ((void*)0);
      FUNC_13(VAR_5, VAR_14,
        "qcomm, pid %ld, adapter busy.\n", VAR_14->serial_number);
      return 1;
      }


   FUNC_10(FUNC_1(VAR_19->cp_dma_addr), VAR_13[VAR_17]->io_port + VAR_10);


   FUNC_9(VAR_0, VAR_13[VAR_17]->io_port + VAR_9);

   FUNC_2(VAR_17)->cp_stat[VAR_16] = VAR_4;
   return 0;
}
