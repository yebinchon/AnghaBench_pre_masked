
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;unsigned char* cmnd; int* sense_buffer; int result; TYPE_1__* device; } ;
struct ps3rom_private {struct scsi_cmnd* curr_cmd; struct ps3_storage_device* dev; } ;
struct ps3_storage_device {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (struct ps3_storage_device*,struct scsi_cmnd*) ;
 int FUNC_2 (struct ps3_storage_device*,struct scsi_cmnd*,int ,int ) ;
 int FUNC_3 (struct ps3_storage_device*,struct scsi_cmnd*,int ,int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 struct ps3rom_private* FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 void FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_2,
          void (*VAR_3)(struct scsi_cmnd *))
{
 struct ps3rom_private *VAR_4 = FUNC_5(VAR_2->device->host);
 struct ps3_storage_device *VAR_5 = VAR_4->dev;
 unsigned char VAR_6;
 int VAR_7;





 VAR_4->curr_cmd = VAR_2;
 VAR_2->scsi_done = VAR_3;

 VAR_6 = VAR_2->cmnd[0];





 switch (VAR_6) {
 case 129:
  VAR_7 = FUNC_2(VAR_5, VAR_2, FUNC_6(VAR_2),
       FUNC_7(VAR_2));
  break;

 case 128:
  VAR_7 = FUNC_3(VAR_5, VAR_2, FUNC_6(VAR_2),
        FUNC_7(VAR_2));
  break;

 default:
  VAR_7 = FUNC_1(VAR_5, VAR_2);
  break;
 }

 if (VAR_7) {
  FUNC_0(VAR_2->sense_buffer, 0, VAR_1);
  VAR_2->result = VAR_7;
  VAR_2->sense_buffer[0] = 0x70;
  VAR_2->sense_buffer[2] = VAR_0;
  VAR_4->curr_cmd = ((void*)0);
  VAR_2->scsi_done(VAR_2);
 }

 return 0;
}
