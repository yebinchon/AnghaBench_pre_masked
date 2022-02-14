
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_swqe {int dummy; } ;
struct qib_sge {int dummy; } ;
struct qib_qp {int s_max_sge; scalar_t__ s_wq; } ;



__attribute__((used)) static inline struct qib_swqe *FUNC_0(struct qib_qp *VAR_0,
           unsigned VAR_1)
{
 return (struct qib_swqe *)((char *)VAR_0->s_wq +
         (sizeof(struct qib_swqe) +
          VAR_0->s_max_sge *
          sizeof(struct qib_sge)) * VAR_1);
}
