
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int x86_saved_state_t ;
typedef int user_addr_t ;
typedef unsigned long long uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ thread_t ;
struct callstack {scalar_t__ nframes; unsigned long long* frames; } ;
struct arm_saved_state {int dummy; } ;
struct TYPE_6__ {int uesp; } ;
struct TYPE_4__ {int rsp; } ;
struct TYPE_5__ {TYPE_1__ isf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct arm_saved_state*) ;
 unsigned long long FUNC_4 (struct arm_saved_state*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,unsigned long long*,int) ;

__attribute__((used)) static void
FUNC_12(struct callstack *VAR_2, thread_t VAR_3)
{
 uint64_t VAR_4 = 0;
 FUNC_0(VAR_2->nframes < VAR_0);


 user_addr_t VAR_5;
 bool VAR_6;
 x86_saved_state_t *VAR_7;

 VAR_7 = FUNC_7(VAR_3);
 if (!VAR_7) {
  goto out;
 }

 VAR_6 = FUNC_8(VAR_7);
 if (VAR_6) {
     VAR_5 = FUNC_10(VAR_7)->isf.rsp;
 } else {
  VAR_5 = FUNC_9(VAR_7)->uesp;
 }

 if (VAR_3 == FUNC_2()) {
  (void)FUNC_1(VAR_5, (char *)&VAR_4,
   VAR_6 ? sizeof(uint64_t) : sizeof(uint32_t));
 } else {
  (void)FUNC_11(FUNC_5(FUNC_6(VAR_3)), VAR_5,
   &VAR_4, VAR_6 ? sizeof(uint64_t) : sizeof(uint32_t));
 }
out:
 VAR_2->frames[VAR_2->nframes++] = VAR_4;
}
