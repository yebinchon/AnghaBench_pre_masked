
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (unsigned char*,int ,struct scsi_sense_hdr*) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_6, unsigned char *VAR_7)
{
 struct scsi_sense_hdr VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_5, &VAR_8);
 if (!VAR_9) {
  FUNC_1(VAR_1, VAR_6,
       "%s: sending tur failed, no sense available\n",
       VAR_0);
  VAR_9 = VAR_4;
  goto done;
 }
 switch (VAR_8.sense_key) {
 case 128:
  VAR_9 = VAR_3;
  break;
 case 129:
  if ((VAR_8.asc == 0x04) && (VAR_8.ascq == 2)) {





   VAR_9 = VAR_2;
   break;
  }

 default:
  FUNC_1(VAR_1, VAR_6,
      "%s: sending tur failed, sense %x/%x/%x\n",
      VAR_0, VAR_8.sense_key, VAR_8.asc,
      VAR_8.ascq);
  break;
 }

done:
 return VAR_9;
}
