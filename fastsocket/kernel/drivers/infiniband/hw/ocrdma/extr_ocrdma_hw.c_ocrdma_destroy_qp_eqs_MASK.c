
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_dev {int eq_cnt; int * qp_eq_tbl; } ;


 int FUNC_0 (struct ocrdma_dev*,int *) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->eq_cnt; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->qp_eq_tbl[VAR_1]);
}
