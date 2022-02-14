
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int dummy; } ;
struct se_node_acl {int dummy; } ;
struct ft_node_acl {struct se_node_acl se_node_acl; } ;


 int VAR_0 ;
 struct ft_node_acl* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,struct ft_node_acl*) ;
 int FUNC_2 (char*) ;

struct se_node_acl *FUNC_3(struct se_portal_group *VAR_1)
{
 struct ft_node_acl *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_2("Unable to allocate struct ft_node_acl\n");
  return ((void*)0);
 }
 FUNC_1("acl %p\n", VAR_2);
 return &VAR_2->se_node_acl;
}
