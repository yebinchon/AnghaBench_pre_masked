
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qp_list {int idx; struct c4iw_qp** qps; } ;
struct c4iw_qp {int ibqp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct qp_list *VAR_3 = VAR_2;
 struct c4iw_qp *VAR_4 = VAR_1;

 FUNC_0(&VAR_4->ibqp);
 VAR_3->qps[VAR_3->idx++] = VAR_4;
 return 0;
}
