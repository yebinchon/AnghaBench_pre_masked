
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {struct ft_tpg* se_tpg_fabric_ptr; } ;
struct ft_tpg {TYPE_1__* lport_acl; } ;
struct TYPE_2__ {char* name; } ;



__attribute__((used)) static char *FUNC_0(struct se_portal_group *VAR_0)
{
 struct ft_tpg *VAR_1 = VAR_0->se_tpg_fabric_ptr;

 return VAR_1->lport_acl->name;
}
