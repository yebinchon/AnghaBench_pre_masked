
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {TYPE_1__* p_fd; } ;
struct TYPE_2__ {int * fd_ofileflags; int ** fd_ofiles; } ;


 int VAR_0 ;

void
FUNC_0(struct proc * VAR_1, int VAR_2)
{
 VAR_1->p_fd->fd_ofiles[VAR_2] = ((void*)0);
        VAR_1->p_fd->fd_ofileflags[VAR_2] |= VAR_0;
}
