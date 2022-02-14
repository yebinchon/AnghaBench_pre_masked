
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_data {int extra_len; int add_sense_code; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; scalar_t__ sense_buffer; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_2__ {int channel; int id; int lun; } ;
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


 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*,int) ;
 char* FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (char*,char*,int,int,int,int) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_6(struct ahd_softc *VAR_11, struct scsi_cmnd *VAR_12)
{
 int VAR_13;
 int VAR_14 = VAR_5;
 int VAR_15 = 0;
 int VAR_16;
 VAR_13 = FUNC_1(VAR_12);
 switch (VAR_13) {
 case 141:
 case 143:
  VAR_14 = VAR_5;
  break;
 case 154:
  VAR_14 = VAR_3;

 case 136:
  VAR_16 = FUNC_0(VAR_12);

  switch(VAR_16) {
  case 128:
  case 129:
   if ((VAR_12->result >> 24) != VAR_10) {
    VAR_15 = 1;
   } else {
    struct scsi_sense_data *VAR_17;

    VAR_17 = (struct scsi_sense_data *)
     VAR_12->sense_buffer;
    if (VAR_17->extra_len >= 5 &&
        (VAR_17->add_sense_code == 0x47
         || VAR_17->add_sense_code == 0x48))
     VAR_15 = 1;
   }
   break;
  default:
   break;
  }
  break;
 case 144:
  VAR_14 = VAR_0;
  break;
 case 152:
  VAR_14 = VAR_2;
  break;
 case 140:
 case 147:
  VAR_14 = VAR_1;
  break;
 case 135:
  VAR_14 = VAR_4;
  break;
 case 137:
 case 153:
  VAR_14 = VAR_8;
  break;
 case 132:
  VAR_14 = VAR_6;
  VAR_15 = 1;
  break;
 case 150:
  VAR_14 = VAR_9;
  VAR_15 = 1;
  break;
 case 142:
 case 131:
 case 149:
  VAR_14 = VAR_3;
  VAR_15 = 1;
  break;
 case 133:
 case 148:
 case 134:
 case 151:
 case 146:
 case 139:
 case 130:
 case 138:
  VAR_14 = VAR_3;
  break;
 case 145:
  VAR_14 = VAR_7;
  break;
 default:

  VAR_14 = VAR_3;
  break;
 }

 if (VAR_15) {
  FUNC_4("%s: device overrun (status %x) on %d:%d:%d\n",
         FUNC_3(VAR_11), VAR_13, VAR_12->device->channel,
         VAR_12->device->id, VAR_12->device->lun);
 }

 FUNC_2(VAR_12, VAR_14);

 VAR_12->scsi_done(VAR_12);
}
