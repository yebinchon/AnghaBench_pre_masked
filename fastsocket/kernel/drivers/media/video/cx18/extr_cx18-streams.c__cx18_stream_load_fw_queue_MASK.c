
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; } ;
struct cx18_queue {int depth; } ;
struct cx18_stream {TYPE_1__ q_free; struct cx18_queue q_busy; } ;
struct cx18_mdl {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct cx18_queue* FUNC_0 (struct cx18_stream*,struct cx18_mdl*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct cx18_mdl* FUNC_2 (struct cx18_stream*,TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(struct cx18_stream *VAR_1)
{
 struct cx18_queue *VAR_2;
 struct cx18_mdl *VAR_3;

 if (FUNC_1(&VAR_1->q_free.depth) == 0 ||
     FUNC_1(&VAR_1->q_busy.depth) >= VAR_0)
  return;


 do {
  VAR_3 = FUNC_2(VAR_1, &VAR_1->q_free);
  if (VAR_3 == ((void*)0))
   break;
  VAR_2 = FUNC_0(VAR_1, VAR_3);
 } while (FUNC_1(&VAR_1->q_busy.depth) < VAR_0
   && VAR_2 == &VAR_1->q_busy);
}
