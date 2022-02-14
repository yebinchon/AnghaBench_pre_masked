
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ptr; } ;
struct pf_src_node {int af; int addr; TYPE_1__ rule; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static __inline int
FUNC_1(struct pf_src_node *VAR_0, struct pf_src_node *VAR_1)
{
 int VAR_2;

 if (VAR_0->rule.ptr > VAR_1->rule.ptr)
  return (1);
 if (VAR_0->rule.ptr < VAR_1->rule.ptr)
  return (-1);
 if ((VAR_2 = VAR_0->af - VAR_1->af) != 0)
  return (VAR_2);
 if ((VAR_2 = FUNC_0(&VAR_0->addr, &VAR_1->addr, VAR_0->af)) != 0)
  return (VAR_2);
 return (0);
}
