
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef int u8 ;
struct vf_pf_event_data {scalar_t__ vf_id; scalar_t__ msg_addr_hi; scalar_t__ msg_addr_lo; } ;
struct bnx2x_virtf {scalar_t__ abs_vfid; } ;
struct TYPE_7__ {scalar_t__ resp_msg_offset; } ;
struct bnx2x_vf_mbx {int flags; scalar_t__ vf_addr_hi; scalar_t__ vf_addr_lo; TYPE_4__* msg; TYPE_2__ first_tlv; int msg_mapping; } ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {scalar_t__ first_vf_in_pf; } ;
struct TYPE_10__ {TYPE_1__ sriov; } ;
struct TYPE_8__ {TYPE_2__ first_tlv; } ;
struct TYPE_9__ {TYPE_3__ req; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 struct bnx2x_virtf* FUNC_2 (struct bnx2x*,int ) ;
 TYPE_5__* FUNC_3 (struct bnx2x*) ;
 struct bnx2x_vf_mbx* FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (struct bnx2x*,int,int ,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct bnx2x*,scalar_t__) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_virtf*,int) ;

void FUNC_10(struct bnx2x *VAR_2, struct vf_pf_event_data *VAR_3)
{
 struct bnx2x_virtf *VAR_4;
 struct bnx2x_vf_mbx *VAR_5;
 u8 VAR_6;
 int VAR_7;

 FUNC_5(VAR_0,
    "vf pf event received: vfid %d, address_hi %x, address lo %x",
    VAR_3->vf_id, VAR_3->msg_addr_hi, VAR_3->msg_addr_lo);



 if (VAR_3->vf_id - FUNC_3(VAR_2)->sriov.first_vf_in_pf >
     FUNC_1(VAR_2)) {
  FUNC_0("Illegal vf_id %d max allowed: %d\n",
     VAR_3->vf_id, FUNC_1(VAR_2));
  goto mbx_done;
 }
 VAR_6 = FUNC_7(VAR_2, VAR_3->vf_id);
 VAR_5 = FUNC_4(VAR_2, VAR_6);




 if (VAR_5->flags & VAR_1) {
  FUNC_0("Previous message is still being processed, vf_id %d\n",
     VAR_3->vf_id);
  goto mbx_done;
 }
 VAR_4 = FUNC_2(VAR_2, VAR_6);


 VAR_5->vf_addr_hi = VAR_3->msg_addr_hi;
 VAR_5->vf_addr_lo = VAR_3->msg_addr_lo;
 FUNC_5(VAR_0, "mailbox vf address hi 0x%x, lo 0x%x, offset 0x%x\n",
    VAR_5->vf_addr_hi, VAR_5->vf_addr_lo, VAR_5->first_tlv.resp_msg_offset);


 VAR_7 = FUNC_6(VAR_2, 1, VAR_5->msg_mapping, VAR_4->abs_vfid,
      VAR_5->vf_addr_hi, VAR_5->vf_addr_lo,
      sizeof(union vfpf_tlvs)/4);
 if (VAR_7) {
  FUNC_0("Failed to copy request VF %d\n", VAR_4->abs_vfid);
  goto mbx_error;
 }


 VAR_5->first_tlv = VAR_5->msg->req.first_tlv;


 FUNC_8(VAR_2, VAR_4, VAR_5);
 goto mbx_done;

mbx_error:
 FUNC_9(VAR_2, VAR_4, 0);
mbx_done:
 return;
}
