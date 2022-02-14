
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_cq {int max_hw_cqe; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int cqe; } ;


 int VAR_0 ;
 struct ocrdma_cq* FUNC_0 (struct ib_cq*) ;

int FUNC_1(struct ib_cq *VAR_1, int VAR_2,
       struct ib_udata *VAR_3)
{
 int VAR_4 = 0;
 struct ocrdma_cq *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 < 1 || VAR_2 > VAR_5->max_hw_cqe) {
  VAR_4 = -VAR_0;
  return VAR_4;
 }
 VAR_1->cqe = VAR_2;
 return VAR_4;
}
