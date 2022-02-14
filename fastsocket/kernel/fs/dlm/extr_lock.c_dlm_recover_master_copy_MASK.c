
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcom_lock {void* rl_result; int rl_lkid; void* rl_remid; int rl_status; int rl_namelen; int rl_name; scalar_t__ rl_parent_lkid; } ;
struct dlm_rsb {int res_convertqueue; int res_waitqueue; } ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_rcom {TYPE_1__ rc_header; scalar_t__ rc_buf; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_2 (struct dlm_rsb*,struct dlm_lkb*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_lkb**) ;
 int FUNC_5 (struct dlm_ls*,int ,int ,int ,struct dlm_rsb**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dlm_rsb*) ;
 int FUNC_10 (struct dlm_ls*,char*,int,int ) ;
 int FUNC_11 (struct dlm_rsb*) ;
 int FUNC_12 (struct dlm_ls*,struct dlm_lkb*,struct dlm_rsb*,struct dlm_rcom*) ;
 int FUNC_13 (struct dlm_rsb*,int ) ;
 struct dlm_lkb* FUNC_14 (struct dlm_rsb*,int ,int ) ;
 int FUNC_15 (struct dlm_rsb*) ;

int FUNC_16(struct dlm_ls *VAR_4, struct dlm_rcom *VAR_5)
{
 struct rcom_lock *VAR_6 = (struct rcom_lock *) VAR_5->rc_buf;
 struct dlm_rsb *VAR_7;
 struct dlm_lkb *VAR_8;
 int VAR_9;

 if (VAR_6->rl_parent_lkid) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_5(VAR_4, VAR_6->rl_name, FUNC_6(VAR_6->rl_namelen),
    VAR_3, &VAR_7);
 if (VAR_9)
  goto out;

 FUNC_9(VAR_7);

 VAR_8 = FUNC_14(VAR_7, VAR_5->rc_header.h_nodeid, FUNC_7(VAR_6->rl_lkid));
 if (VAR_8) {
  VAR_9 = -VAR_0;
  goto out_remid;
 }

 VAR_9 = FUNC_4(VAR_4, &VAR_8);
 if (VAR_9)
  goto out_unlock;

 VAR_9 = FUNC_12(VAR_4, VAR_8, VAR_7, VAR_5);
 if (VAR_9) {
  FUNC_0(VAR_4, VAR_8);
  goto out_unlock;
 }

 FUNC_2(VAR_7, VAR_8);
 FUNC_1(VAR_7, VAR_8, VAR_6->rl_status);
 VAR_9 = 0;

 if (!FUNC_8(&VAR_7->res_waitqueue) || !FUNC_8(&VAR_7->res_convertqueue))
  FUNC_13(VAR_7, VAR_2);

 out_remid:


 VAR_6->rl_remid = FUNC_3(VAR_8->lkb_id);

 out_unlock:
 FUNC_15(VAR_7);
 FUNC_11(VAR_7);
 out:
 if (VAR_9)
  FUNC_10(VAR_4, "recover_master_copy %d %x", VAR_9,
     FUNC_7(VAR_6->rl_lkid));
 VAR_6->rl_result = FUNC_3(VAR_9);
 return VAR_9;
}
