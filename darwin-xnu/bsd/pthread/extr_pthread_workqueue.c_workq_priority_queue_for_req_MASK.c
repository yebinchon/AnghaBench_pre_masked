
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
struct priority_queue {int dummy; } ;
struct workqueue {struct priority_queue wq_constrained_queue; struct priority_queue wq_overcommit_queue; struct priority_queue wq_special_queue; } ;
struct TYPE_3__ {int tr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct priority_queue *
FUNC_0(struct workqueue *VAR_2, workq_threadreq_t VAR_3)
{
 if (VAR_3->tr_flags & VAR_1) {
  return &VAR_2->wq_special_queue;
 } else if (VAR_3->tr_flags & VAR_0) {
  return &VAR_2->wq_overcommit_queue;
 } else {
  return &VAR_2->wq_constrained_queue;
 }
}
