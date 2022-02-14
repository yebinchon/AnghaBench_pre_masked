
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcom_lock {int dummy; } ;
struct dlm_rsb {int res_nodeid; struct dlm_ls* res_ls; } ;
struct dlm_rcom {unsigned long rc_id; scalar_t__ rc_buf; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {scalar_t__ ls_lvblen; } ;
struct dlm_lkb {scalar_t__ lkb_lvbptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int ,int ,int,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,struct rcom_lock*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

int FUNC_3(struct dlm_rsb *VAR_1, struct dlm_lkb *VAR_2)
{
 struct dlm_ls *VAR_3 = VAR_1->res_ls;
 struct dlm_rcom *VAR_4;
 struct dlm_mhandle *VAR_5;
 struct rcom_lock *VAR_6;
 int VAR_7, VAR_8 = sizeof(struct rcom_lock);

 if (VAR_2->lkb_lvbptr)
  VAR_8 += VAR_3->ls_lvblen;

 VAR_7 = FUNC_0(VAR_3, VAR_1->res_nodeid, VAR_0, VAR_8, &VAR_4, &VAR_5);
 if (VAR_7)
  goto out;

 VAR_6 = (struct rcom_lock *) VAR_4->rc_buf;
 FUNC_1(VAR_1, VAR_2, VAR_6);
 VAR_4->rc_id = (unsigned long) VAR_1;

 FUNC_2(VAR_3, VAR_5, VAR_4);
 out:
 return VAR_7;
}
