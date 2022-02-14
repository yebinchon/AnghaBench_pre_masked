
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int dummy; } ;
struct se_portal_group {int session_lock; } ;
struct se_node_acl {int dummy; } ;


 int FUNC_0 (struct se_portal_group*,struct se_node_acl*,struct se_session*,void*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(
 struct se_portal_group *VAR_0,
 struct se_node_acl *VAR_1,
 struct se_session *VAR_2,
 void *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_0->session_lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->session_lock, VAR_4);
}
