
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct se_portal_group {struct ft_tpg* se_tpg_fabric_ptr; } ;
struct ft_tpg {int index; } ;



__attribute__((used)) static u16 FUNC_0(struct se_portal_group *VAR_0)
{
 struct ft_tpg *VAR_1 = VAR_0->se_tpg_fabric_ptr;





 return VAR_1->index;
}
