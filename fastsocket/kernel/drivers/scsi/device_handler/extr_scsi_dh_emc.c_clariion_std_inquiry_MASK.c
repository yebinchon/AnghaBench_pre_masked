
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int ascq; int asc; int sense_key; } ;
struct scsi_device {int dummy; } ;
struct clariion_dh_data {int flags; int buffer; int sense; scalar_t__ senselen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (struct scsi_device*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int ,char*,int ,...) ;
 int FUNC_3 (struct scsi_device*,int ,struct clariion_dh_data*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_8,
    struct clariion_dh_data *VAR_9)
{
 int VAR_10;
 char *VAR_11;

 VAR_10 = FUNC_3(VAR_8, 0, VAR_9);
 if (VAR_10 != VAR_6 && VAR_9->senselen) {
  struct scsi_sense_hdr VAR_12;

  if (FUNC_1(VAR_9->sense, VAR_7,
      &VAR_12)) {
   FUNC_2(VAR_2, VAR_8, "%s: INQUIRY sense code "
        "%02x/%02x/%02x\n", VAR_0,
        VAR_12.sense_key, VAR_12.asc, VAR_12.ascq);
  }
  VAR_10 = VAR_5;
  goto out;
 }

 VAR_11 = FUNC_0(VAR_8, VAR_9->buffer);
 if (!VAR_11) {
  VAR_10 = VAR_4;
  goto out;
 }




 if (!FUNC_4(VAR_11) || !FUNC_5(VAR_11, "FC",2))
  VAR_9->flags |= VAR_1;

 FUNC_2(VAR_3, VAR_8,
      "%s: detected Clariion %s, flags %x\n",
      VAR_0, VAR_11, VAR_9->flags);
out:
 return VAR_10;
}
