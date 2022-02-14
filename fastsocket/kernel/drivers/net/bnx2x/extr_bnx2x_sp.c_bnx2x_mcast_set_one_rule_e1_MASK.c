
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bnx2x_mcast_config_data {int mac; } ;
struct mac_configuration_cmd {TYPE_1__* config_table; } ;
struct bnx2x_raw_obj {int cl_id; int func_id; scalar_t__ rdata; } ;
struct bnx2x_mcast_obj {struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;
struct TYPE_2__ {int flags; int clients_bit_vector; int pf_id; scalar_t__ vlan_id; int lsb_mac_addr; int middle_mac_addr; int msb_mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_4,
     struct bnx2x_mcast_obj *VAR_5, int VAR_6,
     union bnx2x_mcast_config_data *VAR_7,
     enum bnx2x_mcast_cmd VAR_8)
{
 struct bnx2x_raw_obj *VAR_9 = &VAR_5->raw;
 struct mac_configuration_cmd *VAR_10 =
  (struct mac_configuration_cmd *)(VAR_9->rdata);


 if ((VAR_8 == VAR_0) || (VAR_8 == VAR_1)) {
  FUNC_1(&VAR_10->config_table[VAR_6].msb_mac_addr,
          &VAR_10->config_table[VAR_6].middle_mac_addr,
          &VAR_10->config_table[VAR_6].lsb_mac_addr,
          VAR_7->mac);

  VAR_10->config_table[VAR_6].vlan_id = 0;
  VAR_10->config_table[VAR_6].pf_id = VAR_9->func_id;
  VAR_10->config_table[VAR_6].clients_bit_vector =
   FUNC_2(1 << VAR_9->cl_id);

  FUNC_0(VAR_10->config_table[VAR_6].flags,
    VAR_2,
    VAR_3);
 }
}
