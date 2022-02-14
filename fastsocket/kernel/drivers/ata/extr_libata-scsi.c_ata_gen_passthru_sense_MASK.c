
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {unsigned char* sense_buffer; int result; } ;
struct ata_taskfile {int command; unsigned char feature; unsigned char nsect; unsigned char lbal; unsigned char lbam; unsigned char lbah; unsigned char device; int flags; unsigned char hob_nsect; unsigned char hob_lbal; unsigned char hob_lbam; unsigned char hob_lbah; } ;
struct ata_queued_cmd {TYPE_2__* ap; scalar_t__ err_mask; struct ata_taskfile result_tf; struct scsi_cmnd* scsicmd; } ;
struct TYPE_4__ {int print_id; TYPE_1__* ops; } ;
struct TYPE_3__ {int * error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,unsigned char,unsigned char*,unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_8)
{
 struct scsi_cmnd *VAR_9 = VAR_8->scsicmd;
 struct ata_taskfile *VAR_10 = &VAR_8->result_tf;
 unsigned char *VAR_11 = VAR_9->sense_buffer;
 unsigned char *VAR_12 = VAR_11 + 8;
 int VAR_13 = VAR_8->ap->ops->error_handler == ((void*)0);

 FUNC_1(VAR_11, 0, VAR_7);

 VAR_9->result = (VAR_5 << 24) | VAR_6;





 if (VAR_8->err_mask ||
     VAR_10->command & (VAR_0 | VAR_1 | VAR_3 | VAR_2)) {
  FUNC_0(VAR_8->ap->print_id, VAR_10->command, VAR_10->feature,
       &VAR_11[1], &VAR_11[2], &VAR_11[3], VAR_13);
  VAR_11[1] &= 0x0f;
 }




 VAR_11[0] = 0x72;

 VAR_12[0] = 0x09;


 VAR_11[7] = 14;
 VAR_12[1] = 12;




 VAR_12[2] = 0x00;
 VAR_12[3] = VAR_10->feature;
 VAR_12[5] = VAR_10->nsect;
 VAR_12[7] = VAR_10->lbal;
 VAR_12[9] = VAR_10->lbam;
 VAR_12[11] = VAR_10->lbah;
 VAR_12[12] = VAR_10->device;
 VAR_12[13] = VAR_10->command;





 if (VAR_10->flags & VAR_4) {
  VAR_12[2] |= 0x01;
  VAR_12[4] = VAR_10->hob_nsect;
  VAR_12[6] = VAR_10->hob_lbal;
  VAR_12[8] = VAR_10->hob_lbam;
  VAR_12[10] = VAR_10->hob_lbah;
 }
}
