
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_queue {int current_q_offset; } ;
struct ehea_qp {struct hw_queue hw_rqueue1; } ;
struct ehea_cqe {int dummy; } ;


 int VAR_0 ;
 struct ehea_cqe* FUNC_0 (struct hw_queue*) ;

__attribute__((used)) static inline struct ehea_cqe *FUNC_1(struct ehea_qp *VAR_1, int *VAR_2)
{
 struct hw_queue *VAR_3 = &VAR_1->hw_rqueue1;

 *VAR_2 = (VAR_3->current_q_offset) >> (7 + VAR_0);
 return FUNC_0(VAR_3);
}
