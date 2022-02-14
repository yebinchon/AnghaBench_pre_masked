
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int (* lpfc_handle_eratt ) (struct lpfc_hba*) ;} ;


 int FUNC_0 (struct lpfc_hba*) ;

void
FUNC_1(struct lpfc_hba *VAR_0)
{
 (*VAR_0->lpfc_handle_eratt)(VAR_0);
}
