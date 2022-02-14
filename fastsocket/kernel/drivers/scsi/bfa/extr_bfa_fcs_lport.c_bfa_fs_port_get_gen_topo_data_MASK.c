
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rnid_general_topology_data_s {void* num_attached_nodes; scalar_t__ phy_port_num; void* asso_type; } ;
struct bfa_fcs_lport_s {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct fc_rnid_general_topology_data_s*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcs_lport_s *VAR_1,
   struct fc_rnid_general_topology_data_s *VAR_2)
{
 FUNC_1(VAR_2, 0,
        sizeof(struct fc_rnid_general_topology_data_s));

 VAR_2->asso_type = FUNC_0(VAR_0);
 VAR_2->phy_port_num = 0;
 VAR_2->num_attached_nodes = FUNC_0(1);
}
