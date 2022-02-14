
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {int asc; int ascq; int sense_key; } ;
struct scsi_device {int dummy; } ;
struct rdac_dh_data {int state; TYPE_1__* ctlr; } ;
struct TYPE_2__ {int index; scalar_t__ array_name; } ;


 int VAR_0 ;


 int FUNC_0 (int ,struct scsi_device*,char*,char*,int ,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 struct rdac_dh_data* FUNC_1 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_5,
    struct scsi_sense_hdr *VAR_6)
{
 struct rdac_dh_data *VAR_7 = FUNC_1(VAR_5);

 FUNC_0(VAR_1, VAR_5, "array %s, ctlr %d, "
   "I/O returned with sense %02x/%02x/%02x",
   (char *) VAR_7->ctlr->array_name, VAR_7->ctlr->index,
   VAR_6->sense_key, VAR_6->asc, VAR_6->ascq);

 switch (VAR_6->sense_key) {
 case 129:
  if (VAR_6->asc == 0x04 && VAR_6->ascq == 0x01)




   return VAR_0;
  if (VAR_6->asc == 0x04 && VAR_6->ascq == 0x81)





   return VAR_4;
  if (VAR_6->asc == 0x04 && VAR_6->ascq == 0xA1)




   return VAR_0;
  if (VAR_6->asc == 0xA1 && VAR_6->ascq == 0x02)




   return VAR_0;
  break;
 case 130:
  if (VAR_6->asc == 0x94 && VAR_6->ascq == 0x01) {




   VAR_7->state = VAR_2;
   return VAR_4;
  }
  break;
 case 128:
  if (VAR_6->asc == 0x29 && VAR_6->ascq == 0x00)



   return VAR_0;
  if (VAR_6->asc == 0x8b && VAR_6->ascq == 0x02)



   return VAR_0;
  break;
 }

 return VAR_3;
}
