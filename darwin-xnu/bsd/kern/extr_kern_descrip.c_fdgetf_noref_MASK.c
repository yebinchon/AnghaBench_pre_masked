
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fileproc {int dummy; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(proc_t VAR_2, int VAR_3, struct fileproc **VAR_4)
{
 struct filedesc *VAR_5 = VAR_2->p_fd;
 struct fileproc *VAR_6;

 if (VAR_3 < 0 || VAR_3 >= VAR_5->fd_nfiles ||
   (VAR_6 = VAR_5->fd_ofiles[VAR_3]) == ((void*)0) ||
   (VAR_5->fd_ofileflags[VAR_3] & VAR_1)) {
  return (VAR_0);
 }
 if (VAR_4)
  *VAR_4 = VAR_6;
 return (0);
}
