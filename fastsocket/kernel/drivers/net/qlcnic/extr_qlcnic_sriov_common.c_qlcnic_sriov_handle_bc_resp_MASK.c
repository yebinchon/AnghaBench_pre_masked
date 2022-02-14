
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_vf_info {int state; int adapter; struct qlcnic_bc_trans* send_cmd; } ;
struct qlcnic_bc_trans {scalar_t__ trans_id; int curr_rsp_frag; int rsp_pay; int resp_cmpl; TYPE_1__* rsp_hdr; int rsp_pay_size; } ;
struct qlcnic_bc_hdr {scalar_t__ seq_id; } ;
struct TYPE_2__ {scalar_t__ num_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct qlcnic_bc_hdr *VAR_1,
     struct qlcnic_vf_info *VAR_2)
{
 struct qlcnic_bc_trans *VAR_3;
 u32 VAR_4;

 if (FUNC_4(VAR_0, &VAR_2->state))
  return;

 VAR_3 = VAR_2->send_cmd;

 if (VAR_3 == ((void*)0))
  goto clear_send;

 if (VAR_3->trans_id != VAR_1->seq_id)
  goto clear_send;

 VAR_4 = FUNC_2(VAR_3->rsp_pay_size,
            VAR_3->curr_rsp_frag);
 FUNC_3(VAR_2->adapter,
     (u32 *)(VAR_3->rsp_hdr + VAR_3->curr_rsp_frag),
     (u32 *)(VAR_3->rsp_pay + VAR_3->curr_rsp_frag),
     VAR_4);
 if (++VAR_3->curr_rsp_frag < VAR_3->rsp_hdr->num_frags)
  goto clear_send;

 FUNC_1(&VAR_3->resp_cmpl);

clear_send:
 FUNC_0(VAR_0, &VAR_2->state);
}
