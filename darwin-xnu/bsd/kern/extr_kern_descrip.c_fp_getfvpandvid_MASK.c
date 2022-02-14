
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vnode {int dummy; } ;
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
 scalar_t__ FUNC_2 (struct vnode*) ;

int
FUNC_3(proc_t VAR_4, int VAR_5, struct fileproc **VAR_6,
  struct vnode **VAR_7, uint32_t *VAR_8)
{
 struct filedesc *VAR_9 = VAR_4->p_fd;
 struct fileproc *VAR_10;

 FUNC_0(VAR_4);
 if (VAR_5 < 0 || VAR_5 >= VAR_9->fd_nfiles ||
   (VAR_10 = VAR_9->fd_ofiles[VAR_5]) == ((void*)0) ||
   (VAR_9->fd_ofileflags[VAR_5] & VAR_3)) {
  FUNC_1(VAR_4);
  return (VAR_1);
 }
 if (VAR_10->f_type != VAR_0) {
  FUNC_1(VAR_4);
  return(VAR_2);
 }
 VAR_10->f_iocount++;

 if (VAR_6)
  *VAR_6 = VAR_10;
 if (VAR_7)
  *VAR_7 = (struct vnode *)VAR_10->f_data;
 if (VAR_8)
  *VAR_8 = (uint32_t)FUNC_2((struct vnode *)VAR_10->f_data);
 FUNC_1(VAR_4);

 return (0);
}
