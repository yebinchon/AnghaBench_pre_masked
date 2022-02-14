
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct fileproc {scalar_t__ f_iocount; int f_flags; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {scalar_t__ p_fpdrainwait; struct filedesc* p_fd; } ;


 int VAR_0 ;
 struct fileproc* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;

int
FUNC_3(proc_t VAR_5, int VAR_6, struct fileproc *VAR_7, int VAR_8)
{
 struct filedesc *VAR_9 = VAR_5->p_fd;
 int VAR_10 = 0;

 if (!VAR_8)
  FUNC_0(VAR_5);
  if ((VAR_7 == VAR_1) && (VAR_6 < 0 || VAR_6 >= VAR_9->fd_nfiles ||
   (VAR_7 = VAR_9->fd_ofiles[VAR_6]) == ((void*)0) ||
   ((VAR_9->fd_ofileflags[VAR_6] & VAR_4) &&
    !(VAR_9->fd_ofileflags[VAR_6] & VAR_3)))) {
  if (!VAR_8)
   FUNC_1(VAR_5);
  return (VAR_0);
 }
 VAR_7->f_iocount--;

 if (VAR_7->f_iocount == 0) {
  if (VAR_7->f_flags & VAR_2)
   VAR_7->f_flags &= ~VAR_2;

  if (VAR_5->p_fpdrainwait) {
   VAR_5->p_fpdrainwait = 0;
   VAR_10 = 1;
  }
 }
 if (!VAR_8)
  FUNC_1(VAR_5);
 if (VAR_10)
         FUNC_2(&VAR_5->p_fpdrainwait);

 return (0);
}
