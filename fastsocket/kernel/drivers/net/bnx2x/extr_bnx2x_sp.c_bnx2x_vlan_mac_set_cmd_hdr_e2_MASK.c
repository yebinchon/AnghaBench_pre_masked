
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_classify_cmd_header {int cmd_general_data; int func_id; int client_id; } ;
struct bnx2x_raw_obj {int func_id; int cl_id; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x_vlan_mac_obj*) ;

__attribute__((used)) static inline void FUNC_1(struct bnx2x *VAR_2,
 struct bnx2x_vlan_mac_obj *VAR_3, bool VAR_4, int VAR_5,
 struct eth_classify_cmd_header *VAR_6)
{
 struct bnx2x_raw_obj *VAR_7 = &VAR_3->raw;

 VAR_6->client_id = VAR_7->cl_id;
 VAR_6->func_id = VAR_7->func_id;


 VAR_6->cmd_general_data |=
  FUNC_0(VAR_3);

 if (VAR_4)
  VAR_6->cmd_general_data |= VAR_0;

 VAR_6->cmd_general_data |=
  (VAR_5 << VAR_1);
}
