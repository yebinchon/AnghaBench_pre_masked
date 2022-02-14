
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_rport_s {int pid; scalar_t__ pwwn; struct bfa_fcxp_s* fcxp; int fcxp_wqe; int fcs; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_1__* fabric; TYPE_2__* fcs; } ;
typedef int bfa_cb_fcxp_send_t ;
struct TYPE_4__ {int bfa; } ;
struct TYPE_3__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bfa_fcxp_s* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_rport_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct bfa_fcxp_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int,struct fchs_s*,int ,void*,int ,int ) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fchs_s*,int ,int ,int ,scalar_t__) ;
 int FUNC_8 (struct fchs_s*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_8, struct bfa_fcxp_s *VAR_9)
{
 struct bfa_fcs_rport_s *VAR_10 = VAR_8;
 struct bfa_fcs_lport_s *VAR_11 = VAR_10->port;
 struct fchs_s VAR_12;
 struct bfa_fcxp_s *VAR_13;
 int VAR_14;
 bfa_cb_fcxp_send_t VAR_15;

 FUNC_6(VAR_10->fcs, VAR_10->pid);

 VAR_13 = VAR_9 ? VAR_9 :
        FUNC_0(VAR_11->fcs, VAR_1);
 if (!VAR_13) {
  FUNC_1(VAR_11->fcs->bfa, &VAR_10->fcxp_wqe,
    FUNC_9, VAR_10, VAR_1);
  return;
 }
 VAR_10->fcxp = VAR_13;

 if (VAR_10->pwwn) {
  VAR_14 = FUNC_7(&VAR_12, FUNC_3(VAR_13),
    FUNC_2(VAR_11), 0, VAR_10->pwwn);
  VAR_15 = VAR_6;
 } else {
  VAR_14 = FUNC_8(&VAR_12, FUNC_3(VAR_13),
    FUNC_2(VAR_11), 0, VAR_10->pid);
  VAR_15 = VAR_7;
 }

 FUNC_4(VAR_13, ((void*)0), VAR_11->fabric->vf_id, VAR_11->lp_tag, VAR_0,
   VAR_2, VAR_14, &VAR_12, VAR_15,
   (void *)VAR_10, VAR_4, VAR_3);

 FUNC_5(VAR_10, VAR_5);
}
