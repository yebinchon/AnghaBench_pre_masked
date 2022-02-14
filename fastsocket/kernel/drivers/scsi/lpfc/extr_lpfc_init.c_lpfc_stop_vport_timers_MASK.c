
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int delayed_disc_tmo; int fc_fdmitmo; int els_tmofunc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_vport*) ;

void
FUNC_2(struct lpfc_vport *VAR_0)
{
 FUNC_0(&VAR_0->els_tmofunc);
 FUNC_0(&VAR_0->fc_fdmitmo);
 FUNC_0(&VAR_0->delayed_disc_tmo);
 FUNC_1(VAR_0);
 return;
}
