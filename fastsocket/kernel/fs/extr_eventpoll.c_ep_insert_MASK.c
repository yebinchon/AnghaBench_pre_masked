
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int f_mode; int f_lock; int f_ep_links; TYPE_1__* f_op; struct epitem* f_epi; } ;
struct eventpoll {int lock; int rbr; int poll_wait; TYPE_2__* user; int wq; int rdllist; } ;
struct epoll_event {int events; } ;
struct epitem {scalar_t__ nwait; int rdllink; int rbn; int fllink; int next; struct epoll_event event; int ffd; struct eventpoll* ep; int pwqlist; } ;
struct ep_pqueue {int pt; struct epitem* epi; } ;
struct TYPE_4__ {int epoll_watches; } ;
struct TYPE_3__ {int (* poll ) (struct file*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (struct eventpoll*,struct epitem*) ;
 int FUNC_6 (int *,struct file*,int) ;
 int FUNC_7 (struct eventpoll*,struct epitem*) ;
 int VAR_7 ;
 int FUNC_8 (int *,int ) ;
 struct epitem* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct epitem*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (struct file*,int *) ;
 scalar_t__ FUNC_22 (int) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

int FUNC_25(struct eventpoll *VAR_9, struct epoll_event *VAR_10,
       struct file *VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = 0;
 unsigned long VAR_17;
 struct epitem *VAR_18;
 struct ep_pqueue VAR_19;

 if (FUNC_22(FUNC_2(&VAR_9->user->epoll_watches) >=
       VAR_8))
  return -VAR_2;
 if (!(VAR_18 = FUNC_9(VAR_7, VAR_5)))
  return -VAR_1;


 FUNC_0(&VAR_18->rdllink);
 FUNC_0(&VAR_18->fllink);
 FUNC_0(&VAR_18->pwqlist);
 VAR_18->ep = VAR_9;
 FUNC_6(&VAR_18->ffd, VAR_11, VAR_12);
 VAR_18->event = *VAR_10;
 VAR_18->nwait = 0;
 VAR_18->next = VAR_3;

 if (VAR_11->f_mode & VAR_4) {
  VAR_11->f_epi = VAR_18;
 }


 VAR_19.epi = VAR_18;
 FUNC_8(&VAR_19.pt, VAR_6);
 VAR_15 = VAR_11->f_op->poll(VAR_11, &VAR_19.pt);






 VAR_14 = -VAR_1;
 if (VAR_18->nwait < 0)
  goto error_unregister;


 FUNC_17(&VAR_11->f_lock);
 FUNC_12(&VAR_18->fllink, &VAR_11->f_ep_links);
 FUNC_19(&VAR_11->f_lock);





 FUNC_5(VAR_9, VAR_18);


 VAR_14 = -VAR_0;
 if (VAR_13 && FUNC_16())
  goto error_remove_epi;


 FUNC_18(&VAR_9->lock, VAR_17);


 if ((VAR_15 & VAR_10->events) && !FUNC_3(&VAR_18->rdllink)) {
  FUNC_11(&VAR_18->rdllink, &VAR_9->rdllist);


  if (FUNC_23(&VAR_9->wq))
   FUNC_24(&VAR_9->wq);
  if (FUNC_23(&VAR_9->poll_wait))
   VAR_16++;
 }

 FUNC_20(&VAR_9->lock, VAR_17);

 FUNC_1(&VAR_9->user->epoll_watches);


 if (VAR_16)
  FUNC_4(&VAR_9->poll_wait);

 return 0;

error_remove_epi:
 FUNC_17(&VAR_11->f_lock);
 FUNC_14(&VAR_18->fllink);
 FUNC_19(&VAR_11->f_lock);

 FUNC_15(&VAR_18->rbn, &VAR_9->rbr);

error_unregister:
 FUNC_7(VAR_9, VAR_18);







 FUNC_18(&VAR_9->lock, VAR_17);
 if (FUNC_3(&VAR_18->rdllink))
  FUNC_13(&VAR_18->rdllink);
 FUNC_20(&VAR_9->lock, VAR_17);

 FUNC_10(VAR_7, VAR_18);

 return VAR_14;
}
