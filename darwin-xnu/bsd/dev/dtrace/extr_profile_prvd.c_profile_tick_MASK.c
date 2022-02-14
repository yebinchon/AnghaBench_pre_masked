
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int pc; } ;
typedef TYPE_2__ x86_saved_state_t ;
struct TYPE_14__ {int rip; } ;
struct TYPE_16__ {int pc; TYPE_1__ isf; } ;
typedef TYPE_3__ x86_saved_state64_t ;
struct TYPE_17__ {int eip; } ;
typedef TYPE_4__ x86_saved_state32_t ;
struct TYPE_18__ {int prof_id; } ;
typedef TYPE_5__ profile_probe_t ;
typedef TYPE_2__ arm_saved_state_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_4__* FUNC_7 (TYPE_2__*) ;
 TYPE_3__* FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 profile_probe_t *VAR_2 = VAR_1;


 x86_saved_state_t *VAR_3 = FUNC_2(FUNC_0());

 if (((void*)0) != VAR_3) {

  FUNC_1(VAR_2->prof_id, FUNC_8(VAR_3)->isf.rip, 0x0, 0, 0, 0);
 } else {
  FUNC_6(FUNC_0(), VAR_0);

  x86_saved_state_t *VAR_4 = (x86_saved_state_t *)FUNC_3(FUNC_0());

  if (((void*)0) == VAR_4) {

   FUNC_1(VAR_2->prof_id, 0xcafebabe,
       0x0, 0, 0, 0);
  } else if (FUNC_5(VAR_4)) {
   x86_saved_state64_t *VAR_5 = FUNC_8(VAR_4);

   FUNC_1(VAR_2->prof_id, 0x0, VAR_5->isf.rip, 0, 0, 0);
  } else {
   x86_saved_state32_t *VAR_6 = FUNC_7(VAR_4);

   FUNC_1(VAR_2->prof_id, 0x0, VAR_6->eip, 0, 0, 0);
  }
 }
}
