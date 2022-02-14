
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {int response_code; int additional_length; int sense_key; int asc; int ascq; } ;
struct scsi_device {int retry_hwerror; int allow_restart; int expecting_cc_ua; TYPE_2__* scsi_dh_data; } ;
struct scsi_cmnd {int* sense_buffer; struct scsi_device* device; } ;
struct TYPE_4__ {TYPE_1__* scsi_dh; } ;
struct TYPE_3__ {int (* check_sense ) (struct scsi_device*,struct scsi_sense_hdr*) ;} ;



 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ,struct scsi_cmnd*,char*) ;
 int FUNC_1 (struct scsi_cmnd*,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_2 (struct scsi_sense_hdr*) ;
 int FUNC_3 (struct scsi_device*,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_7)
{
 struct scsi_device *VAR_8 = VAR_7->device;
 struct scsi_sense_hdr VAR_9;

 if (! FUNC_1(VAR_7, &VAR_9))
  return VAR_1;

 if (FUNC_2(&VAR_9))
  return VAR_3;

 if (VAR_8->scsi_dh_data && VAR_8->scsi_dh_data->scsi_dh &&
   VAR_8->scsi_dh_data->scsi_dh->check_sense) {
  int VAR_10;

  VAR_10 = VAR_8->scsi_dh_data->scsi_dh->check_sense(VAR_8, &VAR_9);
  if (VAR_10 != VAR_4)
   return VAR_10;

 }





 if (VAR_9.response_code == 0x70) {

  if (VAR_7->sense_buffer[2] & 0xe0)
   return VAR_5;
 } else {





  if ((VAR_9.additional_length > 3) &&
      (VAR_7->sense_buffer[8] == 0x4) &&
      (VAR_7->sense_buffer[11] & 0xe0))
   return VAR_5;
 }

 switch (VAR_9.sense_key) {
 case 131:
  return VAR_5;
 case 130:
  return VAR_5;

 case 140:
  if (VAR_9.asc == 0x10)
   return VAR_5;

  return VAR_3;
 case 132:
 case 129:






  if (VAR_7->device->expecting_cc_ua) {






   if (VAR_9.asc != 0x28 || VAR_9.ascq != 0x00) {
    VAR_7->device->expecting_cc_ua = 0;
    return VAR_3;
   }
  }




  if ((VAR_9.asc == 0x04) && (VAR_9.ascq == 0x01))
   return VAR_3;




  if (VAR_7->device->allow_restart &&
      (VAR_9.asc == 0x04) && (VAR_9.ascq == 0x02))
   return VAR_1;

  if (VAR_9.asc == 0x3f && VAR_9.ascq == 0x0e)
   FUNC_0(VAR_2, VAR_7,
        "Warning! Received an indication that the "
        "LUN assignments on this target have "
        "changed. The Linux SCSI layer does not "
        "automatically remap LUN assignments.\n");
  else if (VAR_9.asc == 0x3f)
   FUNC_0(VAR_2, VAR_7,
        "Warning! Received an indication that the "
        "operating parameters on this target have "
        "changed. The Linux SCSI layer does not "
        "automatically adjust these parameters.\n");

  if (VAR_9.asc == 0x38 && VAR_9.ascq == 0x07)
   FUNC_0(VAR_2, VAR_7,
        "Warning! Received an indication that the "
        "LUN reached a thin provisioning soft "
        "threshold.\n");





  return VAR_5;


 case 138:
 case 128:
 case 133:
 case 139:
 case 137:
  return VAR_6;

 case 134:
  if (VAR_9.asc == 0x11 ||
      VAR_9.asc == 0x13 ||
      VAR_9.asc == 0x14) {
   return VAR_6;
  }
  return VAR_3;

 case 136:
  if (VAR_7->device->retry_hwerror)
   return VAR_0;
  else
   return VAR_6;

 case 135:
  if (VAR_9.asc == 0x20 ||
      VAR_9.asc == 0x21 ||
      VAR_9.asc == 0x24 ||
      VAR_9.asc == 0x26) {
   return VAR_6;
  }
  return VAR_5;

 default:
  return VAR_5;
 }
}
