
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct socket {int dummy; } ;
struct fileproc {TYPE_6__* f_fglob; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_8__ {scalar_t__ fg_data; } ;
struct TYPE_7__ {int p_ladvflag; struct filedesc* p_fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct socket*,int ) ;

void
FUNC_5(proc_t VAR_3)
{
 if (VAR_3->p_ladvflag & VAR_1) {
  struct filedesc *VAR_4;
  int VAR_5;

  FUNC_2(VAR_3);
  VAR_4 = VAR_3->p_fd;
  for (VAR_5 = 0; VAR_5 < VAR_4->fd_nfiles; VAR_5++) {
   struct fileproc *VAR_6;
   struct socket *VAR_7;

   VAR_6 = VAR_4->fd_ofiles[VAR_5];
   if (VAR_6 == ((void*)0) ||
       (VAR_4->fd_ofileflags[VAR_5] & VAR_2) != 0 ||
       FUNC_0(VAR_6->f_fglob) != VAR_0)
    continue;

   VAR_7 = (struct socket *)VAR_6->f_fglob->fg_data;
   (void) FUNC_4(VAR_3, VAR_7, 0);
  }
  FUNC_3(VAR_3);

  FUNC_1(~VAR_1, &VAR_3->p_ladvflag);
 }
}
