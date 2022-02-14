
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cqe {int dummy; } ;
struct t4_cq {size_t sw_cidx; struct t4_cqe* sw_queue; scalar_t__ sw_in_use; } ;



__attribute__((used)) static inline struct t4_cqe *FUNC_0(struct t4_cq *VAR_0)
{
 if (VAR_0->sw_in_use)
  return &VAR_0->sw_queue[VAR_0->sw_cidx];
 return ((void*)0);
}
