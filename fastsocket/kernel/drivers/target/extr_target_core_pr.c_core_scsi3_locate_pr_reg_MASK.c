
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_pr_registration {int dummy; } ;
struct se_session {int dummy; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {struct se_portal_group* se_tpg; } ;
struct se_device {int dummy; } ;
struct TYPE_2__ {int (* sess_get_initiator_sid ) (struct se_session*,unsigned char*,int) ;} ;


 int VAR_0 ;
 struct t10_pr_registration* FUNC_0 (struct se_device*,struct se_node_acl*,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (struct se_session*,unsigned char*,int) ;

__attribute__((used)) static struct t10_pr_registration *FUNC_3(
 struct se_device *VAR_1,
 struct se_node_acl *VAR_2,
 struct se_session *VAR_3)
{
 struct se_portal_group *VAR_4 = VAR_2->se_tpg;
 unsigned char VAR_5[VAR_0], *VAR_6 = ((void*)0);

 if (VAR_4->se_tpg_tfo->sess_get_initiator_sid != ((void*)0)) {
  FUNC_1(&VAR_5[0], 0, VAR_0);
  VAR_4->se_tpg_tfo->sess_get_initiator_sid(VAR_3, &VAR_5[0],
     VAR_0);
  VAR_6 = &VAR_5[0];
 }

 return FUNC_0(VAR_1, VAR_2, VAR_6);
}
