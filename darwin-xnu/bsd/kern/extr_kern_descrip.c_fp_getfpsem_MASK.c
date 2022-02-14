
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct psemnode {int dummy; } ;
struct fileproc {scalar_t__ f_type; scalar_t__ f_data; int f_iocount; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {struct filedesc* p_fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(proc_t VAR_3, int VAR_4, struct fileproc **VAR_5,
     struct psemnode **VAR_6)
{
 struct filedesc *VAR_7 = VAR_3->p_fd;
 struct fileproc *VAR_8;

 FUNC_0(VAR_3);
 if (VAR_4 < 0 || VAR_4 >= VAR_7->fd_nfiles ||
   (VAR_8 = VAR_7->fd_ofiles[VAR_4]) == ((void*)0) ||
   (VAR_7->fd_ofileflags[VAR_4] & VAR_2)) {
  FUNC_1(VAR_3);
  return (VAR_1);
 }
 if (VAR_8->f_type != VAR_0) {
  FUNC_1(VAR_3);
  return(VAR_1);
 }
 VAR_8->f_iocount++;

 if (VAR_5)
  *VAR_5 = VAR_8;
 if (VAR_6)
  *VAR_6 = (struct psemnode *)VAR_8->f_data;
 FUNC_1(VAR_3);

 return (0);
}
