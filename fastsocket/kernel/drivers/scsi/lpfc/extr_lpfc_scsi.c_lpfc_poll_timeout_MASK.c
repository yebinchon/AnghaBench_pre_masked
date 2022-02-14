
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ring; } ;
struct lpfc_hba {int cfg_poll; TYPE_1__ sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int *,int ) ;

void FUNC_2(unsigned long VAR_4)
{
 struct lpfc_hba *VAR_5 = (struct lpfc_hba *) VAR_4;

 if (VAR_5->cfg_poll & VAR_1) {
  FUNC_1(VAR_5,
   &VAR_5->sli.ring[VAR_3], VAR_2);

  if (VAR_5->cfg_poll & VAR_0)
   FUNC_0(VAR_5);
 }
}
