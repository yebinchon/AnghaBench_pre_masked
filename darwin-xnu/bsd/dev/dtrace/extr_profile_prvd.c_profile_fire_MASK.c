
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int cpsr; int pc; } ;
typedef TYPE_2__ x86_saved_state_t ;
struct TYPE_15__ {int rip; } ;
struct TYPE_17__ {int cpsr; int pc; TYPE_1__ isf; } ;
typedef TYPE_3__ x86_saved_state64_t ;
struct TYPE_18__ {int eip; } ;
typedef TYPE_4__ x86_saved_state32_t ;
struct TYPE_19__ {int prof_id; } ;
typedef TYPE_5__ profile_probe_t ;
struct TYPE_20__ {scalar_t__ profc_interval; scalar_t__ profc_expected; TYPE_5__* profc_probe; } ;
typedef TYPE_6__ profile_probe_percpu_t ;
typedef scalar_t__ hrtime_t ;
typedef TYPE_2__ arm_saved_state_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int,int,scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;
 TYPE_4__* FUNC_9 (TYPE_2__*) ;
 TYPE_3__* FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_1)
{
 profile_probe_percpu_t *VAR_2 = VAR_1;
 profile_probe_t *VAR_3 = VAR_2->profc_probe;
 hrtime_t VAR_4;

 VAR_4 = FUNC_2() - VAR_2->profc_expected;
 VAR_2->profc_expected += VAR_2->profc_interval;


 x86_saved_state_t *VAR_5 = FUNC_4(FUNC_1());

 if (((void*)0) != VAR_5) {

  FUNC_3(VAR_3->prof_id, FUNC_10(VAR_5)->isf.rip, 0x0, VAR_4, 0, 0);

 } else {
  FUNC_8(FUNC_1(), VAR_0);

  x86_saved_state_t *VAR_6 = (x86_saved_state_t *)FUNC_5(FUNC_1());

  if (((void*)0) == VAR_6) {

   FUNC_3(VAR_3->prof_id, 0xcafebabe,
       0x0, VAR_4, 0, 0);
  } else if (FUNC_7(VAR_6)) {
   x86_saved_state64_t *VAR_7 = FUNC_10(VAR_6);

   FUNC_3(VAR_3->prof_id, 0x0, VAR_7->isf.rip, VAR_4, 0, 0);
  } else {
   x86_saved_state32_t *VAR_8 = FUNC_9(VAR_6);

   FUNC_3(VAR_3->prof_id, 0x0, VAR_8->eip, VAR_4, 0, 0);
  }
 }
}
