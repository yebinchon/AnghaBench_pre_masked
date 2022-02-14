
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int dummy; } ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_remid; TYPE_1__ m_header; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {struct dlm_rsb* lkb_resource; } ;


 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_2 (struct dlm_rsb*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_3 (struct dlm_rsb*) ;
 scalar_t__ FUNC_4 (struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_ls*,char*,int ,int ) ;
 int FUNC_7 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_8 (struct dlm_rsb*) ;
 int FUNC_9 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_10 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_11 (struct dlm_rsb*) ;
 int FUNC_12 (struct dlm_lkb*,struct dlm_message*) ;

__attribute__((used)) static void FUNC_13(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 struct dlm_lkb *VAR_2;
 struct dlm_rsb *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1->m_remid, &VAR_2);
 if (VAR_4) {
  FUNC_6(VAR_0, "receive_grant from %d no lkb %x",
     VAR_1->m_header.h_nodeid, VAR_1->m_remid);
  return;
 }

 VAR_3 = VAR_2->lkb_resource;

 FUNC_3(VAR_3);
 FUNC_5(VAR_3);

 VAR_4 = FUNC_12(VAR_2, VAR_1);
 if (VAR_4)
  goto out;

 FUNC_10(VAR_2, VAR_1);
 if (FUNC_4(VAR_2))
  FUNC_7(VAR_2, VAR_1);
 FUNC_2(VAR_3, VAR_2, VAR_1);
 FUNC_9(VAR_3, VAR_2, 0);
 out:
 FUNC_11(VAR_3);
 FUNC_8(VAR_3);
 FUNC_0(VAR_2);
}
