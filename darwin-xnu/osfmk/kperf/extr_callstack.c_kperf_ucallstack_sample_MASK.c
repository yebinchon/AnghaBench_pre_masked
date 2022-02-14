
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * thread_t ;
struct kperf_context {int * cur_thread; } ;
struct callstack {scalar_t__ nframes; int flags; scalar_t__ frames; } ;


 int FUNC_0 (int,uintptr_t,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,uintptr_t*,scalar_t__,scalar_t__*,int*) ;
 int FUNC_3 (struct callstack*,int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(struct callstack *VAR_11, struct kperf_context *VAR_12)
{
 thread_t VAR_13;
 bool VAR_14 = 0;
 int VAR_15;

 FUNC_1(VAR_11 != ((void*)0));
 FUNC_1(VAR_12 != ((void*)0));
 FUNC_1(VAR_11->nframes <= VAR_7);
 FUNC_1(FUNC_4() == VAR_10);

 VAR_13 = VAR_12->cur_thread;
 FUNC_1(VAR_13 != ((void*)0));

 FUNC_0(VAR_9 | VAR_4, (uintptr_t)FUNC_5(VAR_13),
  VAR_11->nframes);

 VAR_11->flags = 0;

 VAR_15 = FUNC_2(VAR_13, (uintptr_t *)VAR_11->frames,
  VAR_11->nframes - 1, &VAR_11->nframes, &VAR_14);
 VAR_11->flags |= VAR_1;
 if (VAR_14) {
  VAR_11->flags |= VAR_0;
 }

 if (!VAR_15 || VAR_15 == VAR_5) {
  FUNC_3(VAR_11, VAR_13);
  VAR_11->flags |= VAR_2;
 } else {
  VAR_11->nframes = 0;
  FUNC_0(VAR_8, VAR_6, VAR_15);
 }

 FUNC_0(VAR_9 | VAR_3, (uintptr_t)FUNC_5(VAR_13),
  VAR_11->flags, VAR_11->nframes);
}
