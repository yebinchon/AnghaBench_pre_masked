
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vf_pf_resc_request {int num_mac_filters; int num_vlan_filters; scalar_t__ num_mc_filters; scalar_t__ num_txqs; scalar_t__ num_rxqs; } ;
struct TYPE_2__ {int (* check ) (TYPE_1__*) ;} ;
struct bnx2x {TYPE_1__ vlans_pool; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct bnx2x *VAR_0, struct vf_pf_resc_request *VAR_1)
{
 u16 VAR_2 = 0;


 VAR_1->num_rxqs = 0;
 VAR_1->num_txqs = 0;


 VAR_1->num_mac_filters = 1;


 VAR_2 = VAR_0->vlans_pool.check(&VAR_0->vlans_pool);
 VAR_2 = 1 << FUNC_1(VAR_2);
 VAR_1->num_vlan_filters = VAR_2 / FUNC_0(VAR_0);


 VAR_1->num_mc_filters = 0;


}
