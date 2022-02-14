
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* proc_t ;
struct TYPE_7__ {TYPE_1__* p_fd; } ;
struct TYPE_6__ {int * fd_rdir; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int
FUNC_2(proc_t VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0) {
  FUNC_0(VAR_0);
  VAR_1 = (VAR_0->p_fd->fd_rdir != ((void*)0)) ? 1 : 0;
  FUNC_1(VAR_0);
 }

 return VAR_1;
}
