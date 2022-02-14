
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct vf_pf_resc_request {scalar_t__ num_rxqs; scalar_t__ num_txqs; scalar_t__ num_sbs; scalar_t__ num_mac_filters; scalar_t__ num_vlan_filters; } ;
struct bnx2x_virtf {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*,struct bnx2x_virtf*) ;
 scalar_t__ FUNC_1 (struct bnx2x_virtf*) ;
 scalar_t__ FUNC_2 (struct bnx2x_virtf*) ;
 scalar_t__ FUNC_3 (struct bnx2x_virtf*) ;
 scalar_t__ FUNC_4 (struct bnx2x_virtf*) ;
 scalar_t__ FUNC_5 (struct bnx2x_virtf*) ;

__attribute__((used)) static
int FUNC_6(struct bnx2x *VAR_0, struct bnx2x_virtf *VAR_1,
       struct vf_pf_resc_request *VAR_2)
{
 u8 VAR_3 = FUNC_2(VAR_1) ? : FUNC_0(VAR_0, VAR_1);
 u8 VAR_4 = FUNC_4(VAR_1) ? : FUNC_0(VAR_0, VAR_1);

 return ((VAR_2->num_rxqs <= VAR_3) &&
  (VAR_2->num_txqs <= VAR_4) &&
  (VAR_2->num_sbs <= FUNC_3(VAR_1)) &&
  (VAR_2->num_mac_filters <= FUNC_1(VAR_1)) &&
  (VAR_2->num_vlan_filters <= FUNC_5(VAR_1)));
}
