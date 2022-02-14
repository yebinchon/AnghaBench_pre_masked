
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
 int VAR_6 ;
 int FUNC_0 (char*,int ,struct scsi_sense_hdr*) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_7, char *VAR_8)
{
 int VAR_9 = VAR_5;
 struct scsi_sense_hdr VAR_10;

 if (!FUNC_0(VAR_8, VAR_6, &VAR_10)) {
  FUNC_1(VAR_1, VAR_7, "%s: Found valid sense data 0x%2x, "
       "0x%2x, 0x%2x while sending CLARiiON trespass "
       "command.\n", VAR_0, VAR_10.sense_key,
       VAR_10.asc, VAR_10.ascq);

  if ((VAR_10.sense_key == 0x05) && (VAR_10.asc == 0x04) &&
       (VAR_10.ascq == 0x00)) {




   FUNC_1(VAR_2, VAR_7, "%s: Array Based Copy in "
        "progress while sending CLARiiON trespass "
        "command.\n", VAR_0);
   VAR_9 = VAR_4;
  } else if ((VAR_10.sense_key == 0x02) && (VAR_10.asc == 0x04) &&
       (VAR_10.ascq == 0x03)) {




   FUNC_1(VAR_2, VAR_7, "%s: Detected in-progress "
        "ucode upgrade NDU operation while sending "
        "CLARiiON trespass command.\n", VAR_0);
   VAR_9 = VAR_4;
  } else
   VAR_9 = VAR_3;
 } else {
  FUNC_1(VAR_2, VAR_7,
       "%s: failed to send MODE SELECT, no sense available\n",
       VAR_0);
 }
 return VAR_9;
}
