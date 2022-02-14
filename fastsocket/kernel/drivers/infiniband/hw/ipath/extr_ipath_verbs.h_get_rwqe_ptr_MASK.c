
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_rwqe {int dummy; } ;
struct ipath_rq {int max_sge; TYPE_1__* wq; } ;
struct ib_sge {int dummy; } ;
struct TYPE_2__ {scalar_t__ wq; } ;



__attribute__((used)) static inline struct ipath_rwqe *FUNC_0(struct ipath_rq *VAR_0,
           unsigned VAR_1)
{
 return (struct ipath_rwqe *)
  ((char *) VAR_0->wq->wq +
   (sizeof(struct ipath_rwqe) +
    VAR_0->max_sge * sizeof(struct ib_sge)) * VAR_1);
}
