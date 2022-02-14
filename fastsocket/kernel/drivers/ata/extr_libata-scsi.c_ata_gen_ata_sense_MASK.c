
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct scsi_cmnd {unsigned char* sense_buffer; int result; } ;
struct ata_taskfile {int command; int feature; } ;
struct ata_queued_cmd {struct ata_taskfile result_tf; TYPE_2__* ap; scalar_t__ err_mask; struct scsi_cmnd* scsicmd; struct ata_device* dev; } ;
struct ata_device {int dummy; } ;
struct TYPE_4__ {int print_id; TYPE_1__* ops; } ;
struct TYPE_3__ {int * error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_taskfile*,struct ata_device*) ;
 int FUNC_1 (int ,int,int ,unsigned char*,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ata_queued_cmd *VAR_7)
{
 struct ata_device *VAR_8 = VAR_7->dev;
 struct scsi_cmnd *VAR_9 = VAR_7->scsicmd;
 struct ata_taskfile *VAR_10 = &VAR_7->result_tf;
 unsigned char *VAR_11 = VAR_9->sense_buffer;
 unsigned char *VAR_12 = VAR_11 + 8;
 int VAR_13 = VAR_7->ap->ops->error_handler == ((void*)0);
 u64 VAR_14;

 FUNC_2(VAR_11, 0, VAR_6);

 VAR_9->result = (VAR_4 << 24) | VAR_5;


 VAR_11[0] = 0x72;




 if (VAR_7->err_mask ||
     VAR_10->command & (VAR_0 | VAR_1 | VAR_3 | VAR_2)) {
  FUNC_1(VAR_7->ap->print_id, VAR_10->command, VAR_10->feature,
       &VAR_11[1], &VAR_11[2], &VAR_11[3], VAR_13);
  VAR_11[1] &= 0x0f;
 }

 VAR_14 = FUNC_0(&VAR_7->result_tf, VAR_8);


 VAR_11[7] = 12;
 VAR_12[0] = 0x00;
 VAR_12[1] = 10;

 VAR_12[2] |= 0x80;
 VAR_12[6] = VAR_14 >> 40;
 VAR_12[7] = VAR_14 >> 32;
 VAR_12[8] = VAR_14 >> 24;
 VAR_12[9] = VAR_14 >> 16;
 VAR_12[10] = VAR_14 >> 8;
 VAR_12[11] = VAR_14;
}
