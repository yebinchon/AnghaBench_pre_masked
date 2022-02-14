
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bfi_rport_create_req_s {int mh; int cisc; int vf_id; int vf_en; int fc_class; int local_pid; int lp_fwtag; int pid; int max_frmsz; int bfa_handle; } ;
struct TYPE_2__ {int cisc; int vf_id; int vf_en; int fc_class; int local_pid; scalar_t__ lp_tag; int pid; int max_frmsz; } ;
struct bfa_rport_s {int bfa; TYPE_1__ rport_info; int rport_tag; int reqq_wait; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct bfi_rport_create_req_s* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_7(struct bfa_rport_s *VAR_5)
{
 struct bfi_rport_create_req_s *VAR_6;




 VAR_6 = FUNC_2(VAR_5->bfa, VAR_1);
 if (!VAR_6) {
  FUNC_4(VAR_5->bfa, VAR_1, &VAR_5->reqq_wait);
  return VAR_0;
 }

 FUNC_5(VAR_6->mh, VAR_3, VAR_4,
   FUNC_0(VAR_5->bfa));
 VAR_6->bfa_handle = VAR_5->rport_tag;
 VAR_6->max_frmsz = FUNC_6(VAR_5->rport_info.max_frmsz);
 VAR_6->pid = VAR_5->rport_info.pid;
 VAR_6->lp_fwtag = FUNC_1(VAR_5->bfa, (u8)VAR_5->rport_info.lp_tag);
 VAR_6->local_pid = VAR_5->rport_info.local_pid;
 VAR_6->fc_class = VAR_5->rport_info.fc_class;
 VAR_6->vf_en = VAR_5->rport_info.vf_en;
 VAR_6->vf_id = VAR_5->rport_info.vf_id;
 VAR_6->cisc = VAR_5->rport_info.cisc;




 FUNC_3(VAR_5->bfa, VAR_1, VAR_6->mh);
 return VAR_2;
}
