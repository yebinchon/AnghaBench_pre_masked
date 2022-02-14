
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_queue {int dummy; } ;
struct ehea_rwqe {int dummy; } ;
struct ehea_qp {struct hw_queue hw_rqueue3; struct hw_queue hw_rqueue2; struct hw_queue hw_rqueue1; } ;


 struct ehea_rwqe* FUNC_0 (struct hw_queue*) ;

__attribute__((used)) static inline struct ehea_rwqe *FUNC_1(struct ehea_qp *VAR_0,
         int VAR_1)
{
 struct hw_queue *VAR_2;

 if (VAR_1 == 1)
  VAR_2 = &VAR_0->hw_rqueue1;
 else if (VAR_1 == 2)
  VAR_2 = &VAR_0->hw_rqueue2;
 else
  VAR_2 = &VAR_0->hw_rqueue3;

 return FUNC_0(VAR_2);
}
