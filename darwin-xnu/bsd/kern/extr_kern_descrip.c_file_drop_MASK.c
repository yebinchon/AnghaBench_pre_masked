
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fileproc {scalar_t__ f_iocount; int f_flags; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_7__ {scalar_t__ p_fpdrainwait; TYPE_1__* p_fd; } ;
struct TYPE_6__ {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__*) ;

int
FUNC_4(int VAR_4)
{
 struct fileproc *VAR_5;
 proc_t VAR_6 = FUNC_0();
 int VAR_7 = 0;

 FUNC_1(VAR_6);
 if (VAR_4 < 0 || VAR_4 >= VAR_6->p_fd->fd_nfiles ||
   (VAR_5 = VAR_6->p_fd->fd_ofiles[VAR_4]) == ((void*)0) ||
   ((VAR_6->p_fd->fd_ofileflags[VAR_4] & VAR_3) &&
    !(VAR_6->p_fd->fd_ofileflags[VAR_4] & VAR_2))) {
  FUNC_2(VAR_6);
  return (VAR_0);
 }
 VAR_5->f_iocount --;

 if (VAR_5->f_iocount == 0) {
  if (VAR_5->f_flags & VAR_1)
   VAR_5->f_flags &= ~VAR_1;

  if (VAR_6->p_fpdrainwait) {
   VAR_6->p_fpdrainwait = 0;
   VAR_7 = 1;
  }
 }
 FUNC_2(VAR_6);

 if (VAR_7)
         FUNC_3(&VAR_6->p_fpdrainwait);
 return(0);
}
