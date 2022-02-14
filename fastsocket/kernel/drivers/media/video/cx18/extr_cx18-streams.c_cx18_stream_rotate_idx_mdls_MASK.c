
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int depth; } ;
struct TYPE_6__ {int depth; } ;
struct TYPE_4__ {int depth; } ;
struct cx18_stream {TYPE_2__ q_free; TYPE_3__ q_full; TYPE_1__ q_busy; } ;
struct cx18_mdl {int dummy; } ;
struct cx18 {struct cx18_stream* streams; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct cx18_mdl* FUNC_1 (struct cx18_stream*,TYPE_3__*) ;
 int FUNC_2 (struct cx18_stream*,struct cx18_mdl*,TYPE_2__*) ;
 int FUNC_3 (struct cx18_stream*) ;

void FUNC_4(struct cx18 *VAR_2)
{
 struct cx18_stream *VAR_3 = &VAR_2->streams[VAR_0];
 struct cx18_mdl *VAR_4;

 if (!FUNC_3(VAR_3))
  return;


 if ((FUNC_0(&VAR_3->q_free.depth) + FUNC_0(&VAR_3->q_busy.depth)) >=
         VAR_1)
  return;


 if (FUNC_0(&VAR_3->q_full.depth) < 2)
  return;





 VAR_4 = FUNC_1(VAR_3, &VAR_3->q_full);
 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_3, VAR_4, &VAR_3->q_free);
}
