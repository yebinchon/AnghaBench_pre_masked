
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_mode_data {int header_length; int length; int block_descriptor_length; } ;
struct scsi_disk {scalar_t__ protection_type; int ATO; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct scsi_device*,int,int,unsigned char*,int,int ,int ,struct scsi_mode_data*,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_4 (int ,struct scsi_disk*,char*) ;

void FUNC_5(struct scsi_disk *VAR_5, unsigned char *VAR_6)
{
 int VAR_7, VAR_8;
 struct scsi_device *VAR_9 = VAR_5->device;
 struct scsi_mode_data VAR_10;
 struct scsi_sense_hdr VAR_11;

 if (VAR_9->type != VAR_4)
  return;

 if (VAR_5->protection_type == 0)
  return;

 VAR_7 = FUNC_0(VAR_9, 1, 0x0a, VAR_6, 36, VAR_3,
         VAR_2, &VAR_10, &VAR_11);

 if (!FUNC_2(VAR_7) || !VAR_10.header_length ||
     VAR_10.length < 6) {
  FUNC_4(VAR_1, VAR_5,
     "getting Control mode page failed, assume no ATO\n");

  if (FUNC_1(&VAR_11))
   FUNC_3(VAR_5, &VAR_11);

  return;
 }

 VAR_8 = VAR_10.header_length + VAR_10.block_descriptor_length;

 if ((VAR_6[VAR_8] & 0x3f) != 0x0a) {
  FUNC_4(VAR_0, VAR_5, "ATO Got wrong page\n");
  return;
 }

 if ((VAR_6[VAR_8 + 5] & 0x80) == 0)
  return;

 VAR_5->ATO = 1;

 return;
}
