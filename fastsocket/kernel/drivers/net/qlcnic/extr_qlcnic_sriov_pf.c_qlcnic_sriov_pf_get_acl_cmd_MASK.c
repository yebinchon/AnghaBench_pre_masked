
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vport {int vlan_mode; int vlan; } ;
struct qlcnic_vf_info {struct qlcnic_vport* vp; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_bc_trans {TYPE_1__* req_hdr; struct qlcnic_vf_info* vf; } ;
struct TYPE_3__ {int cmd_op; } ;





__attribute__((used)) static int FUNC_0(struct qlcnic_bc_trans *VAR_0,
           struct qlcnic_cmd_args *VAR_1)
{
 struct qlcnic_vf_info *VAR_2 = VAR_0->vf;
 struct qlcnic_vport *VAR_3 = VAR_2->vp;
 u8 VAR_4, VAR_5 = VAR_3->vlan_mode;

 VAR_4 = VAR_0->req_hdr->cmd_op;
 VAR_1->rsp.arg[0] = (VAR_4 & 0xffff) | 14 << 16 | 1 << 25;

 switch (VAR_5) {
 case 129:
  VAR_1->rsp.arg[1] = VAR_5 | 1 << 8;
  VAR_1->rsp.arg[2] = 1 << 16;
  break;
 case 128:
  VAR_1->rsp.arg[1] = VAR_5 | 1 << 8 | VAR_3->vlan << 16;
  break;
 }

 return 0;
}
