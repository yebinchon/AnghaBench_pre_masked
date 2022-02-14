
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {unsigned char* host_scribble; void (* scsi_done ) (struct scsi_cmnd*) ;int serial_number; int request; TYPE_1__* device; int cmd_len; int cmnd; } ;
struct mscp {unsigned int cpp_index; int reqsen; int dispri; int hbaci; int one; int cp_dma_addr; int cdb; struct scsi_cmnd* SCpnt; int lun; int target; int channel; int sp_dma_addr; } ;
struct hostdata {int last_cp_used; scalar_t__* cp_stat; int sp_dma_addr; struct mscp* cp; int board_name; } ;
struct Scsi_Host {unsigned int can_queue; int io_port; scalar_t__ hostdata; } ;
struct TYPE_2__ {scalar_t__ type; int queue_depth; int lun; int id; int channel; struct Scsi_Host* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ,struct hostdata*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (unsigned int,struct hostdata*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct mscp*,int ,scalar_t__) ;
 int FUNC_8 (char*,int ,int ,struct scsi_cmnd*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,struct scsi_cmnd*,char*,unsigned int,...) ;
 int FUNC_11 (unsigned int,struct hostdata*) ;
 int FUNC_12 (unsigned int,struct hostdata*) ;

__attribute__((used)) static int FUNC_13(struct scsi_cmnd *VAR_9,
          void (*VAR_10) (struct scsi_cmnd *))
{
 struct Scsi_Host *VAR_11 = VAR_9->device->host;
 struct hostdata *VAR_12 = (struct hostdata *)VAR_11->hostdata;
 unsigned int VAR_13, VAR_14;
 struct mscp *VAR_15;

 if (VAR_9->host_scribble)
  FUNC_8("%s: qcomm, pid %ld, SCpnt %p already active.\n",
        VAR_12->board_name, VAR_9->serial_number, VAR_9);



 VAR_13 = VAR_12->last_cp_used + 1;

 for (VAR_14 = 0; VAR_14 < VAR_11->can_queue; VAR_14++, VAR_13++) {
  if (VAR_13 >= VAR_11->can_queue)
   VAR_13 = 0;
  if (VAR_12->cp_stat[VAR_13] == VAR_1) {
   VAR_12->last_cp_used = VAR_13;
   break;
  }
 }

 if (VAR_14 == VAR_11->can_queue) {
  FUNC_9("%s: qcomm, no free mailbox.\n", VAR_12->board_name);
  return 1;
 }


 VAR_15 = &VAR_12->cp[VAR_13];

 FUNC_7(VAR_15, 0, sizeof(struct mscp) - VAR_0);


 VAR_15->sp_dma_addr = FUNC_0(VAR_12->sp_dma_addr);

 VAR_9->scsi_done = VAR_10;
 VAR_15->cpp_index = VAR_13;
 VAR_9->host_scribble = (unsigned char *)&VAR_15->cpp_index;

 if (VAR_7)
  FUNC_10(VAR_3, VAR_9,
   "qcomm, mbox %d, pid %ld.\n", VAR_13, VAR_9->serial_number);

 VAR_15->reqsen = 1;
 VAR_15->dispri = 1;




 VAR_15->one = 1;
 VAR_15->channel = VAR_9->device->channel;
 VAR_15->target = VAR_9->device->id;
 VAR_15->lun = VAR_9->device->lun;
 VAR_15->SCpnt = VAR_9;
 FUNC_6(VAR_15->cdb, VAR_9->cmnd, VAR_9->cmd_len);


 FUNC_11(VAR_13, VAR_12);


 FUNC_5(VAR_13, VAR_12);

 if (VAR_8 && VAR_9->device->queue_depth > 2
     && FUNC_1(VAR_9->device->type)) {
  VAR_12->cp_stat[VAR_13] = VAR_4;
  FUNC_4(VAR_9->device, FUNC_2(VAR_9->request), VAR_12, 0);
  return 0;
 }


 if (FUNC_3(VAR_11->io_port, VAR_15->cp_dma_addr, VAR_5)) {
  FUNC_12(VAR_13, VAR_12);
  VAR_9->host_scribble = ((void*)0);
  FUNC_10(VAR_3, VAR_9,
   "qcomm, pid %ld, adapter busy.\n", VAR_9->serial_number);
  return 1;
 }

 VAR_12->cp_stat[VAR_13] = VAR_2;
 return 0;
}
