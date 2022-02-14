
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int thread_call_t ;
struct workqueue {int wq_thread_call_last_run; int wq_timer_interval; int wq_delayed_call; int wq_reqcount; } ;
struct TYPE_4__ {int abstime; } ;
struct TYPE_3__ {int abstime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct workqueue*,int ,int ,int,int ) ;
 int FUNC_1 (struct workqueue*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,void*,int) ;
 int FUNC_7 (struct workqueue*,uintptr_t,int ,int) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static bool
FUNC_8(struct workqueue *VAR_8, int VAR_9)
{
 FUNC_2(!FUNC_5());

 if (!FUNC_7(VAR_8, VAR_3,
   VAR_2, VAR_4 |
   VAR_5)) {
  return 0;
 }

 uint64_t VAR_10 = FUNC_3();

 if (VAR_9 & VAR_1) {

 } else if (VAR_10 - VAR_8->wq_thread_call_last_run <= VAR_8->wq_timer_interval) {
  VAR_8->wq_timer_interval *= 2;
  if (VAR_8->wq_timer_interval > VAR_6.abstime) {
   VAR_8->wq_timer_interval = VAR_6.abstime;
  }
 } else if (VAR_10 - VAR_8->wq_thread_call_last_run > 2 * VAR_8->wq_timer_interval) {
  VAR_8->wq_timer_interval /= 2;
  if (VAR_8->wq_timer_interval < VAR_7.abstime) {
   VAR_8->wq_timer_interval = VAR_7.abstime;
  }
 }

 FUNC_0(VAR_0, VAR_8, VAR_8->wq_reqcount,
   FUNC_1(VAR_8), VAR_8->wq_timer_interval, 0);

 thread_call_t VAR_11 = VAR_8->wq_delayed_call;
 uintptr_t VAR_12 = VAR_3;
 uint64_t VAR_13 = VAR_10 + VAR_8->wq_timer_interval;
 if (FUNC_6(VAR_11, (void *)VAR_12, VAR_13)) {
  FUNC_4("delayed_call was already enqueued");
 }
 return 1;
}
