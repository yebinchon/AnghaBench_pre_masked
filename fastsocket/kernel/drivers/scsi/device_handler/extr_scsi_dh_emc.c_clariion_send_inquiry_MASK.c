
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int ascq; int asc; int sense_key; } ;
struct scsi_device {int dummy; } ;
struct clariion_dh_data {int sense; scalar_t__ senselen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_device*,struct scsi_sense_hdr*) ;
 int FUNC_1 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_2 (int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_3 (int ,struct scsi_device*,char*,int ,int ,int ,int ) ;
 int FUNC_4 (struct scsi_device*,int,struct clariion_dh_data*) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_7,
     struct clariion_dh_data *VAR_8)
{
 int VAR_9, VAR_10 = VAR_2;

retry:
 VAR_9 = FUNC_4(VAR_7, 0xC0, VAR_8);
 if (VAR_9 != VAR_5 && VAR_8->senselen) {
  struct scsi_sense_hdr VAR_11;

  VAR_9 = FUNC_2(VAR_8->sense, VAR_6,
        &VAR_11);
  if (!VAR_9)
   return VAR_4;

  VAR_9 = FUNC_0(VAR_7, &VAR_11);
  if (VAR_10 > 0 && VAR_9 == VAR_0) {
   VAR_10--;
   goto retry;
  }
  FUNC_3(VAR_3, VAR_7, "%s: INQUIRY sense code "
       "%02x/%02x/%02x\n", VAR_1,
         VAR_11.sense_key, VAR_11.asc, VAR_11.ascq);
  VAR_9 = VAR_4;
 } else {
  VAR_9 = FUNC_1(VAR_7, VAR_8);
 }
 return VAR_9;
}
