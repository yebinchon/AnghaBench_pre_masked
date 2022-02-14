
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_queue {int lock; int depth; int bytesused; int list; } ;
struct cx18_stream {struct cx18_queue q_free; struct cx18_queue q_busy; struct cx18_queue q_full; } ;
struct cx18_mdl {scalar_t__ readpos; scalar_t__ bytesused; int list; int * curr_buf; scalar_t__ skipped; scalar_t__ m_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct cx18_queue *FUNC_6(struct cx18_stream *VAR_1, struct cx18_mdl *VAR_2,
     struct cx18_queue *VAR_3, int VAR_4)
{

 if (VAR_3 != &VAR_1->q_full) {
  VAR_2->bytesused = 0;
  VAR_2->readpos = 0;
  VAR_2->m_flags = 0;
  VAR_2->skipped = 0;
  VAR_2->curr_buf = ((void*)0);
 }


 if (VAR_3 == &VAR_1->q_busy &&
     FUNC_1(&VAR_3->depth) >= VAR_0)
  VAR_3 = &VAR_1->q_free;

 FUNC_4(&VAR_3->lock);

 if (VAR_4)
  FUNC_2(&VAR_2->list, &VAR_3->list);
 else
  FUNC_3(&VAR_2->list, &VAR_3->list);
 VAR_3->bytesused += VAR_2->bytesused - VAR_2->readpos;
 FUNC_0(&VAR_3->depth);

 FUNC_5(&VAR_3->lock);
 return VAR_3;
}
