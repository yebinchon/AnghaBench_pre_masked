
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int length; } ;
struct TYPE_13__ {TYPE_4__ tl; } ;
struct vfpf_set_q_filters_tlv {TYPE_6__ first_tlv; scalar_t__ vf_qid; int flags; int rx_mask; } ;
struct TYPE_12__ {int status; } ;
struct pfvf_general_resp_tlv {TYPE_5__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct bnx2x {int rx_mode; int vf2pf_mbox_mapping; TYPE_3__* vf2pf_mbox; } ;
struct TYPE_9__ {struct pfvf_general_resp_tlv general_resp; } ;
struct TYPE_8__ {struct vfpf_set_q_filters_tlv set_q_filters; } ;
struct TYPE_10__ {TYPE_2__ resp; TYPE_1__ req; } ;


 int FUNC_0 (char*,int) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bnx2x*,struct vfpf_set_q_filters_tlv*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct vfpf_set_q_filters_tlv*) ;
 int FUNC_4 (struct bnx2x*,int*,int ) ;
 int FUNC_5 (struct bnx2x*,TYPE_6__*) ;
 int FUNC_6 (struct bnx2x*,TYPE_6__*,int ,int) ;

int FUNC_7(struct bnx2x *VAR_12)
{
 int VAR_13 = VAR_12->rx_mode;
 struct vfpf_set_q_filters_tlv *VAR_14 = &VAR_12->vf2pf_mbox->req.set_q_filters;
 struct pfvf_general_resp_tlv *VAR_15 = &VAR_12->vf2pf_mbox->resp.general_resp;
 int VAR_16;


 FUNC_6(VAR_12, &VAR_14->first_tlv, VAR_1,
   sizeof(*VAR_14));

 FUNC_1(VAR_3, "Rx mode is %d\n", VAR_13);

 switch (VAR_13) {
 case 130:
  VAR_14->rx_mask = VAR_10;
  break;
 case 129:
  VAR_14->rx_mask = VAR_8;
  VAR_14->rx_mask |= VAR_9;
  VAR_14->rx_mask |= VAR_7;
  break;
 case 131:
  VAR_14->rx_mask = VAR_5;
  VAR_14->rx_mask |= VAR_9;
  VAR_14->rx_mask |= VAR_7;
  break;
 case 128:
  VAR_14->rx_mask = VAR_6;
  VAR_14->rx_mask |= VAR_5;
  VAR_14->rx_mask |= VAR_7;
  break;
 default:
  FUNC_0("BAD rx mode (%d)\n", VAR_13);
  VAR_16 = -VAR_2;
  goto out;
 }

 VAR_14->flags |= VAR_11;
 VAR_14->vf_qid = 0;


 FUNC_2(VAR_12, VAR_14, VAR_14->first_tlv.tl.length, VAR_0,
        sizeof(struct channel_list_end_tlv));


 FUNC_3(VAR_12, VAR_14);

 VAR_16 = FUNC_4(VAR_12, &VAR_15->hdr.status, VAR_12->vf2pf_mbox_mapping);
 if (VAR_16)
  FUNC_0("Sending a message failed: %d\n", VAR_16);

 if (VAR_15->hdr.status != VAR_4) {
  FUNC_0("Set Rx mode failed: %d\n", VAR_15->hdr.status);
  VAR_16 = -VAR_2;
 }
out:
 FUNC_5(VAR_12, &VAR_14->first_tlv);

 return VAR_16;
}
