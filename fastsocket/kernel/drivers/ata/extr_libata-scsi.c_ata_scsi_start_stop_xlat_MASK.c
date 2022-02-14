
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int* cmnd; int cmd_len; int result; } ;
struct ata_taskfile {int flags; int nsect; int lbah; int lbam; int lbal; int command; int device; int protocol; } ;
struct ata_queued_cmd {TYPE_2__* ap; TYPE_1__* dev; struct ata_taskfile tf; struct scsi_cmnd* scsicmd; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct scsi_cmnd*,int ,int,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_queued_cmd *VAR_14)
{
 struct scsi_cmnd *VAR_15 = VAR_14->scsicmd;
 struct ata_taskfile *VAR_16 = &VAR_14->tf;
 const u8 *VAR_17 = VAR_15->cmnd;

 if (VAR_15->cmd_len < 5)
  goto invalid_fld;

 VAR_16->flags |= VAR_7 | VAR_8;
 VAR_16->protocol = VAR_6;
 if (VAR_17[1] & 0x1) {
  ;
 }
 if (VAR_17[4] & 0x2)
  goto invalid_fld;
 if (((VAR_17[4] >> 4) & 0xf) != 0)
  goto invalid_fld;

 if (VAR_17[4] & 0x1) {
  VAR_16->nsect = 1;

  if (VAR_14->dev->flags & VAR_2) {
   VAR_16->flags |= VAR_9;

   VAR_16->lbah = 0x0;
   VAR_16->lbam = 0x0;
   VAR_16->lbal = 0x0;
   VAR_16->device |= VAR_5;
  } else {

   VAR_16->lbal = 0x1;
   VAR_16->lbam = 0x0;
   VAR_16->lbah = 0x0;
  }

  VAR_16->command = VAR_1;
 } else {



  if ((VAR_14->ap->flags & VAR_4) &&
      VAR_13 == VAR_12)
   goto skip;

  if ((VAR_14->ap->flags & VAR_3) &&
       FUNC_1())
   goto skip;


  VAR_16->command = VAR_0;
 }
 return 0;

 invalid_fld:
 FUNC_0(VAR_15, VAR_10, 0x24, 0x0);

 return 1;
 skip:
 VAR_15->result = VAR_11;
 return 1;
}
