
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_nodeid; scalar_t__ res_first_lkid; } ;
struct dlm_message {int m_nodeid; int m_lkid; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_flags; int lkb_id; struct dlm_rsb* lkb_resource; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dlm_lkb*) ;
 int FUNC_3 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_4 (struct dlm_rsb*) ;
 scalar_t__ FUNC_5 (struct dlm_lkb*) ;
 int FUNC_6 (struct dlm_rsb*) ;
 int FUNC_7 (struct dlm_ls*,char*,int ,int ) ;
 int FUNC_8 (struct dlm_ls*,char*) ;
 int FUNC_9 (struct dlm_rsb*) ;
 int FUNC_10 (struct dlm_rsb*) ;
 int FUNC_11 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_12 (struct dlm_lkb*,int ) ;
 int FUNC_13 (struct dlm_lkb*) ;
 int FUNC_14 (struct dlm_rsb*) ;

__attribute__((used)) static void FUNC_15(struct dlm_ls *VAR_1, struct dlm_message *VAR_2)
{
 struct dlm_lkb *VAR_3;
 struct dlm_rsb *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_2->m_lkid, &VAR_3);
 if (VAR_5) {
  FUNC_8(VAR_1, "receive_lookup_reply no lkb");
  return;
 }




 VAR_4 = VAR_3->lkb_resource;
 FUNC_4(VAR_4);
 FUNC_6(VAR_4);

 VAR_5 = FUNC_12(VAR_3, VAR_0);
 if (VAR_5)
  goto out;

 VAR_6 = VAR_2->m_nodeid;
 if (VAR_6 == FUNC_1()) {
  VAR_4->res_nodeid = 0;
  VAR_6 = 0;
  VAR_4->res_first_lkid = 0;
 } else {

  VAR_4->res_nodeid = VAR_6;
 }

 if (FUNC_5(VAR_3)) {
  FUNC_7(VAR_1, "receive_lookup_reply %x unlock %x",
     VAR_3->lkb_id, VAR_3->lkb_flags);
  FUNC_11(VAR_4, VAR_3);
  FUNC_13(VAR_3);
  goto out_list;
 }

 FUNC_0(VAR_4, VAR_3);

 out_list:
 if (!VAR_6)
  FUNC_9(VAR_4);
 out:
 FUNC_14(VAR_4);
 FUNC_10(VAR_4);
 FUNC_2(VAR_3);
}
