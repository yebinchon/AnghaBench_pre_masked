
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fileproc {int dummy; } ;
struct filedesc {int fd_nfiles; size_t fd_freefile; char* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_5__ {TYPE_1__* p_rlimit; struct filedesc* p_fd; } ;
struct TYPE_4__ {scalar_t__ rlim_cur; } ;


 size_t VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

int
FUNC_1(proc_t VAR_3, int VAR_4)
{
 struct filedesc *VAR_5 = VAR_3->p_fd;
 struct fileproc **VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_0((int)VAR_3->p_rlimit[VAR_0].rlim_cur, VAR_2);
 if ((VAR_8 = VAR_9 - VAR_5->fd_nfiles) > 0 && (VAR_4 -= VAR_8) <= 0)
  return (1);
 VAR_6 = &VAR_5->fd_ofiles[VAR_5->fd_freefile];
 VAR_7 = &VAR_5->fd_ofileflags[VAR_5->fd_freefile];
 for (VAR_8 = VAR_5->fd_nfiles - VAR_5->fd_freefile; --VAR_8 >= 0; VAR_6++, VAR_7++)
  if (*VAR_6 == ((void*)0) && !(*VAR_7 & VAR_1) && --VAR_4 <= 0)
   return (1);
 return (0);
}
