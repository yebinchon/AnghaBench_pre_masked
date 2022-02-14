
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_swqe {int dummy; } ;
struct ipath_sge {int dummy; } ;
struct ipath_qp {int s_max_sge; scalar_t__ s_wq; } ;



__attribute__((used)) static inline struct ipath_swqe *FUNC_0(struct ipath_qp *VAR_0,
           unsigned VAR_1)
{
 return (struct ipath_swqe *)((char *)VAR_0->s_wq +
         (sizeof(struct ipath_swqe) +
          VAR_0->s_max_sge *
          sizeof(struct ipath_sge)) * VAR_1);
}
