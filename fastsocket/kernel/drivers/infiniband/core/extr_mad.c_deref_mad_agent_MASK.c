
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_agent_private {int comp; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ib_mad_agent_private *VAR_0)
{
 if (FUNC_0(&VAR_0->refcount))
  FUNC_1(&VAR_0->comp);
}
