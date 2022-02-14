
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_name; int res_ls; } ;
struct dlm_lkb {int lkb_rqmode; int lkb_grmode; int lkb_status; int lkb_nodeid; int lkb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,int,int ) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_2 (struct dlm_lkb*) ;
 scalar_t__ FUNC_3 (struct dlm_rsb*,struct dlm_lkb*,int,int ,int*) ;
 scalar_t__ FUNC_4 (struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_6 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_7 (struct dlm_rsb*,int ,int *) ;
 scalar_t__ FUNC_8 (struct dlm_lkb*) ;
 int FUNC_9 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_11 (struct dlm_rsb*,struct dlm_lkb*) ;

__attribute__((used)) static int FUNC_12(struct dlm_rsb *VAR_5, struct dlm_lkb *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;



 if (FUNC_3(VAR_5, VAR_6, 1, 0, &VAR_8)) {
  FUNC_6(VAR_5, VAR_6);
  FUNC_10(VAR_5, VAR_6, 0);
  goto out;
 }





 if (VAR_8) {

  FUNC_9(VAR_5->res_ls, "deadlock %x node %d sts%d g%d r%d %s",
     VAR_6->lkb_id, VAR_6->lkb_nodeid, VAR_6->lkb_status,
     VAR_6->lkb_grmode, VAR_6->lkb_rqmode, VAR_5->res_name);
  FUNC_11(VAR_5, VAR_6);
  FUNC_10(VAR_5, VAR_6, -VAR_3);
  VAR_7 = -VAR_3;
  goto out;
 }







 if (FUNC_8(VAR_6)) {
  FUNC_7(VAR_5, VAR_1, ((void*)0));
  if (FUNC_0(VAR_5, VAR_6, 1, 0)) {
   FUNC_6(VAR_5, VAR_6);
   FUNC_10(VAR_5, VAR_6, 0);
   goto out;
  }

 }

 if (FUNC_4(VAR_6)) {
  VAR_7 = -VAR_4;
  FUNC_5(VAR_5, VAR_6);
  FUNC_1(VAR_5, VAR_6, VAR_0);
  FUNC_2(VAR_6);
  goto out;
 }

 VAR_7 = -VAR_2;
 FUNC_10(VAR_5, VAR_6, -VAR_2);
 out:
 return VAR_7;
}
