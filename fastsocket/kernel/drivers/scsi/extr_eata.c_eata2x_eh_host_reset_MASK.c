
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int serial_number; int (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; TYPE_1__* device; } ;
struct hostdata {int in_reset; int** target_redo; scalar_t__* cp_stat; int board_name; TYPE_2__* cp; scalar_t__** target_to; scalar_t__ retries; } ;
struct Scsi_Host {unsigned int max_channel; unsigned int max_id; unsigned int can_queue; int host_lock; int io_port; scalar_t__ hostdata; } ;
struct TYPE_4__ {struct scsi_cmnd* SCpnt; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (long) ;
 int FUNC_8 (unsigned int,struct hostdata*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 int VAR_20 = 0;
 struct scsi_cmnd *VAR_21;
 struct Scsi_Host *VAR_22 = VAR_14->device->host;
 struct hostdata *VAR_23 = (struct hostdata *)VAR_22->hostdata;

 FUNC_3(VAR_6, VAR_14,
  "reset, enter, pid %ld.\n", VAR_14->serial_number);

 FUNC_4(VAR_22->host_lock);

 if (VAR_14->host_scribble == ((void*)0))
  FUNC_2("%s: reset, pid %ld inactive.\n", VAR_23->board_name, VAR_14->serial_number);

 if (VAR_23->in_reset) {
  FUNC_2("%s: reset, exit, already in reset.\n", VAR_23->board_name);
  FUNC_5(VAR_22->host_lock);
  return VAR_2;
 }

 if (FUNC_9(VAR_22->io_port, VAR_8)) {
  FUNC_2("%s: reset, exit, timeout error.\n", VAR_23->board_name);
  FUNC_5(VAR_22->host_lock);
  return VAR_2;
 }

 VAR_23->retries = 0;

 for (VAR_18 = 0; VAR_18 <= VAR_22->max_channel; VAR_18++)
  for (VAR_17 = 0; VAR_17 < VAR_22->max_id; VAR_17++) {
   VAR_23->target_redo[VAR_17][VAR_18] = 1;
   VAR_23->target_to[VAR_17][VAR_18] = 0;
  }

 for (VAR_15 = 0; VAR_15 < VAR_22->can_queue; VAR_15++) {

  if (VAR_23->cp_stat[VAR_15] == VAR_3)
   continue;

  if (VAR_23->cp_stat[VAR_15] == VAR_7) {
   VAR_23->cp_stat[VAR_15] = VAR_3;
   FUNC_2("%s: reset, locked mbox %d forced free.\n",
          VAR_23->board_name, VAR_15);
   continue;
  }

  if (!(VAR_21 = VAR_23->cp[VAR_15].SCpnt))
   FUNC_1("%s: reset, mbox %d, SCpnt == NULL.\n", VAR_23->board_name, VAR_15);

  if (VAR_23->cp_stat[VAR_15] == VAR_9 || VAR_23->cp_stat[VAR_15] == VAR_0) {
   VAR_23->cp_stat[VAR_15] = VAR_0;
   FUNC_2("%s: reset, mbox %d aborting, pid %ld.\n",
          VAR_23->board_name, VAR_15, VAR_21->serial_number);
  }

  else {
   VAR_23->cp_stat[VAR_15] = VAR_5;
   FUNC_2("%s: reset, mbox %d in reset, pid %ld.\n",
          VAR_23->board_name, VAR_15, VAR_21->serial_number);
  }

  if (VAR_21->host_scribble == ((void*)0))
   FUNC_1("%s: reset, mbox %d, garbled SCpnt.\n", VAR_23->board_name, VAR_15);

  if (*(unsigned int *)VAR_21->host_scribble != VAR_15)
   FUNC_1("%s: reset, mbox %d, index mismatch.\n", VAR_23->board_name, VAR_15);

  if (VAR_21->scsi_done == ((void*)0))
   FUNC_1("%s: reset, mbox %d, SCpnt->scsi_done == NULL.\n",
         VAR_23->board_name, VAR_15);

  if (VAR_21 == VAR_14)
   VAR_20 = 1;
 }

 if (FUNC_0(VAR_22->io_port, 0, VAR_10)) {
  FUNC_2("%s: reset, cannot reset, timeout error.\n", VAR_23->board_name);
  FUNC_5(VAR_22->host_lock);
  return VAR_2;
 }

 FUNC_2("%s: reset, board reset done, enabling interrupts.\n", VAR_23->board_name);





 VAR_23->in_reset = 1;

 FUNC_5(VAR_22->host_lock);


 VAR_16 = VAR_13;
 while ((VAR_13 - VAR_16) < (10 * VAR_4) && VAR_19++ < 200000)
  FUNC_7(100L);

 FUNC_4(VAR_22->host_lock);

 FUNC_2("%s: reset, interrupts disabled, loops %d.\n", VAR_23->board_name, VAR_19);

 for (VAR_15 = 0; VAR_15 < VAR_22->can_queue; VAR_15++) {

  if (VAR_23->cp_stat[VAR_15] == VAR_5) {
   VAR_21 = VAR_23->cp[VAR_15].SCpnt;
   FUNC_8(VAR_15, VAR_23);
   VAR_21->result = VAR_1 << 16;
   VAR_21->host_scribble = ((void*)0);


   VAR_23->cp_stat[VAR_15] = VAR_7;

   FUNC_2
       ("%s, reset, mbox %d locked, DID_RESET, pid %ld done.\n",
        VAR_23->board_name, VAR_15, VAR_21->serial_number);
  }

  else if (VAR_23->cp_stat[VAR_15] == VAR_0) {
   VAR_21 = VAR_23->cp[VAR_15].SCpnt;
   FUNC_8(VAR_15, VAR_23);
   VAR_21->result = VAR_1 << 16;
   VAR_21->host_scribble = ((void*)0);


   VAR_23->cp_stat[VAR_15] = VAR_3;

   FUNC_2
       ("%s, reset, mbox %d aborting, DID_RESET, pid %ld done.\n",
        VAR_23->board_name, VAR_15, VAR_21->serial_number);
  }

  else

   continue;

  VAR_21->scsi_done(VAR_21);
 }

 VAR_23->in_reset = 0;
 VAR_12 = 0;

 if (VAR_20)
  FUNC_2("%s: reset, exit, pid %ld done.\n", VAR_23->board_name, VAR_14->serial_number);
 else
  FUNC_2("%s: reset, exit.\n", VAR_23->board_name);

 FUNC_5(VAR_22->host_lock);
 return VAR_11;
}
