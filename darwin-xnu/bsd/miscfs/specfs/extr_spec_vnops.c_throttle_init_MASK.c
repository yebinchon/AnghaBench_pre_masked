
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_call_param_t ;
typedef int thread_call_func_t ;
struct _throttle_io_info_t {int throttle_next_wake_level; scalar_t__ throttle_is_fusion_with_priority; scalar_t__ throttle_disabled; scalar_t__* throttle_inflight_count; scalar_t__* throttle_last_IO_pid; int * throttle_uthlist; int throttle_timer_call; int throttle_lock; } ;
typedef int iosched ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int*,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct _throttle_io_info_t* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 () ;

void
FUNC_9(void)
{
        struct _throttle_io_info_t *VAR_8;
        int VAR_9;
 int VAR_10;






        VAR_6 = FUNC_4();
        VAR_5 = FUNC_3("throttle I/O", VAR_6);


 FUNC_7();




        VAR_4 = FUNC_2();

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
         VAR_8 = &VAR_2[VAR_9];

         FUNC_5(&VAR_8->throttle_lock, VAR_5, VAR_4);
  VAR_8->throttle_timer_call = FUNC_6((thread_call_func_t)VAR_7, (thread_call_param_t)VAR_8);

  for (VAR_10 = 0; VAR_10 <= VAR_1; VAR_10++) {
   FUNC_1(&VAR_8->throttle_uthlist[VAR_10]);
   VAR_8->throttle_last_IO_pid[VAR_10] = 0;
   VAR_8->throttle_inflight_count[VAR_10] = 0;
  }
  VAR_8->throttle_next_wake_level = VAR_1;
  VAR_8->throttle_disabled = 0;
  VAR_8->throttle_is_fusion_with_priority = 0;
 }
}
