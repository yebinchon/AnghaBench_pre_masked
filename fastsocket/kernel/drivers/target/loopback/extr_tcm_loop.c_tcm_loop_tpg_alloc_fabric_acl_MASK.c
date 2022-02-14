
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {int dummy; } ;
struct tcm_loop_nacl {struct se_node_acl se_node_acl; } ;
struct se_portal_group {int dummy; } ;


 int VAR_0 ;
 struct tcm_loop_nacl* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct se_node_acl *FUNC_2(
 struct se_portal_group *VAR_1)
{
 struct tcm_loop_nacl *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct tcm_loop_nacl), VAR_0);
 if (!VAR_2) {
  FUNC_1("Unable to allocate struct tcm_loop_nacl\n");
  return ((void*)0);
 }

 return &VAR_2->se_node_acl;
}
