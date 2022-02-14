
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int f_mode; int f_lock; int * f_epi; } ;
struct eventpoll {TYPE_2__* user; int lock; int rbr; } ;
struct TYPE_3__ {struct file* file; } ;
struct epitem {int rcu; int rdllink; int rbn; int fllink; TYPE_1__ ffd; } ;
struct TYPE_4__ {int epoll_watches; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct eventpoll*,struct epitem*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;

int FUNC_11(struct eventpoll *VAR_2, struct epitem *VAR_3)
{
 unsigned long VAR_4;
 struct file *VAR_5 = VAR_3->ffd.file;

 if (VAR_5->f_mode & VAR_0) {
  VAR_5->f_epi = ((void*)0);
 }
 FUNC_3(VAR_2, VAR_3);


 FUNC_7(&VAR_5->f_lock);
 FUNC_5(&VAR_3->fllink);
 FUNC_9(&VAR_5->f_lock);

 FUNC_6(&VAR_3->rbn, &VAR_2->rbr);

 FUNC_8(&VAR_2->lock, VAR_4);
 if (FUNC_2(&VAR_3->rdllink))
  FUNC_4(&VAR_3->rdllink);
 FUNC_10(&VAR_2->lock, VAR_4);
 FUNC_1(&VAR_3->rcu, VAR_1);

 FUNC_0(&VAR_2->user->epoll_watches);

 return 0;
}
