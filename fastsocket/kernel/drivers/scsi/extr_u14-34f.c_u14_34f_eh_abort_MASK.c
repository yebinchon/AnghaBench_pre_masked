
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int serial_number; int * host_scribble; TYPE_2__* device; } ;
struct hostdata {unsigned int board_number; } ;
struct TYPE_10__ {scalar_t__* cp_stat; TYPE_3__* cp; } ;
struct TYPE_9__ {unsigned int can_queue; scalar_t__ io_port; } ;
struct TYPE_8__ {struct scsi_cmnd* SCpnt; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_1 (unsigned int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,unsigned int,...) ;
 TYPE_4__** VAR_13 ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_14) {
   unsigned int VAR_15, VAR_16;

   VAR_16 = ((struct hostdata *) VAR_14->device->host->hostdata)->board_number;

   if (VAR_14->host_scribble == ((void*)0)) {
      FUNC_5(VAR_7, VAR_14, "abort, pid %ld inactive.\n",
             VAR_14->serial_number);
      return VAR_12;
      }

   VAR_15 = *(unsigned int *)VAR_14->host_scribble;
   FUNC_5(VAR_7, VAR_14, "abort, mbox %d, pid %ld.\n",
        VAR_15, VAR_14->serial_number);

   if (VAR_15 >= VAR_13[VAR_16]->can_queue)
      FUNC_3("%s: abort, invalid SCarg->host_scribble.\n", FUNC_0(VAR_16));

   if (FUNC_8(VAR_13[VAR_16]->io_port, VAR_9)) {
      FUNC_4("%s: abort, timeout error.\n", FUNC_0(VAR_16));
      return VAR_2;
      }

   if (FUNC_1(VAR_16)->cp_stat[VAR_15] == VAR_3) {
      FUNC_4("%s: abort, mbox %d is free.\n", FUNC_0(VAR_16), VAR_15);
      return VAR_12;
      }

   if (FUNC_1(VAR_16)->cp_stat[VAR_15] == VAR_5) {
      FUNC_4("%s: abort, mbox %d is in use.\n", FUNC_0(VAR_16), VAR_15);

      if (VAR_14 != FUNC_1(VAR_16)->cp[VAR_15].SCpnt)
         FUNC_3("%s: abort, mbox %d, SCarg %p, cp SCpnt %p.\n",
               FUNC_0(VAR_16), VAR_15, VAR_14, FUNC_1(VAR_16)->cp[VAR_15].SCpnt);

      if (FUNC_2(VAR_13[VAR_16]->io_port + VAR_11) & VAR_6)
         FUNC_4("%s: abort, mbox %d, interrupt pending.\n", FUNC_0(VAR_16), VAR_15);

      return VAR_2;
      }

   if (FUNC_1(VAR_16)->cp_stat[VAR_15] == VAR_4) {
      FUNC_4("%s: abort, mbox %d is in reset.\n", FUNC_0(VAR_16), VAR_15);
      return VAR_2;
      }

   if (FUNC_1(VAR_16)->cp_stat[VAR_15] == VAR_8) {
      FUNC_4("%s: abort, mbox %d is locked.\n", FUNC_0(VAR_16), VAR_15);
      return VAR_12;
      }

   if (FUNC_1(VAR_16)->cp_stat[VAR_15] == VAR_10 || FUNC_1(VAR_16)->cp_stat[VAR_15] == VAR_0) {
      FUNC_7(VAR_15, VAR_16);
      VAR_14->result = VAR_1 << 16;
      VAR_14->host_scribble = ((void*)0);
      FUNC_1(VAR_16)->cp_stat[VAR_15] = VAR_3;
      FUNC_4("%s, abort, mbox %d ready, DID_ABORT, pid %ld done.\n",
             FUNC_0(VAR_16), VAR_15, VAR_14->serial_number);
      VAR_14->scsi_done(VAR_14);
      return VAR_12;
      }

   FUNC_3("%s: abort, mbox %d, invalid cp_stat.\n", FUNC_0(VAR_16), VAR_15);
}
