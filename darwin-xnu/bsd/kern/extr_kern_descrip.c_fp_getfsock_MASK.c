
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int dummy; } ;
struct fileproc {scalar_t__ f_type; scalar_t__ f_data; int f_iocount; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {struct filedesc* p_fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(proc_t VAR_4, int VAR_5, struct fileproc **VAR_6,
     struct socket **VAR_7)
{
 struct filedesc *VAR_8 = VAR_4->p_fd;
 struct fileproc *VAR_9;

 FUNC_0(VAR_4);
 if (VAR_5 < 0 || VAR_5 >= VAR_8->fd_nfiles ||
   (VAR_9 = VAR_8->fd_ofiles[VAR_5]) == ((void*)0) ||
   (VAR_8->fd_ofileflags[VAR_5] & VAR_3)) {
  FUNC_1(VAR_4);
  return (VAR_1);
 }
 if (VAR_9->f_type != VAR_0) {
  FUNC_1(VAR_4);
  return(VAR_2);
 }
 VAR_9->f_iocount++;

 if (VAR_6)
  *VAR_6 = VAR_9;
 if (VAR_7)
  *VAR_7 = (struct socket *)VAR_9->f_data;
 FUNC_1(VAR_4);

 return (0);
}
