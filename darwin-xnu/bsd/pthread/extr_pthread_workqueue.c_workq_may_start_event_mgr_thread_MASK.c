
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue {scalar_t__* wq_thscheduled_count; } ;
struct TYPE_2__ {scalar_t__ qos_bucket; } ;
struct uthread {TYPE_1__ uu_workq_pri; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_1(struct workqueue *VAR_1, struct uthread *VAR_2)
{





 return VAR_1->wq_thscheduled_count[FUNC_0(VAR_0)] == 0 ||
   (VAR_2 && VAR_2->uu_workq_pri.qos_bucket == VAR_0);
}
