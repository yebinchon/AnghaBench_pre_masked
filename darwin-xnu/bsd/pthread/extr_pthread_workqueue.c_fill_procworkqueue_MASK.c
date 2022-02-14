
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wq_thactive_t ;
struct workqueue {scalar_t__ wq_nthreads; scalar_t__ wq_constrained_threads_scheduled; scalar_t__ wq_threads_scheduled; } ;
struct proc_workqueueinfo {scalar_t__ pwq_nthreads; int pwq_runthreads; int pwq_state; scalar_t__ pwq_blockedthreads; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct workqueue*) ;
 int FUNC_1 (struct workqueue*,int,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 struct workqueue* FUNC_3 (int ) ;
 int FUNC_4 (struct workqueue*) ;
 int FUNC_5 (struct workqueue*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int
FUNC_6(proc_t VAR_8, struct proc_workqueueinfo * VAR_9)
{
 struct workqueue *VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = 0;
 int VAR_12;

 if (VAR_10 == ((void*)0)) {
  return VAR_1;
 }
 bool VAR_13 = FUNC_4(VAR_10);
 if (!VAR_13) {
  return VAR_0;
 }

 wq_thactive_t VAR_14 = FUNC_0(VAR_10);
 VAR_12 = FUNC_1(VAR_10, VAR_14,
   VAR_3, ((void*)0), ((void*)0));
 if (VAR_14 & FUNC_2(VAR_2)) {
  VAR_12++;
 }
 VAR_9->pwq_nthreads = VAR_10->wq_nthreads;
 VAR_9->pwq_runthreads = VAR_12;
 VAR_9->pwq_blockedthreads = VAR_10->wq_threads_scheduled - VAR_12;
 VAR_9->pwq_state = 0;

 if (VAR_10->wq_constrained_threads_scheduled >= VAR_6) {
  VAR_9->pwq_state |= VAR_4;
 }

 if (VAR_10->wq_nthreads >= VAR_7) {
  VAR_9->pwq_state |= VAR_5;
 }

 FUNC_5(VAR_10);
 return VAR_11;
}
