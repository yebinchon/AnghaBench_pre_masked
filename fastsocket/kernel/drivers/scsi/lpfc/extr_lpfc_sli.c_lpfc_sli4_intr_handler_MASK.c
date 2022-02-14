
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fcp_eq_hdl; } ;
struct lpfc_hba {int cfg_fcp_io_channel; TYPE_1__ sli4_hba; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int) ;

irqreturn_t
FUNC_2(int VAR_2, void *VAR_3)
{
 struct lpfc_hba *VAR_4;
 irqreturn_t VAR_5;
 bool VAR_6 = 0;
 int VAR_7;


 VAR_4 = (struct lpfc_hba *)VAR_3;

 if (FUNC_1(!VAR_4))
  return VAR_1;




 for (VAR_7 = 0; VAR_7 < VAR_4->cfg_fcp_io_channel; VAR_7++) {
  VAR_5 = FUNC_0(VAR_2,
     &VAR_4->sli4_hba.fcp_eq_hdl[VAR_7]);
  if (VAR_5 == VAR_0)
   VAR_6 |= 1;
 }

 return (VAR_6 == 1) ? VAR_0 : VAR_1;
}
