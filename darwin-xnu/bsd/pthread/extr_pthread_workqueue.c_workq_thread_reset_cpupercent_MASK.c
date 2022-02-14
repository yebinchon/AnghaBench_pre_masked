
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
struct TYPE_7__ {int trp_flags; scalar_t__ trp_refillms; int trp_cpupercent; } ;
typedef TYPE_2__ workq_threadreq_param_t ;
typedef int uint64_t ;
struct uthread {int uu_workq_flags; } ;
struct TYPE_6__ {int tr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct uthread* FUNC_1 () ;
 TYPE_2__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(workq_threadreq_t VAR_6, struct uthread *VAR_7)
{
 FUNC_0(VAR_7 == FUNC_1());
 workq_threadreq_param_t VAR_8 = { };

 if (VAR_6 && (VAR_6->tr_flags & VAR_4)) {
  VAR_8 = FUNC_2(VAR_6);
 }

 if (VAR_7->uu_workq_flags & VAR_5) {





  FUNC_3(VAR_2, 0, 0);
  VAR_7->uu_workq_flags &= ~VAR_5;
 }

 if (VAR_8.trp_flags & VAR_3) {
  FUNC_3(VAR_1, VAR_8.trp_cpupercent,
    (uint64_t)VAR_8.trp_refillms * VAR_0);
  VAR_7->uu_workq_flags |= VAR_5;
 }
}
