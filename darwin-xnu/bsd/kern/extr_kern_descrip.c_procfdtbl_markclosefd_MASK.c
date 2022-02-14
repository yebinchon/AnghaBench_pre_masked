
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {TYPE_1__* p_fd; } ;
struct TYPE_2__ {int* fd_ofileflags; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct proc * VAR_2, int VAR_3)
{
        VAR_2->p_fd->fd_ofileflags[VAR_3] |= (VAR_1 | VAR_0);
}
