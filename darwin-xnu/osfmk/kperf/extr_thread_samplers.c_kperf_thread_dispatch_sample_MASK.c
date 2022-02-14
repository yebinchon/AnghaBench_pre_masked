
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ task_t ;
struct kperf_thread_dispatch {scalar_t__ kpthdi_dq_serialno; } ;
struct kperf_context {TYPE_1__* cur_thread; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ task; } ;


 int FUNC_0 (int,uintptr_t) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,char*,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

void
FUNC_8(struct kperf_thread_dispatch *VAR_4,
                             struct kperf_context *VAR_5)
{
 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_5 != ((void*)0));

 thread_t VAR_6 = VAR_5->cur_thread;

 FUNC_0(VAR_2 | VAR_1, (uintptr_t)FUNC_7(VAR_6));

 task_t VAR_7 = VAR_6->task;
 boolean_t VAR_8 = FUNC_5(VAR_7);
 size_t VAR_9 = VAR_8 ? 8 : 4;

 FUNC_2(VAR_6->task != VAR_3);
 uint64_t VAR_10 = FUNC_6(VAR_6);
 if (VAR_10 == 0) {
  goto error;
 }

 uint64_t VAR_11;
 if ((FUNC_3((user_addr_t)VAR_10,
             (char *)&VAR_11,
             VAR_9) != 0) ||
  (VAR_11 == 0))
 {
  goto error;
 }

 uint64_t VAR_12 =
  VAR_11 + FUNC_4(VAR_7);

 if (FUNC_3((user_addr_t)VAR_12,
            (char *)&(VAR_4->kpthdi_dq_serialno),
            VAR_9) == 0)
 {
  goto out;
 }

error:
 VAR_4->kpthdi_dq_serialno = 0;

out:
 FUNC_1(VAR_2 | VAR_0);
}
