
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_15__ {int length; } ;
struct TYPE_19__ {TYPE_5__ tl; } ;
struct vfpf_set_q_filters_tlv {int n_mac_vlan_filters; TYPE_9__ first_tlv; TYPE_6__* filters; int vf_qid; int flags; } ;
struct TYPE_18__ {int status; } ;
struct pfvf_general_resp_tlv {TYPE_8__ hdr; } ;
struct pf_vf_bulletin_content {int * mac; } ;
struct channel_list_end_tlv {int dummy; } ;
struct bnx2x {int vf2pf_mbox_mapping; TYPE_7__* dev; TYPE_4__* pf2vf_bulletin; TYPE_3__* vf2pf_mbox; } ;
struct TYPE_17__ {int * dev_addr; } ;
struct TYPE_16__ {int * mac; int flags; } ;
struct TYPE_14__ {struct pf_vf_bulletin_content content; } ;
struct TYPE_12__ {struct pfvf_general_resp_tlv general_resp; } ;
struct TYPE_11__ {struct vfpf_set_q_filters_tlv set_q_filters; } ;
struct TYPE_13__ {TYPE_2__ resp; TYPE_1__ req; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnx2x*,struct vfpf_set_q_filters_tlv*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct vfpf_set_q_filters_tlv*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,int*,int ) ;
 int FUNC_6 (struct bnx2x*,TYPE_9__*) ;
 int FUNC_7 (struct bnx2x*,TYPE_9__*,int ,int) ;
 int FUNC_8 (int *,int *,int ) ;

int FUNC_9(struct bnx2x *VAR_11, u8 *VAR_12, u8 VAR_13, bool VAR_14)
{
 struct vfpf_set_q_filters_tlv *VAR_15 = &VAR_11->vf2pf_mbox->req.set_q_filters;
 struct pfvf_general_resp_tlv *VAR_16 = &VAR_11->vf2pf_mbox->resp.general_resp;
 struct pf_vf_bulletin_content VAR_17 = VAR_11->pf2vf_bulletin->content;
 int VAR_18 = 0;


 FUNC_7(VAR_11, &VAR_15->first_tlv, VAR_2,
   sizeof(*VAR_15));

 VAR_15->flags = VAR_10;
 VAR_15->vf_qid = VAR_13;
 VAR_15->n_mac_vlan_filters = 1;

 VAR_15->filters[0].flags = VAR_8;
 if (VAR_14)
  VAR_15->filters[0].flags |= VAR_9;


 FUNC_4(VAR_11);


 FUNC_8(VAR_15->filters[0].mac, VAR_12, VAR_4);


 FUNC_2(VAR_11, VAR_15, VAR_15->first_tlv.tl.length, VAR_1,
        sizeof(struct channel_list_end_tlv));


 FUNC_3(VAR_11, VAR_15);


 VAR_18 = FUNC_5(VAR_11, &VAR_16->hdr.status, VAR_11->vf2pf_mbox_mapping);
 if (VAR_18) {
  FUNC_0("failed to send message to pf. rc was %d\n", VAR_18);
  goto out;
 }


 while (VAR_16->hdr.status == VAR_6) {
  FUNC_1(VAR_0,
     "vfpf SET MAC failed. Check bulletin board for new posts\n");


  FUNC_8(VAR_11->dev->dev_addr, VAR_17.mac, VAR_4);


  if (FUNC_4(VAR_11) == VAR_5) {

   FUNC_8(VAR_15->filters[0].mac, VAR_11->dev->dev_addr,
          VAR_4);


   VAR_18 = FUNC_5(VAR_11, &VAR_16->hdr.status,
            VAR_11->vf2pf_mbox_mapping);
  } else {

   break;
  }
 }

 if (VAR_16->hdr.status != VAR_7) {
  FUNC_0("vfpf SET MAC failed: %d\n", VAR_16->hdr.status);
  VAR_18 = -VAR_3;
 }
out:
 FUNC_6(VAR_11, &VAR_15->first_tlv);

 return 0;
}
