
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int asc; int ascq; int response_code; } ;
struct scsi_disk {int dummy; } ;
struct scsi_cmnd {int result; unsigned char* cmnd; struct request* request; int sense_buffer; } ;
struct request {int cmd_flags; int rq_disk; } ;



 scalar_t__ VAR_0 ;


 int VAR_1 ;


 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,int ,int,int,int ) ;
 unsigned int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,struct scsi_sense_hdr*) ;
 struct scsi_disk* FUNC_8 (int ) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (char*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_sense_hdr*) ;
 int FUNC_13 (struct scsi_cmnd*,unsigned int) ;
 unsigned int FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (struct scsi_disk*,int ) ;
 int FUNC_16 (struct scsi_cmnd*,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct scsi_cmnd *VAR_9)
{
 int VAR_10 = VAR_9->result;
 unsigned int VAR_11 = VAR_10 ? 0 : FUNC_6(VAR_9);
 struct scsi_sense_hdr VAR_12;
 struct scsi_disk *VAR_13 = FUNC_8(VAR_9->request->rq_disk);
 struct request *VAR_14 = VAR_9->request;
 int VAR_15 = 0;
 int VAR_16 = 0;
 unsigned char VAR_17 = VAR_9->cmnd[0];

 if (VAR_14->cmd_flags & VAR_3) {
  if (!VAR_10) {
   VAR_11 = FUNC_1(VAR_14);
   FUNC_13(VAR_9, 0);
  } else {
   VAR_11 = 0;
   FUNC_13(VAR_9, FUNC_1(VAR_14));
  }
 }

 if (VAR_10) {
  VAR_15 = FUNC_7(VAR_9, &VAR_12);
  if (VAR_15)
   VAR_16 = FUNC_12(&VAR_12);
 }
 if (FUNC_2(VAR_10) != VAR_0 &&
     (!VAR_15 || VAR_16))
  goto out;

 switch (VAR_12.sense_key) {
 case 132:
 case 130:
  VAR_11 = FUNC_14(VAR_9);
  break;
 case 128:
  VAR_11 = FUNC_6(VAR_9);
  break;
 case 129:




  FUNC_10("sd", VAR_9);
  VAR_9->result = 0;
  FUNC_3(VAR_9->sense_buffer, 0, VAR_4);
  break;
 case 133:
  if (VAR_12.asc == 0x10)
   VAR_11 = FUNC_14(VAR_9);
  break;
 case 131:
  if (VAR_12.asc == 0x10)
   VAR_11 = FUNC_14(VAR_9);

  if ((VAR_12.asc == 0x20 || VAR_12.asc == 0x24) &&
      (VAR_17 == VAR_6 || VAR_17 == VAR_8 || VAR_17 == VAR_7))
   FUNC_15(VAR_13, VAR_5);
  break;
 default:
  break;
 }
 out:
 if (FUNC_4(VAR_9->request) == VAR_2 && FUNC_11(VAR_9))
  FUNC_16(VAR_9, VAR_11);

 return VAR_11;
}
