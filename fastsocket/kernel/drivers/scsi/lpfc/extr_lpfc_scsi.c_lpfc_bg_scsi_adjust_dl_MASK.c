
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct lpfc_scsi_buf {struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_3(struct lpfc_hba *VAR_3,
         struct lpfc_scsi_buf *VAR_4)
{
 struct scsi_cmnd *VAR_5 = VAR_4->pCmd;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);


 if (VAR_5->sc_data_direction == VAR_0) {

  if (FUNC_2(VAR_5) == VAR_1)
   return VAR_6;

 } else {

  if (FUNC_2(VAR_5) == VAR_2)
   return VAR_6;
 }






 VAR_6 += (VAR_6 / FUNC_0(VAR_5)) * 8;

 return VAR_6;
}
