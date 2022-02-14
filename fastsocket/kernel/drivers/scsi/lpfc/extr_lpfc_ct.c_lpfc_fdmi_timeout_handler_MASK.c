
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int fc_fdmitmo; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_2__ {char* nodename; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6(struct lpfc_vport *VAR_3)
{
 struct lpfc_nodelist *VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 if (VAR_4 && FUNC_0(VAR_4)) {
  if (FUNC_1()->nodename[0] != '\0')
   FUNC_2(VAR_3, VAR_4, VAR_1);
  else
   FUNC_4(&VAR_3->fc_fdmitmo, VAR_2 +
      FUNC_5(1000 * 60));
 }
 return;
}
