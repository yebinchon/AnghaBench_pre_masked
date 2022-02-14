
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_wait_queue {scalar_t__ wait_queue_token; int status; int queue; int wait_ctr; struct autofs_wait_queue* name; struct autofs_wait_queue* next; } ;
struct autofs_sb_info {struct autofs_wait_queue* queues; } ;
typedef scalar_t__ autofs_wqt_t ;


 int VAR_0 ;
 int FUNC_0 (struct autofs_wait_queue*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct autofs_sb_info *VAR_1, autofs_wqt_t VAR_2, int VAR_3)
{
 struct autofs_wait_queue *VAR_4, **VAR_5;

 for (VAR_5 = &VAR_1->queues; (VAR_4 = *VAR_5) != ((void*)0); VAR_5 = &VAR_4->next) {
  if ( VAR_4->wait_queue_token == VAR_2 )
   break;
 }
 if ( !VAR_4 )
  return -VAR_0;

 *VAR_5 = VAR_4->next;
 FUNC_0(VAR_4->name);
 VAR_4->name = ((void*)0);

 VAR_4->status = VAR_3;

 if ( ! --VAR_4->wait_ctr )
  FUNC_0(VAR_4);
 else
  FUNC_1(&VAR_4->queue);

 return 0;
}
