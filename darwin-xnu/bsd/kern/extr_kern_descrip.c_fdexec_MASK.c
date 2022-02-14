
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int thread_t ;
struct uthread {scalar_t__ uu_kqr_bound; } ;
struct kqueue {int dummy; } ;
struct fileproc {scalar_t__ f_iocount; int f_fglob; } ;
struct filedesc {int fd_knlistsize; scalar_t__ fd_knhashmask; int fd_lastfile; char* fd_ofileflags; int fd_freefile; struct kqueue* fd_wqkqueue; struct fileproc** fd_ofiles; } ;
typedef TYPE_1__* proc_t ;
typedef int boolean_t ;
struct TYPE_10__ {int p_fpdrainwait; int p_fdmlock; struct filedesc* p_fd; } ;


 short VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fileproc*,int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct fileproc*) ;
 struct uthread* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct kqueue*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int*,int *,int ,char*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;

void
FUNC_14(proc_t VAR_5, short VAR_6, int VAR_7)
{
 struct filedesc *VAR_8 = VAR_5->p_fd;
 int VAR_9;
 boolean_t VAR_10 = (VAR_6 & VAR_0) != 0;
 thread_t VAR_11 = FUNC_2();
 struct uthread *VAR_12 = FUNC_4(VAR_11);
 struct kqueue *VAR_13 = ((void*)0);





 if (VAR_12->uu_kqr_bound && VAR_7) {
  FUNC_7(VAR_5, VAR_12->uu_kqr_bound);
 }

 FUNC_10(VAR_5);






 FUNC_5(VAR_5);
 FUNC_0(VAR_8->fd_knlistsize == -1);
 FUNC_0(VAR_8->fd_knhashmask == 0);

 for (VAR_9 = VAR_8->fd_lastfile; VAR_9 >= 0; VAR_9--) {

  struct fileproc *VAR_14 = VAR_8->fd_ofiles[VAR_9];
  char *VAR_15 = &VAR_8->fd_ofileflags[VAR_9];

  if (VAR_14 && VAR_10) {






   if ((*VAR_15 & (VAR_2|VAR_3)) != VAR_3)
    *VAR_15 |= VAR_2;
   *VAR_15 &= ~VAR_3;
  }

  if (
      ((*VAR_15 & (VAR_4|VAR_2)) == VAR_2)



  ) {
   FUNC_13(VAR_5, VAR_9);
   if (VAR_9 == VAR_8->fd_lastfile && VAR_9 > 0)
    VAR_8->fd_lastfile--;
   if (VAR_9 < VAR_8->fd_freefile)
    VAR_8->fd_freefile = VAR_9;





   while (VAR_14->f_iocount > 0) {
    VAR_5->p_fpdrainwait = 1;
    FUNC_9(&VAR_5->p_fpdrainwait, &VAR_5->p_fdmlock, VAR_1,
        "fpdrain", ((void*)0));
   }

   FUNC_1(VAR_14, VAR_14->f_fglob, VAR_5);

   FUNC_3(VAR_14);
  }
 }


 if (VAR_8->fd_wqkqueue) {
  VAR_13 = VAR_8->fd_wqkqueue;
  VAR_8->fd_wqkqueue = ((void*)0);
 }

 FUNC_11(VAR_5);


 if (VAR_13)
  FUNC_6(VAR_13);
}
