
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int ascq; int asc; } ;
struct scsi_cmnd {int sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_cmnd*,char*) ;
 int FUNC_1 (int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct scsi_sense_hdr*) ;

void FUNC_5(char *VAR_2, struct scsi_cmnd *VAR_3)
{
 struct scsi_sense_hdr VAR_4;

 FUNC_0(VAR_0, VAR_3, "");
 FUNC_1(VAR_3->sense_buffer, VAR_1,
     &VAR_4);
 FUNC_4(&VAR_4);
 FUNC_2(VAR_3->sense_buffer, VAR_1,
     &VAR_4);
 FUNC_0(VAR_0, VAR_3, "");
 FUNC_3(VAR_4.asc, VAR_4.ascq);
}
