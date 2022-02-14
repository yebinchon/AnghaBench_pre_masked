
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; scalar_t__ sense_buffer; } ;
struct SENSE_DATA {int Valid; int ErrorCode; } ;
struct TYPE_2__ {int SenseData; } ;
struct CommandControlBlock {TYPE_1__ arcmsr_cdb; struct scsi_cmnd* pcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct SENSE_DATA*,int ,int) ;
 int FUNC_1 (struct SENSE_DATA*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct CommandControlBlock *VAR_3)
{

 struct scsi_cmnd *VAR_4 = VAR_3->pcmd;
 struct SENSE_DATA *VAR_5 = (struct SENSE_DATA *)VAR_4->sense_buffer;
 VAR_4->result = VAR_0 << 16;
 if (VAR_5) {
  int VAR_6 =
   sizeof(struct SENSE_DATA) < VAR_1
   ? sizeof(struct SENSE_DATA) : VAR_1;
  FUNC_1(VAR_5, 0, VAR_1);
  FUNC_0(VAR_5, VAR_3->arcmsr_cdb.SenseData, VAR_6);
  VAR_5->ErrorCode = VAR_2;
  VAR_5->Valid = 1;
 }
}
