
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct kqueue {int dummy; } ;
struct knote {int dummy; } ;
struct klist {int dummy; } ;
struct filedesc {int fd_knlistsize; scalar_t__ fd_knhashmask; struct klist* fd_knhash; struct klist* fd_knlist; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_7__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct klist*,int ) ;
 int VAR_0 ;
 struct knote* FUNC_1 (struct klist*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct kqueue*,struct knote*,int *) ;
 struct kqueue* FUNC_5 (struct knote*) ;
 int FUNC_6 (struct kqueue*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(proc_t VAR_1)
{
 struct filedesc *VAR_2 = VAR_1->p_fd;
 struct kqueue *VAR_3;
 struct knote *VAR_4;
 struct klist *VAR_5 = ((void*)0);
 int VAR_6;


 if (VAR_2->fd_knlistsize > 0) {
  for (VAR_6 = 0; VAR_6 < VAR_2->fd_knlistsize; VAR_6++) {
   while ((VAR_4 = FUNC_1(&VAR_2->fd_knlist[VAR_6])) != ((void*)0)) {
    VAR_3 = FUNC_5(VAR_4);
    FUNC_6(VAR_3);
    FUNC_8(VAR_1);
    FUNC_4(VAR_3, VAR_4, ((void*)0));
    FUNC_7(VAR_1);
   }
  }

  FUNC_0(VAR_2->fd_knlist, VAR_0);
  VAR_2->fd_knlist = ((void*)0);
 }
 VAR_2->fd_knlistsize = -1;

 FUNC_2(VAR_1);
 FUNC_8(VAR_1);


 if (VAR_2->fd_knhashmask != 0) {
  for (VAR_6 = 0; VAR_6 <= (int)VAR_2->fd_knhashmask; VAR_6++) {
   while ((VAR_4 = FUNC_1(&VAR_2->fd_knhash[VAR_6])) != ((void*)0)) {
    VAR_3 = FUNC_5(VAR_4);
    FUNC_6(VAR_3);
    FUNC_3(VAR_1);
    FUNC_4(VAR_3, VAR_4, ((void*)0));
    FUNC_2(VAR_1);
   }
  }
  VAR_5 = VAR_2->fd_knhash;
  VAR_2->fd_knhashmask = 0;
  VAR_2->fd_knhash = ((void*)0);
 }

 FUNC_3(VAR_1);


 if (VAR_5)
  FUNC_0(VAR_5, VAR_0);

 FUNC_7(VAR_1);
}
