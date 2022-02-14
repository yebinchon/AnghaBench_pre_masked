
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; int port_state; int fc_plogi_cnt; scalar_t__ num_disc_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,scalar_t__,int ,int,int ) ;

void
FUNC_2(struct lpfc_vport *VAR_3)
{
 int VAR_4;

 if (VAR_3->num_disc_nodes)
  VAR_3->num_disc_nodes--;


 FUNC_1(VAR_3, VAR_1, VAR_2,
    "0232 Continue discovery with %d PLOGIs to go "
    "Data: x%x x%x x%x\n",
    VAR_3->num_disc_nodes, VAR_3->fc_plogi_cnt,
    VAR_3->fc_flag, VAR_3->port_state);

 if (VAR_3->fc_flag & VAR_0)

  VAR_4 = FUNC_0(VAR_3);

 return;
}
