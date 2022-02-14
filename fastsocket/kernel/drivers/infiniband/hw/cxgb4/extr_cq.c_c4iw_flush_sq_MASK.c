
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cidx; int in_use; int size; struct t4_swsqe* sw_sq; } ;
struct t4_wq {TYPE_1__ sq; } ;
struct t4_swsqe {scalar_t__ signaled; } ;
struct t4_cq {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct t4_wq*,struct t4_cq*,struct t4_swsqe*) ;

int FUNC_2(struct t4_wq *VAR_0, struct t4_cq *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct t4_swsqe *VAR_4 = &VAR_0->sq.sw_sq[VAR_0->sq.cidx + VAR_2];
 int VAR_5 = VAR_0->sq.in_use - VAR_2;

 FUNC_0(VAR_5 < 0);
 while (VAR_5--) {
  VAR_4->signaled = 0;
  FUNC_1(VAR_0, VAR_1, VAR_4);
  VAR_4++;
  if (VAR_4 == (VAR_0->sq.sw_sq + VAR_0->sq.size))
   VAR_4 = VAR_0->sq.sw_sq;
  VAR_3++;
 }
 return VAR_3;
}
