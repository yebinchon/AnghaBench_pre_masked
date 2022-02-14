
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_vport_attr_s {int vport_state; int port_attr; } ;
struct bfa_fcs_vport_s {int sm; int lport; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bfa_vport_attr_s*,int ,int) ;
 int VAR_0 ;

void
FUNC_3(struct bfa_fcs_vport_s *VAR_1,
   struct bfa_vport_attr_s *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return;

 FUNC_2(VAR_2, 0, sizeof(struct bfa_vport_attr_s));

 FUNC_0(&VAR_1->lport, &VAR_2->port_attr);
 VAR_2->vport_state = FUNC_1(VAR_0, VAR_1->sm);
}
