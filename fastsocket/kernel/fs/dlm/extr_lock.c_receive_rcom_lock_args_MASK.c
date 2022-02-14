
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcom_lock {int rl_asts; scalar_t__ rl_wait_type; int rl_status; int rl_lvb; int rl_grmode; int rl_rqmode; int rl_lvbseq; int rl_flags; int rl_exflags; int rl_lkid; int rl_ownpid; } ;
struct dlm_rsb {int dummy; } ;
struct TYPE_2__ {int h_length; int h_nodeid; } ;
struct dlm_rcom {TYPE_1__ rc_header; scalar_t__ rc_buf; } ;
struct dlm_ls {int ls_lvblen; } ;
struct dlm_lkb {int lkb_ownpid; int lkb_remid; int lkb_exflags; int lkb_flags; int lkb_lvbseq; int lkb_grmode; int lkb_lvbptr; int * lkb_astfn; int * lkb_bastfn; int lkb_rqmode; int lkb_nodeid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*,int ) ;

__attribute__((used)) static int FUNC_6(struct dlm_ls *VAR_12, struct dlm_lkb *VAR_13,
      struct dlm_rsb *VAR_14, struct dlm_rcom *VAR_15)
{
 struct rcom_lock *VAR_16 = (struct rcom_lock *) VAR_15->rc_buf;

 VAR_13->lkb_nodeid = VAR_15->rc_header.h_nodeid;
 VAR_13->lkb_ownpid = FUNC_2(VAR_16->rl_ownpid);
 VAR_13->lkb_remid = FUNC_2(VAR_16->rl_lkid);
 VAR_13->lkb_exflags = FUNC_2(VAR_16->rl_exflags);
 VAR_13->lkb_flags = FUNC_2(VAR_16->rl_flags) & 0x0000FFFF;
 VAR_13->lkb_flags |= VAR_2;
 VAR_13->lkb_lvbseq = FUNC_2(VAR_16->rl_lvbseq);
 VAR_13->lkb_rqmode = VAR_16->rl_rqmode;
 VAR_13->lkb_grmode = VAR_16->rl_grmode;


 VAR_13->lkb_bastfn = (VAR_16->rl_asts & VAR_0) ? &VAR_11 : ((void*)0);
 VAR_13->lkb_astfn = (VAR_16->rl_asts & VAR_1) ? &VAR_10 : ((void*)0);

 if (VAR_13->lkb_exflags & VAR_3) {
  int VAR_17 = VAR_15->rc_header.h_length - sizeof(struct dlm_rcom) -
    sizeof(struct rcom_lock);
  if (VAR_17 > VAR_12->ls_lvblen)
   return -VAR_7;
  VAR_13->lkb_lvbptr = FUNC_1(VAR_12);
  if (!VAR_13->lkb_lvbptr)
   return -VAR_8;
  FUNC_3(VAR_13->lkb_lvbptr, VAR_16->rl_lvb, VAR_17);
 }





 if (VAR_16->rl_wait_type == FUNC_0(VAR_6) &&
     FUNC_4(VAR_13)) {
  VAR_16->rl_status = VAR_4;
  VAR_13->lkb_grmode = VAR_5;
  FUNC_5(VAR_14, VAR_9);
 }

 return 0;
}
