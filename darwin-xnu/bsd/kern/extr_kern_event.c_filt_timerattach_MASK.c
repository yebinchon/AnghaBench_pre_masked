
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * thread_call_t ;
typedef int thread_call_param_t ;
struct knote {int kn_sfflags; int kn_hookid; int kn_flags; int * kn_hook; } ;
struct kevent_internal_s {int dummy; } ;
struct filt_timer_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct knote*) ;
 int FUNC_1 (struct knote*,struct filt_timer_params*) ;
 int FUNC_2 (struct knote*) ;
 int VAR_9 ;
 int FUNC_3 (struct kevent_internal_s*,struct filt_timer_params*) ;
 int FUNC_4 (struct knote*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_10 ;
 int * FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct knote *VAR_11, struct kevent_internal_s *VAR_12)
{
 thread_call_t VAR_13;
 struct filt_timer_params VAR_14;
 int VAR_15;

 if ((VAR_15 = FUNC_3(VAR_12, &VAR_14)) != 0) {
  FUNC_4(VAR_11, VAR_15);
  return 0;
 }

 VAR_13 = FUNC_6(VAR_9,
                 (thread_call_param_t)VAR_11, VAR_6,
                 VAR_5);

 if (((void*)0) == VAR_13) {
  FUNC_4(VAR_11, VAR_0);
  return 0;
 }

 FUNC_1(VAR_11, &VAR_14);
 VAR_11->kn_hook = VAR_13;
 VAR_11->kn_flags |= VAR_1;
 FUNC_5(&VAR_11->kn_hookid, VAR_7, VAR_10);


 if (VAR_11->kn_sfflags & VAR_4)
  VAR_11->kn_flags |= VAR_2;

 if (FUNC_0(VAR_11)) {
  FUNC_5(&VAR_11->kn_hookid, VAR_8, VAR_10);
  return VAR_3;
 } else {
  FUNC_2(VAR_11);
  return 0;
 }
}
