
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {TYPE_1__* p_fd; } ;
struct fileproc {int dummy; } ;
struct TYPE_2__ {int* fd_ofileflags; struct fileproc** fd_ofiles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**) ;

void
FUNC_1(struct proc * VAR_2, int VAR_3, struct fileproc * VAR_4)
{
 if (VAR_4 != ((void*)0))
         VAR_2->p_fd->fd_ofiles[VAR_3] = VAR_4;
        VAR_2->p_fd->fd_ofileflags[VAR_3] &= ~VAR_0;
 if ((VAR_2->p_fd->fd_ofileflags[VAR_3] & VAR_1) == VAR_1) {
  VAR_2->p_fd->fd_ofileflags[VAR_3] &= ~VAR_1;
  FUNC_0(&VAR_2->p_fd);
 }
}
