
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static int FUNC_0(struct scsi_device *VAR_3,
       struct scsi_sense_hdr *VAR_4)
{
 switch (VAR_4->sense_key) {
 case 129:
  if (VAR_4->asc == 0x04 && VAR_4->ascq == 0x0a)



   return VAR_0;
  if (VAR_4->asc == 0x04 && VAR_4->ascq == 0x0b)



   return VAR_2;
  if (VAR_4->asc == 0x04 && VAR_4->ascq == 0x0c)



   return VAR_2;
  if (VAR_4->asc == 0x04 && VAR_4->ascq == 0x12)



   return VAR_2;
  break;
 case 128:
  if (VAR_4->asc == 0x29 && VAR_4->ascq == 0x00)



   return VAR_0;
  if (VAR_4->asc == 0x2a && VAR_4->ascq == 0x01)



   return VAR_0;
  if (VAR_4->asc == 0x2a && VAR_4->ascq == 0x06)



   return VAR_0;
  if (VAR_4->asc == 0x2a && VAR_4->ascq == 0x07)



   return VAR_0;
  if (VAR_4->asc == 0x3f && VAR_4->ascq == 0x03)



   return VAR_0;
  if (VAR_4->asc == 0x3f && VAR_4->ascq == 0x0e)





   return VAR_0;
  break;
 }

 return VAR_1;
}
