
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
 int FUNC_0 (unsigned char*,int ,struct scsi_sense_hdr*) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_5, unsigned char *VAR_6)
{
 struct scsi_sense_hdr VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_4, &VAR_7);
 if (!VAR_8) {
  FUNC_1(VAR_1, VAR_5,
       "%s: sending start_stop_unit failed, "
       "no sense available\n",
       VAR_0);
  return VAR_2;
 }
 switch (VAR_7.sense_key) {
 case 128:
  if ((VAR_7.asc == 0x04) && (VAR_7.ascq == 3)) {





   VAR_8 = VAR_3;
   break;
  }

 default:
  FUNC_1(VAR_1, VAR_5,
      "%s: sending start_stop_unit failed, sense %x/%x/%x\n",
      VAR_0, VAR_7.sense_key, VAR_7.asc,
      VAR_7.ascq);
  VAR_8 = VAR_2;
 }

 return VAR_8;
}
