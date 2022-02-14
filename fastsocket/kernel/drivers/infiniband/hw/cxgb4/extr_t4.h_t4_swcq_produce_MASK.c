
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cq {scalar_t__ sw_pidx; scalar_t__ size; int sw_in_use; } ;



__attribute__((used)) static inline void FUNC_0(struct t4_cq *VAR_0)
{
 VAR_0->sw_in_use++;
 if (++VAR_0->sw_pidx == VAR_0->size)
  VAR_0->sw_pidx = 0;
}
