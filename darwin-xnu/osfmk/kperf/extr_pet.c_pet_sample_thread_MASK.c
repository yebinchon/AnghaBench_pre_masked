
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int task_t ;
struct kperf_context {int cur_pid; int cur_task; TYPE_1__* cur_thread; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int kperf_pet_cnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct kperf_context*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(int VAR_11, task_t VAR_12, thread_t VAR_13, uint32_t VAR_14)
{
 FUNC_4(VAR_9, VAR_3);

 uint32_t VAR_15 = VAR_6 | VAR_7;

 FUNC_0(VAR_4 | VAR_1);


 struct kperf_context VAR_16 = {
  .cur_thread = VAR_13,
  .cur_task = VAR_12,
  .cur_pid = VAR_11,
 };

 boolean_t VAR_17 = FUNC_2(VAR_13);





 if (VAR_17) {
  FUNC_3(VAR_13, VAR_2);
 } else if ((VAR_13->kperf_pet_cnt % VAR_14) != 0) {
  VAR_15 |= VAR_5;
 }
 VAR_13->kperf_pet_cnt++;

 FUNC_1(VAR_10, &VAR_16, VAR_8, VAR_15);

 FUNC_0(VAR_4 | VAR_0);
}
