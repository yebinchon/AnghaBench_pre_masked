
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;
struct rdac_dh_data {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int index; scalar_t__ array_name; } ;






 int FUNC_0 (int ,struct scsi_device*,char*,char*,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 struct rdac_dh_data* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (unsigned char*,int ,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_4,
     unsigned char *VAR_5)
{
 struct scsi_sense_hdr VAR_6;
 int VAR_7 = VAR_1, VAR_8;
 struct rdac_dh_data *VAR_9 = FUNC_1(VAR_4);

 VAR_8 = FUNC_2(VAR_5, VAR_3, &VAR_6);
 if (!VAR_8)
  goto done;

 switch (VAR_6.sense_key) {
 case 129:
 case 132:
 case 128:
  VAR_7 = VAR_2;
  break;
 case 130:
  if (VAR_6.asc == 0x04 && VAR_6.ascq == 0x01)



   VAR_7 = VAR_2;
  break;
 case 131:
  if (VAR_6.asc == 0x91 && VAR_6.ascq == 0x36)



   VAR_7 = VAR_2;
  break;
 default:
  break;
 }

 FUNC_0(VAR_0, VAR_4, "array %s, ctlr %d, "
  "MODE_SELECT returned with sense %02x/%02x/%02x",
  (char *) VAR_9->ctlr->array_name, VAR_9->ctlr->index,
  VAR_6.sense_key, VAR_6.asc, VAR_6.ascq);

done:
 return VAR_7;
}
