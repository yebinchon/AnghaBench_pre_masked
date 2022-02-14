
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lpfc_abts_els_sgl_list; int lpfc_abts_scsi_buf_list; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = FUNC_0(&VAR_5->sli4_hba.lpfc_abts_scsi_buf_list);
 int VAR_8 = FUNC_0(&VAR_5->sli4_hba.lpfc_abts_els_sgl_list);

 while (!VAR_7 || !VAR_8) {
  if (VAR_6 > VAR_4) {
   if (!VAR_7)
    FUNC_1(VAR_5, VAR_0, VAR_1,
      "2877 FCP XRI exchange busy "
      "wait time: %d seconds.\n",
      VAR_6/1000);
   if (!VAR_8)
    FUNC_1(VAR_5, VAR_0, VAR_1,
      "2878 ELS XRI exchange busy "
      "wait time: %d seconds.\n",
      VAR_6/1000);
   FUNC_2(VAR_3);
   VAR_6 += VAR_3;
  } else {
   FUNC_2(VAR_2);
   VAR_6 += VAR_2;
  }
  VAR_7 =
   FUNC_0(&VAR_5->sli4_hba.lpfc_abts_scsi_buf_list);
  VAR_8 =
   FUNC_0(&VAR_5->sli4_hba.lpfc_abts_els_sgl_list);
 }
}
