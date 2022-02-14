
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_fdmlock; TYPE_1__* p_fd; } ;
struct TYPE_2__ {int * fd_ofileflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,int *,int ,char*,int *) ;

void
FUNC_1(struct proc * VAR_2, int VAR_3)
{
        VAR_2->p_fd->fd_ofileflags[VAR_3] |= VAR_1;
 FUNC_0(&VAR_2->p_fd, &VAR_2->p_fdmlock, VAR_0, "ftbl_waitfd", ((void*)0));
}
