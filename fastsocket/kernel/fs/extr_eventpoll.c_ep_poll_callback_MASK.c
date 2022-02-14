
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_t ;
struct eventpoll {scalar_t__ ovflist; int poll_wait; int lock; int wq; int rdllist; } ;
struct TYPE_2__ {int events; } ;
struct epitem {scalar_t__ next; int rdllink; TYPE_1__ event; struct eventpoll* ep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct epitem* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(wait_queue_t *VAR_2, unsigned VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;
 struct epitem *VAR_8 = FUNC_1(VAR_2);
 struct eventpoll *VAR_9 = VAR_8->ep;

 FUNC_4(&VAR_9->lock, VAR_7);







 if (!(VAR_8->event.events & ~VAR_0))
  goto out_unlock;







 if (VAR_5 && !((unsigned long) VAR_5 & VAR_8->event.events))
  goto out_unlock;







 if (FUNC_6(VAR_9->ovflist != VAR_1)) {
  if (VAR_8->next == VAR_1) {
   VAR_8->next = VAR_9->ovflist;
   VAR_9->ovflist = VAR_8;
  }
  goto out_unlock;
 }


 if (!FUNC_0(&VAR_8->rdllink))
  FUNC_3(&VAR_8->rdllink, &VAR_9->rdllist);





 if (FUNC_7(&VAR_9->wq))
  FUNC_8(&VAR_9->wq);
 if (FUNC_7(&VAR_9->poll_wait))
  VAR_6++;

out_unlock:
 FUNC_5(&VAR_9->lock, VAR_7);


 if (VAR_6)
  FUNC_2(&VAR_9->poll_wait);

 return 1;
}
