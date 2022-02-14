
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;
struct autofs_wait_queue {int queue; int wait_ctr; TYPE_1__ name; int status; struct autofs_wait_queue* next; } ;
struct autofs_sb_info {int catatonic; int pipefd; int wq_mutex; int * pipe; struct autofs_wait_queue* queues; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct autofs_sb_info *VAR_1)
{
 struct autofs_wait_queue *VAR_2, *VAR_3;

 FUNC_3(&VAR_1->wq_mutex);
 if (VAR_1->catatonic) {
  FUNC_4(&VAR_1->wq_mutex);
  return;
 }

 FUNC_0("entering catatonic mode");

 VAR_1->catatonic = 1;
 VAR_2 = VAR_1->queues;
 VAR_1->queues = ((void*)0);
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  VAR_2->status = -VAR_0;
  if (VAR_2->name.name) {
   FUNC_2(VAR_2->name.name);
   VAR_2->name.name = ((void*)0);
  }
  VAR_2->wait_ctr--;
  FUNC_5(&VAR_2->queue);
  VAR_2 = VAR_3;
 }
 FUNC_1(VAR_1->pipe);
 VAR_1->pipe = ((void*)0);
 VAR_1->pipefd = -1;
 FUNC_4(&VAR_1->wq_mutex);
}
