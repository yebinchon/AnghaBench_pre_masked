
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


typedef int u32 ;
struct TYPE_11__ {int length; } ;
struct TYPE_13__ {TYPE_4__ tl; } ;
struct vfpf_release_tlv {int vf_id; TYPE_6__ first_tlv; } ;
struct TYPE_12__ {scalar_t__ status; } ;
struct pfvf_general_resp_tlv {TYPE_5__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct bnx2x {int vf2pf_mbox_mapping; TYPE_3__* vf2pf_mbox; } ;
struct TYPE_9__ {struct pfvf_general_resp_tlv general_resp; } ;
struct TYPE_8__ {struct vfpf_release_tlv release; } ;
struct TYPE_10__ {TYPE_2__ resp; TYPE_1__ req; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct bnx2x*,struct vfpf_release_tlv*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct vfpf_release_tlv*) ;
 scalar_t__ FUNC_4 (struct bnx2x*,int*) ;
 int FUNC_5 (struct bnx2x*,scalar_t__*,int ) ;
 int FUNC_6 (struct bnx2x*,TYPE_6__*) ;
 int FUNC_7 (struct bnx2x*,TYPE_6__*,int ,int) ;

int FUNC_8(struct bnx2x *VAR_5)
{
 struct vfpf_release_tlv *VAR_6 = &VAR_5->vf2pf_mbox->req.release;
 struct pfvf_general_resp_tlv *VAR_7 = &VAR_5->vf2pf_mbox->resp.general_resp;
 u32 VAR_8, VAR_9;


 FUNC_7(VAR_5, &VAR_6->first_tlv, VAR_2, sizeof(*VAR_6));

 if (FUNC_4(VAR_5, &VAR_9)) {
  VAR_8 = -VAR_3;
  goto out;
 }

 VAR_6->vf_id = VAR_9;


 FUNC_2(VAR_5, VAR_6, VAR_6->first_tlv.tl.length, VAR_1,
        sizeof(struct channel_list_end_tlv));


 FUNC_3(VAR_5, VAR_6);


 VAR_8 = FUNC_5(VAR_5, &VAR_7->hdr.status, VAR_5->vf2pf_mbox_mapping);

 if (VAR_8)

  goto out;

 if (VAR_7->hdr.status == VAR_4) {

  FUNC_1(VAR_0, "vf released\n");
 } else {

  FUNC_0("PF failed our release request - are we out of sync? Response status: %d\n",
     VAR_7->hdr.status);
  VAR_8 = -VAR_3;
  goto out;
 }
out:
 FUNC_6(VAR_5, &VAR_6->first_tlv);

 return VAR_8;
}
