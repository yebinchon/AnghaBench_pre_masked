
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int serial_number; int * host_scribble; TYPE_1__* device; } ;
struct hostdata {scalar_t__* cp_stat; int board_name; TYPE_2__* cp; } ;
struct Scsi_Host {unsigned int can_queue; scalar_t__ io_port; scalar_t__ hostdata; } ;
struct TYPE_4__ {struct scsi_cmnd* SCpnt; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*,unsigned int,...) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (unsigned int,struct hostdata*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_14)
{
 struct Scsi_Host *VAR_15 = VAR_14->device->host;
 struct hostdata *VAR_16 = (struct hostdata *)VAR_15->hostdata;
 unsigned int VAR_17;

 if (VAR_14->host_scribble == ((void*)0)) {
  FUNC_3(VAR_7, VAR_14,
   "abort, pid %ld inactive.\n", VAR_14->serial_number);
  return VAR_13;
 }

 VAR_17 = *(unsigned int *)VAR_14->host_scribble;
 FUNC_3(VAR_8, VAR_14,
  "abort, mbox %d, pid %ld.\n", VAR_17, VAR_14->serial_number);

 if (VAR_17 >= VAR_15->can_queue)
  FUNC_1("%s: abort, invalid SCarg->host_scribble.\n", VAR_16->board_name);

 if (FUNC_6(VAR_15->io_port, VAR_10)) {
  FUNC_2("%s: abort, timeout error.\n", VAR_16->board_name);
  return VAR_2;
 }

 if (VAR_16->cp_stat[VAR_17] == VAR_3) {
  FUNC_2("%s: abort, mbox %d is free.\n", VAR_16->board_name, VAR_17);
  return VAR_13;
 }

 if (VAR_16->cp_stat[VAR_17] == VAR_5) {
  FUNC_2("%s: abort, mbox %d is in use.\n", VAR_16->board_name, VAR_17);

  if (VAR_14 != VAR_16->cp[VAR_17].SCpnt)
   FUNC_1("%s: abort, mbox %d, SCarg %p, cp SCpnt %p.\n",
         VAR_16->board_name, VAR_17, VAR_14, VAR_16->cp[VAR_17].SCpnt);

  if (FUNC_0(VAR_15->io_port + VAR_12) & VAR_6)
   FUNC_2("%s: abort, mbox %d, interrupt pending.\n",
          VAR_16->board_name, VAR_17);

  return VAR_2;
 }

 if (VAR_16->cp_stat[VAR_17] == VAR_4) {
  FUNC_2("%s: abort, mbox %d is in reset.\n", VAR_16->board_name, VAR_17);
  return VAR_2;
 }

 if (VAR_16->cp_stat[VAR_17] == VAR_9) {
  FUNC_2("%s: abort, mbox %d is locked.\n", VAR_16->board_name, VAR_17);
  return VAR_13;
 }

 if (VAR_16->cp_stat[VAR_17] == VAR_11 || VAR_16->cp_stat[VAR_17] == VAR_0) {
  FUNC_5(VAR_17, VAR_16);
  VAR_14->result = VAR_1 << 16;
  VAR_14->host_scribble = ((void*)0);
  VAR_16->cp_stat[VAR_17] = VAR_3;
  FUNC_2("%s, abort, mbox %d ready, DID_ABORT, pid %ld done.\n",
         VAR_16->board_name, VAR_17, VAR_14->serial_number);
  VAR_14->scsi_done(VAR_14);
  return VAR_13;
 }

 FUNC_1("%s: abort, mbox %d, invalid cp_stat.\n", VAR_16->board_name, VAR_17);
}
