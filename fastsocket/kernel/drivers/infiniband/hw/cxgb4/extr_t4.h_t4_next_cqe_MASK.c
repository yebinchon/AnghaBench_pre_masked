
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cqe {int dummy; } ;
struct t4_cq {size_t sw_cidx; struct t4_cqe* sw_queue; scalar_t__ sw_in_use; scalar_t__ error; } ;


 int VAR_0 ;
 int FUNC_0 (struct t4_cq*,struct t4_cqe**) ;

__attribute__((used)) static inline int FUNC_1(struct t4_cq *VAR_1, struct t4_cqe **VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->error)
  VAR_3 = -VAR_0;
 else if (VAR_1->sw_in_use)
  *VAR_2 = &VAR_1->sw_queue[VAR_1->sw_cidx];
 else
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 return VAR_3;
}
