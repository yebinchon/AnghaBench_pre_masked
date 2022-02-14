
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int cfg_fcp_io_channel; } ;


 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int) ;
 int FUNC_4 (struct lpfc_hba*,int) ;
 int FUNC_5 (struct lpfc_hba*,int) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;

void
FUNC_9(struct lpfc_hba *VAR_0)
{
 int VAR_1;




 FUNC_8(VAR_0);
 FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel; VAR_1++)
  FUNC_4(VAR_0, VAR_1);

 FUNC_6(VAR_0);
 FUNC_0(VAR_0);



 FUNC_7(VAR_0);
 FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel; VAR_1++)
  FUNC_3(VAR_0, VAR_1);




 for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel; VAR_1++)
  FUNC_5(VAR_0, VAR_1);
}
