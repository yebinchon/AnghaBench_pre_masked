
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int num_mc_filters; int num_vlan_filters; int num_mac_filters; int num_sbs; int num_txqs; int num_rxqs; } ;
struct TYPE_7__ {int vf_os; int vf_id; } ;
struct vfpf_acquire_tlv {int bulletin_addr; TYPE_4__ resc_request; TYPE_3__ vfdev_info; } ;
struct bnx2x_virtf {int bulletin_map; int abs_vfid; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_5__ {struct vfpf_acquire_tlv acquire; } ;
struct TYPE_6__ {TYPE_1__ req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,TYPE_4__*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2,
     struct bnx2x_vf_mbx *VAR_3)
{
 int VAR_4;
 struct vfpf_acquire_tlv *VAR_5 = &VAR_3->msg->req.acquire;


 FUNC_0(VAR_0,
    "VF[%d] ACQUIRE: vfdev_info- vf_id %d, vf_os %d resources- n_rxq-%d, n_txq-%d, n_sbs-%d, n_macs-%d, n_vlans-%d, n_mcs-%d\n",
    VAR_2->abs_vfid, VAR_5->vfdev_info.vf_id, VAR_5->vfdev_info.vf_os,
    VAR_5->resc_request.num_rxqs, VAR_5->resc_request.num_txqs,
    VAR_5->resc_request.num_sbs, VAR_5->resc_request.num_mac_filters,
    VAR_5->resc_request.num_vlan_filters,
    VAR_5->resc_request.num_mc_filters);


 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5->resc_request);


 VAR_2->bulletin_map = VAR_5->bulletin_addr;


 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
