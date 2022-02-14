
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_remid; TYPE_1__ m_header; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int dummy; } ;


 int FUNC_0 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_3 (struct dlm_ls*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 struct dlm_lkb *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1->m_remid, &VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_0, "receive_unlock_reply from %d no lkb %x",
     VAR_1->m_header.h_nodeid, VAR_1->m_remid);
  return;
 }

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2);
}
