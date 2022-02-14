
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct qlcnic_vlan_req {int vlan_id; } ;
struct qlcnic_nic_req {int * words; void* req_hdr; void* qhdr; } ;
struct qlcnic_mac_req {int mac_addr; int op; } ;
struct qlcnic_adapter {scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_4 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

int FUNC_5(struct qlcnic_adapter *VAR_2, u8 *VAR_3,
       u16 VAR_4, u8 VAR_5)
{
 struct qlcnic_nic_req VAR_6;
 struct qlcnic_mac_req *VAR_7;
 struct qlcnic_vlan_req *VAR_8;
 u64 VAR_9;

 FUNC_3(&VAR_6, 0, sizeof(struct qlcnic_nic_req));
 VAR_6.qhdr = FUNC_1(VAR_1 << 23);

 VAR_9 = VAR_0 | ((u64)VAR_2->portnum << 16);
 VAR_6.req_hdr = FUNC_1(VAR_9);

 VAR_7 = (struct qlcnic_mac_req *)&VAR_6.words[0];
 VAR_7->op = VAR_5;
 FUNC_2(VAR_7->mac_addr, VAR_3, 6);

 VAR_8 = (struct qlcnic_vlan_req *)&VAR_6.words[1];
 VAR_8->vlan_id = FUNC_0(VAR_4);

 return FUNC_4(VAR_2, (struct cmd_desc_type0 *)&VAR_6, 1);
}
