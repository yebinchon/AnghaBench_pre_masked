
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct eventpoll {int poll_wait; int lock; int wq; int rdllist; } ;
struct epoll_event {unsigned int events; int data; } ;
struct TYPE_7__ {TYPE_4__* file; } ;
struct TYPE_5__ {unsigned int events; int data; } ;
struct epitem {int rdllink; TYPE_3__ ffd; TYPE_1__ event; } ;
struct TYPE_8__ {TYPE_2__* f_op; } ;
struct TYPE_6__ {unsigned int (* poll ) (TYPE_4__*,int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct eventpoll *VAR_0, struct epitem *VAR_1, struct epoll_event *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4;






 VAR_1->event.events = VAR_2->events;
 VAR_1->event.data = VAR_2->data;





 VAR_4 = VAR_1->ffd.file->f_op->poll(VAR_1->ffd.file, ((void*)0));





 if (VAR_4 & VAR_2->events) {
  FUNC_3(&VAR_0->lock);
  if (!FUNC_0(&VAR_1->rdllink)) {
   FUNC_2(&VAR_1->rdllink, &VAR_0->rdllist);


   if (FUNC_6(&VAR_0->wq))
    FUNC_7(&VAR_0->wq);
   if (FUNC_6(&VAR_0->poll_wait))
    VAR_3++;
  }
  FUNC_4(&VAR_0->lock);
 }


 if (VAR_3)
  FUNC_1(&VAR_0->poll_wait);

 return 0;
}
