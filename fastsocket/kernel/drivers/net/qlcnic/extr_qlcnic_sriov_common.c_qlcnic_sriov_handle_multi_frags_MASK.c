
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_bc_trans {scalar_t__ curr_rsp_frag; scalar_t__ curr_req_frag; void* trans_state; TYPE_1__* req_hdr; TYPE_2__* rsp_hdr; } ;
struct TYPE_4__ {scalar_t__ num_frags; } ;
struct TYPE_3__ {scalar_t__ num_frags; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct qlcnic_bc_trans *VAR_4,
         u8 VAR_5)
{
 if (VAR_5 == VAR_0) {
  VAR_4->curr_rsp_frag++;
  if (VAR_4->curr_rsp_frag < VAR_4->rsp_hdr->num_frags)
   VAR_4->trans_state = VAR_2;
  else
   VAR_4->trans_state = VAR_1;
 } else {
  VAR_4->curr_req_frag++;
  if (VAR_4->curr_req_frag < VAR_4->req_hdr->num_frags)
   VAR_4->trans_state = VAR_2;
  else
   VAR_4->trans_state = VAR_3;
 }
}
