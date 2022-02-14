
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct kperf_context {TYPE_1__* cur_thread; } ;
struct callstack {int flags; int nframes; int * frames; } ;
struct TYPE_2__ {int * continuation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct callstack *VAR_4, struct kperf_context *VAR_5)
{
 thread_t VAR_6;

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_5 != ((void*)0));

 VAR_6 = VAR_5->cur_thread;
 FUNC_1(VAR_6 != ((void*)0));
 FUNC_1(VAR_6->continuation != ((void*)0));

 VAR_4->flags = VAR_1 | VAR_3 | VAR_2;

 VAR_4->flags |= VAR_0;


 VAR_4->nframes = 1;
 VAR_4->frames[0] = FUNC_0(VAR_6->continuation);
}
