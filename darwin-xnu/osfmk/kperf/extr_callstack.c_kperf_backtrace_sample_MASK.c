
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kperf_context {scalar_t__ cur_thread; int starting_fp; } ;
struct callstack {int flags; int nframes; scalar_t__* frames; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (uintptr_t*,int,int ) ;
 scalar_t__ FUNC_3 () ;

void
FUNC_4(struct callstack *VAR_7, struct kperf_context *VAR_8)
{
 FUNC_1(VAR_7 != ((void*)0));
 FUNC_1(VAR_8 != ((void*)0));
 FUNC_1(VAR_8->cur_thread == FUNC_3());

 VAR_7->flags = VAR_1 | VAR_2;

 VAR_7->flags |= VAR_0;


 FUNC_0(VAR_6 | VAR_5, 1);

 VAR_7->nframes = FUNC_2((uintptr_t *)&(VAR_7->frames), VAR_7->nframes - 1,
                               VAR_8->starting_fp);
 if (VAR_7->nframes > 0) {
  VAR_7->flags |= VAR_3;




  VAR_7->frames[VAR_7->nframes + 1] = 0;
  VAR_7->nframes += 1;
 }

 FUNC_0(VAR_6 | VAR_4, VAR_7->nframes);
}
