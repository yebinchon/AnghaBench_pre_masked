
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct fileproc {int f_iocount; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(proc_t VAR_2, int VAR_3, struct fileproc **VAR_4, int VAR_5)
{
 struct filedesc *VAR_6 = VAR_2->p_fd;
 struct fileproc *VAR_7;

 if (!VAR_5)
  FUNC_0(VAR_2);
 if (VAR_3 < 0 || VAR_6 == ((void*)0) || VAR_3 >= VAR_6->fd_nfiles ||
   (VAR_7 = VAR_6->fd_ofiles[VAR_3]) == ((void*)0) ||
   (VAR_6->fd_ofileflags[VAR_3] & VAR_1)) {
  if (!VAR_5)
   FUNC_1(VAR_2);
  return (VAR_0);
 }
 VAR_7->f_iocount++;

 if (VAR_4)
  *VAR_4 = VAR_7;
 if (!VAR_5)
  FUNC_1(VAR_2);

 return (0);
}
