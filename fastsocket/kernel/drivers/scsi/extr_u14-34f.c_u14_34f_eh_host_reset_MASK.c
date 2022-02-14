
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {int result; int serial_number; int (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; TYPE_2__* device; } ;
struct hostdata {unsigned int board_number; } ;
struct TYPE_10__ {int in_reset; scalar_t__* cp_stat; TYPE_3__* cp; scalar_t__** target_to; void*** target_redo; scalar_t__ retries; } ;
struct TYPE_9__ {unsigned int max_channel; unsigned int max_id; unsigned int can_queue; int host_lock; scalar_t__ io_port; } ;
struct TYPE_8__ {struct scsi_cmnd* SCpnt; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* FUNC_1 (unsigned int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,int ,unsigned int) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,int ) ;
 TYPE_4__** VAR_17 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (long) ;
 int FUNC_10 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_18) {
   unsigned int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;
   unsigned long VAR_24;
   int VAR_25 = VAR_4;
   struct scsi_cmnd *VAR_26;

   VAR_20 = ((struct hostdata *) VAR_18->device->host->hostdata)->board_number;
   FUNC_5(VAR_8, VAR_18, "reset, enter, pid %ld.\n", VAR_18->serial_number);

   FUNC_6(VAR_17[VAR_20]->host_lock);

   if (VAR_18->host_scribble == ((void*)0))
      FUNC_4("%s: reset, pid %ld inactive.\n", FUNC_0(VAR_20), VAR_18->serial_number);

   if (FUNC_1(VAR_20)->in_reset) {
      FUNC_4("%s: reset, exit, already in reset.\n", FUNC_0(VAR_20));
      FUNC_7(VAR_17[VAR_20]->host_lock);
      return VAR_3;
      }

   if (FUNC_11(VAR_17[VAR_20]->io_port, VAR_10)) {
      FUNC_4("%s: reset, exit, timeout error.\n", FUNC_0(VAR_20));
      FUNC_7(VAR_17[VAR_20]->host_lock);
      return VAR_3;
      }

   FUNC_1(VAR_20)->retries = 0;

   for (VAR_22 = 0; VAR_22 <= VAR_17[VAR_20]->max_channel; VAR_22++)
      for (VAR_21 = 0; VAR_21 < VAR_17[VAR_20]->max_id; VAR_21++) {
         FUNC_1(VAR_20)->target_redo[VAR_21][VAR_22] = VAR_14;
         FUNC_1(VAR_20)->target_to[VAR_21][VAR_22] = 0;
         }

   for (VAR_19 = 0; VAR_19 < VAR_17[VAR_20]->can_queue; VAR_19++) {

      if (FUNC_1(VAR_20)->cp_stat[VAR_19] == VAR_5) continue;

      if (FUNC_1(VAR_20)->cp_stat[VAR_19] == VAR_9) {
         FUNC_1(VAR_20)->cp_stat[VAR_19] = VAR_5;
         FUNC_4("%s: reset, locked mbox %d forced free.\n", FUNC_0(VAR_20), VAR_19);
         continue;
         }

      if (!(VAR_26 = FUNC_1(VAR_20)->cp[VAR_19].SCpnt))
         FUNC_3("%s: reset, mbox %d, SCpnt == NULL.\n", FUNC_0(VAR_20), VAR_19);

      if (FUNC_1(VAR_20)->cp_stat[VAR_19] == VAR_11 || FUNC_1(VAR_20)->cp_stat[VAR_19] == VAR_0) {
         FUNC_1(VAR_20)->cp_stat[VAR_19] = VAR_0;
         FUNC_4("%s: reset, mbox %d aborting, pid %ld.\n",
                FUNC_0(VAR_20), VAR_19, VAR_26->serial_number);
         }

      else {
         FUNC_1(VAR_20)->cp_stat[VAR_19] = VAR_7;
         FUNC_4("%s: reset, mbox %d in reset, pid %ld.\n",
                FUNC_0(VAR_20), VAR_19, VAR_26->serial_number);
         }

      if (VAR_26->host_scribble == ((void*)0))
         FUNC_3("%s: reset, mbox %d, garbled SCpnt.\n", FUNC_0(VAR_20), VAR_19);

      if (*(unsigned int *)VAR_26->host_scribble != VAR_19)
         FUNC_3("%s: reset, mbox %d, index mismatch.\n", FUNC_0(VAR_20), VAR_19);

      if (VAR_26->scsi_done == ((void*)0))
         FUNC_3("%s: reset, mbox %d, SCpnt->scsi_done == NULL.\n", FUNC_0(VAR_20), VAR_19);

      if (VAR_26 == VAR_18) VAR_25 = VAR_14;
      }

   if (FUNC_11(VAR_17[VAR_20]->io_port, VAR_10)) {
      FUNC_4("%s: reset, cannot reset, timeout error.\n", FUNC_0(VAR_20));
      FUNC_7(VAR_17[VAR_20]->host_lock);
      return VAR_3;
      }

   FUNC_2(VAR_1, VAR_17[VAR_20]->io_port + VAR_12);
   FUNC_4("%s: reset, board reset done, enabling interrupts.\n", FUNC_0(VAR_20));





   FUNC_1(VAR_20)->in_reset = VAR_14;

   FUNC_7(VAR_17[VAR_20]->host_lock);
   VAR_24 = VAR_16;
   while ((VAR_16 - VAR_24) < (10 * VAR_6) && VAR_23++ < 200000) FUNC_9(100L);
   FUNC_6(VAR_17[VAR_20]->host_lock);

   FUNC_4("%s: reset, interrupts disabled, loops %d.\n", FUNC_0(VAR_20), VAR_23);

   for (VAR_19 = 0; VAR_19 < VAR_17[VAR_20]->can_queue; VAR_19++) {

      if (FUNC_1(VAR_20)->cp_stat[VAR_19] == VAR_7) {
         VAR_26 = FUNC_1(VAR_20)->cp[VAR_19].SCpnt;
         FUNC_10(VAR_19, VAR_20);
         VAR_26->result = VAR_2 << 16;
         VAR_26->host_scribble = ((void*)0);


         FUNC_1(VAR_20)->cp_stat[VAR_19] = VAR_9;

         FUNC_4("%s, reset, mbox %d locked, DID_RESET, pid %ld done.\n",
                FUNC_0(VAR_20), VAR_19, VAR_26->serial_number);
         }

      else if (FUNC_1(VAR_20)->cp_stat[VAR_19] == VAR_0) {
         VAR_26 = FUNC_1(VAR_20)->cp[VAR_19].SCpnt;
         FUNC_10(VAR_19, VAR_20);
         VAR_26->result = VAR_2 << 16;
         VAR_26->host_scribble = ((void*)0);


         FUNC_1(VAR_20)->cp_stat[VAR_19] = VAR_5;

         FUNC_4("%s, reset, mbox %d aborting, DID_RESET, pid %ld done.\n",
                FUNC_0(VAR_20), VAR_19, VAR_26->serial_number);
         }

      else


         continue;

      VAR_26->scsi_done(VAR_26);
      }

   FUNC_1(VAR_20)->in_reset = VAR_4;
   VAR_15 = VAR_4;

   if (VAR_25) FUNC_4("%s: reset, exit, pid %ld done.\n", FUNC_0(VAR_20), VAR_18->serial_number);
   else FUNC_4("%s: reset, exit.\n", FUNC_0(VAR_20));

   FUNC_7(VAR_17[VAR_20]->host_lock);
   return VAR_13;
}
