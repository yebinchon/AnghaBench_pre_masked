
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state {scalar_t__ id; scalar_t__ creatorid; } ;



__attribute__((used)) static __inline int
FUNC_0(struct pf_state *VAR_0, struct pf_state *VAR_1)
{
 if (VAR_0->id > VAR_1->id)
  return (1);
 if (VAR_0->id < VAR_1->id)
  return (-1);
 if (VAR_0->creatorid > VAR_1->creatorid)
  return (1);
 if (VAR_0->creatorid < VAR_1->creatorid)
  return (-1);

 return (0);
}
