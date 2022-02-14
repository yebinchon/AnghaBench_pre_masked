
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_wait_queue {int queue; int * name; int status; struct autofs_wait_queue* next; } ;
struct autofs_sb_info {int catatonic; int dirhash; int * pipe; struct autofs_wait_queue* queues; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct autofs_sb_info *VAR_1)
{
 struct autofs_wait_queue *VAR_2, *VAR_3;

 FUNC_0(("autofs: entering catatonic mode\n"));

 VAR_1->catatonic = 1;
 VAR_2 = VAR_1->queues;
 VAR_1->queues = ((void*)0);
 while ( VAR_2 ) {
  VAR_3 = VAR_2->next;
  VAR_2->status = -VAR_0;
  FUNC_3(VAR_2->name);
  VAR_2->name = ((void*)0);
  FUNC_4(&VAR_2->queue);
  VAR_2 = VAR_3;
 }
 FUNC_2(VAR_1->pipe);
 VAR_1->pipe = ((void*)0);
 FUNC_1(&VAR_1->dirhash);
}
