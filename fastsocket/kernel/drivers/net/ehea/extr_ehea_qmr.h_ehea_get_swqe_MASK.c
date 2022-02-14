
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_queue {int current_q_offset; } ;
struct ehea_swqe {int dummy; } ;
struct ehea_qp {struct hw_queue hw_squeue; } ;


 int VAR_0 ;
 struct ehea_swqe* FUNC_0 (struct hw_queue*) ;

__attribute__((used)) static inline struct ehea_swqe *FUNC_1(struct ehea_qp *VAR_1,
           int *VAR_2)
{
 struct hw_queue *VAR_3 = &VAR_1->hw_squeue;
 struct ehea_swqe *VAR_4;

 *VAR_2 = (VAR_3->current_q_offset) >> (7 + VAR_0);
 VAR_4 = FUNC_0(&VAR_1->hw_squeue);

 return VAR_4;
}
