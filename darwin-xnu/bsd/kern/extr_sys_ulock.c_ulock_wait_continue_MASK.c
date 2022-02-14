
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wait_result_t ;
typedef TYPE_3__* uthread_t ;
struct TYPE_10__ {int ull_turnstile; } ;
typedef TYPE_4__ ull_t ;
typedef int uint ;
typedef int thread_t ;
typedef int int32_t ;
struct TYPE_7__ {int* retval; int flags; int old_owner; int owner_thread; } ;
struct TYPE_8__ {TYPE_1__ uus_ulock_wait_data; } ;
struct TYPE_9__ {TYPE_2__ uu_save; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (uintptr_t,int *,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) __attribute__((noreturn))
static void
FUNC_7(void * VAR_1, wait_result_t VAR_2)
{
 thread_t VAR_3 = FUNC_0();
 uthread_t VAR_4 = (uthread_t)FUNC_1(VAR_3);
 int VAR_5 = 0;

 ull_t *VAR_6 = (ull_t *)VAR_1;
 int32_t *VAR_7 = VAR_4->uu_save.uus_ulock_wait_data.retval;
 uint VAR_8 = VAR_4->uu_save.uus_ulock_wait_data.flags;
 thread_t VAR_9 = VAR_4->uu_save.uus_ulock_wait_data.owner_thread;
 thread_t VAR_10 = VAR_4->uu_save.uus_ulock_wait_data.old_owner;

 VAR_5 = FUNC_6(VAR_2);

 FUNC_3(VAR_6);
 FUNC_2((uintptr_t)VAR_6, &VAR_6->ull_turnstile, ((void*)0));

 FUNC_4(VAR_6, VAR_9, VAR_10, VAR_7);

 if ((VAR_8 & VAR_0) && (VAR_5 != 0)) {
  *VAR_7 = -VAR_5;
  VAR_5 = 0;
 }

 FUNC_5(VAR_5);
}
