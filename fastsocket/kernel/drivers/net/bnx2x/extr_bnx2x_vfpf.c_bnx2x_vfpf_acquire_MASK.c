
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef void* u8 ;
typedef int u32 ;
struct TYPE_27__ {int length; } ;
struct TYPE_24__ {TYPE_3__ tl; } ;
struct TYPE_29__ {int num_sbs; int num_mc_filters; int num_vlan_filters; int num_mac_filters; void* num_rxqs; void* num_txqs; } ;
struct TYPE_26__ {scalar_t__ vf_os; int vf_id; } ;
struct vfpf_acquire_tlv {TYPE_16__ first_tlv; TYPE_5__ resc_request; int bulletin_addr; TYPE_2__ vfdev_info; } ;
struct TYPE_28__ {int status; } ;
struct pfvf_acquire_resp_tlv {TYPE_4__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_21__ {int num_sbs; struct pfvf_acquire_resp_tlv* current_mac_addr; TYPE_10__* hw_sbs; int num_mc_filters; int num_vlan_filters; int num_mac_filters; void* num_rxqs; void* num_txqs; } ;
struct TYPE_19__ {int chip_num; int fw_ver; int db_size; } ;
struct TYPE_31__ {scalar_t__ status; } ;
struct TYPE_23__ {TYPE_13__ resc; TYPE_11__ pfdev_info; TYPE_7__ hdr; } ;
struct TYPE_33__ {int chip_id; scalar_t__ flash_size; int chip_port_mode; int int_block; } ;
struct TYPE_32__ {int chip_id; } ;
struct bnx2x {int igu_sb_cnt; int igu_dsb_id; int flags; TYPE_15__ acquire_resp; TYPE_12__* dev; int fw_ver; int igu_base_sb; TYPE_9__ common; scalar_t__ mf_mode; scalar_t__ mf_ov; int db_size; TYPE_8__ link_params; TYPE_6__* vf2pf_mbox; int vf2pf_mbox_mapping; int pf2vf_bulletin_mapping; } ;
struct TYPE_22__ {struct pfvf_acquire_resp_tlv acquire_resp; } ;
struct TYPE_25__ {struct vfpf_acquire_tlv acquire; } ;
struct TYPE_30__ {TYPE_14__ resp; TYPE_1__ req; } ;
struct TYPE_20__ {TYPE_15__* dev_addr; } ;
struct TYPE_18__ {int hw_sb_id; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct bnx2x*,struct vfpf_acquire_tlv*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct vfpf_acquire_tlv*) ;
 scalar_t__ FUNC_4 (struct bnx2x*,int *) ;
 int FUNC_5 (struct bnx2x*,int *,int ) ;
 int FUNC_6 (struct bnx2x*,TYPE_16__*) ;
 int FUNC_7 (struct bnx2x*,TYPE_16__*,int ,int) ;
 scalar_t__ FUNC_8 (struct pfvf_acquire_resp_tlv*) ;
 int FUNC_9 (TYPE_15__*,struct pfvf_acquire_resp_tlv*,int) ;
 int FUNC_10 (TYPE_14__*,int ,int) ;
 int FUNC_11 (int ,int ,int) ;

int FUNC_12(struct bnx2x *VAR_16, u8 VAR_17, u8 VAR_18)
{
 int VAR_19 = 0, VAR_20 = 0;
 struct vfpf_acquire_tlv *VAR_21 = &VAR_16->vf2pf_mbox->req.acquire;
 struct pfvf_acquire_resp_tlv *VAR_22 = &VAR_16->vf2pf_mbox->resp.acquire_resp;
 u32 VAR_23;
 bool VAR_24 = 0;


 FUNC_7(VAR_16, &VAR_21->first_tlv, VAR_1, sizeof(*VAR_21));

 if (FUNC_4(VAR_16, &VAR_23)) {
  VAR_19 = -VAR_4;
  goto out;
 }

 VAR_21->vfdev_info.vf_id = VAR_23;
 VAR_21->vfdev_info.vf_os = 0;

 VAR_21->resc_request.num_rxqs = VAR_18;
 VAR_21->resc_request.num_txqs = VAR_17;
 VAR_21->resc_request.num_sbs = VAR_16->igu_sb_cnt;
 VAR_21->resc_request.num_mac_filters = VAR_13;
 VAR_21->resc_request.num_mc_filters = VAR_14;


 VAR_21->bulletin_addr = VAR_16->pf2vf_bulletin_mapping;


 FUNC_2(VAR_16, VAR_21, VAR_21->first_tlv.tl.length, VAR_2,
        sizeof(struct channel_list_end_tlv));


 FUNC_3(VAR_16, VAR_21);

 while (!VAR_24) {
  FUNC_1(VAR_0, "attempting to acquire resources\n");


  VAR_19 = FUNC_5(VAR_16,
           &VAR_22->hdr.status,
           VAR_16->vf2pf_mbox_mapping);


  if (VAR_19)
   goto out;


  FUNC_9(&VAR_16->acquire_resp, VAR_22, sizeof(VAR_16->acquire_resp));

  VAR_20++;




  if (VAR_16->acquire_resp.hdr.status == VAR_12) {
   FUNC_1(VAR_0, "resources acquired\n");
   VAR_24 = 1;
  } else if (VAR_16->acquire_resp.hdr.status ==
      VAR_11 &&
      VAR_20 < VAR_15) {
   FUNC_1(VAR_0,
      "PF unwilling to fulfill resource request. Try PF recommended amount\n");


   VAR_21->resc_request.num_txqs =
    VAR_16->acquire_resp.resc.num_txqs;
   VAR_21->resc_request.num_rxqs =
    VAR_16->acquire_resp.resc.num_rxqs;
   VAR_21->resc_request.num_sbs =
    VAR_16->acquire_resp.resc.num_sbs;
   VAR_21->resc_request.num_mac_filters =
    VAR_16->acquire_resp.resc.num_mac_filters;
   VAR_21->resc_request.num_vlan_filters =
    VAR_16->acquire_resp.resc.num_vlan_filters;
   VAR_21->resc_request.num_mc_filters =
    VAR_16->acquire_resp.resc.num_mc_filters;


   FUNC_10(&VAR_16->vf2pf_mbox->resp, 0,
          sizeof(union pfvf_tlvs));
  } else {

   FUNC_0("Failed to get the requested amount of resources: %d. Breaking...\n",
      VAR_16->acquire_resp.hdr.status);
   VAR_19 = -VAR_4;
   goto out;
  }
 }


 VAR_16->common.chip_id |= (VAR_16->acquire_resp.pfdev_info.chip_num & 0xffff);
 VAR_16->link_params.chip_id = VAR_16->common.chip_id;
 VAR_16->db_size = VAR_16->acquire_resp.pfdev_info.db_size;
 VAR_16->common.int_block = VAR_6;
 VAR_16->common.chip_port_mode = VAR_3;
 VAR_16->igu_dsb_id = -1;
 VAR_16->mf_ov = 0;
 VAR_16->mf_mode = 0;
 VAR_16->common.flash_size = 0;
 VAR_16->flags |=
  VAR_10 | VAR_9 | VAR_8 | VAR_7;
 VAR_16->igu_sb_cnt = 1;
 VAR_16->igu_base_sb = VAR_16->acquire_resp.resc.hw_sbs[0].hw_sb_id;
 FUNC_11(VAR_16->fw_ver, VAR_16->acquire_resp.pfdev_info.fw_ver,
  sizeof(VAR_16->fw_ver));

 if (FUNC_8(VAR_16->acquire_resp.resc.current_mac_addr))
  FUNC_9(VAR_16->dev->dev_addr,
         VAR_16->acquire_resp.resc.current_mac_addr,
         VAR_5);

out:
 FUNC_6(VAR_16, &VAR_21->first_tlv);
 return VAR_19;
}
