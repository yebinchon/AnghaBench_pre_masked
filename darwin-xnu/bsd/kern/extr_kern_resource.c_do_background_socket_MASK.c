
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct socket {scalar_t__ so_background_thread; } ;
struct proc {struct filedesc* p_fd; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
struct TYPE_2__ {scalar_t__ fg_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct proc*,struct fileproc*,int) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (struct socket*,int ) ;

__attribute__((used)) static void
FUNC_9(struct proc *VAR_6, thread_t VAR_7)
{
#pragma unused(p, thread)

}
