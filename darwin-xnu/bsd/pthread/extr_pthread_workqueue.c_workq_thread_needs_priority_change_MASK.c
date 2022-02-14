
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
struct uthread {int uu_workq_pri; } ;
struct TYPE_4__ {scalar_t__ tr_qos; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct uthread*) ;

__attribute__((used)) static inline bool
FUNC_2(workq_threadreq_t VAR_0, struct uthread *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1)) {
  return 1;
 }

 return VAR_0->tr_qos != FUNC_0(VAR_1->uu_workq_pri);
}
