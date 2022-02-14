
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct filedesc* p_fd; } ;
struct filedesc {int fd_freefile; int fd_lastfile; int* fd_ofileflags; int ** fd_ofiles; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct proc*,int) ;

__attribute__((used)) static void
FUNC_2(struct proc * VAR_1, int VAR_2)
{
 struct filedesc *VAR_3 = VAR_1->p_fd;
 int VAR_4 = 0;

 if (VAR_2 < VAR_3->fd_freefile)
  VAR_3->fd_freefile = VAR_2;




 FUNC_1(VAR_1, VAR_2);

 while ((VAR_4 = VAR_3->fd_lastfile) > 0 &&
   VAR_3->fd_ofiles[VAR_4] == ((void*)0) &&
   !(VAR_3->fd_ofileflags[VAR_4] & VAR_0))

  VAR_3->fd_lastfile--;
}
