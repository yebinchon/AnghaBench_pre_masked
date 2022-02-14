
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
struct TYPE_7__ {int trp_flags; int trp_pri; } ;
typedef TYPE_2__ workq_threadreq_param_t ;
typedef int thread_qos_t ;
struct TYPE_6__ {int tr_flags; int tr_qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int
FUNC_3(workq_threadreq_t VAR_2)
{
 thread_qos_t VAR_3 = VAR_2->tr_qos;

 if (VAR_2->tr_flags & VAR_1) {
  workq_threadreq_param_t VAR_4 = FUNC_1(VAR_2);
  FUNC_0(VAR_4.trp_flags & VAR_0);
  return VAR_4.trp_pri;
 }
 return FUNC_2(VAR_3);
}
