
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnop_readdir_args {int a_flags; struct uio* a_uio; } ;
struct uio {int uio_offset; } ;
struct proc {TYPE_1__* p_fd; } ;
struct dirent {int d_reclen; scalar_t__ d_fileno; int d_type; int d_name; int d_namlen; } ;
typedef int caddr_t ;
struct TYPE_2__ {int fd_nfiles; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 struct proc* FUNC_1 () ;
 int ** FUNC_2 (struct proc*,int) ;
 int* FUNC_3 (struct proc*,int) ;
 int FUNC_4 (int ,int,char*,int) ;
 int FUNC_5 (struct uio*) ;
 int FUNC_6 (int ,int,struct uio*) ;

int
FUNC_7(struct vnop_readdir_args *VAR_7)
{
 struct uio *VAR_8 = VAR_7->a_uio;
 struct proc *VAR_9 = FUNC_1();
 int VAR_10, VAR_11;





 if (VAR_7->a_flags & (VAR_5 | VAR_6))
  return (VAR_1);




 if (FUNC_5(VAR_8) < VAR_4)
  return (VAR_1);

 VAR_10 = VAR_8->uio_offset / VAR_4;
 VAR_11 = 0;
 while (FUNC_5(VAR_8) >= VAR_4) {
  if (VAR_10 >= VAR_9->p_fd->fd_nfiles)
   break;

  if (*FUNC_2(VAR_9, VAR_10) != ((void*)0) && !(*FUNC_3(VAR_9, VAR_10) & VAR_3)) {
   struct dirent VAR_12;
   struct dirent *VAR_13 = &VAR_12;

   FUNC_0((caddr_t) VAR_13, VAR_4);

   VAR_13->d_namlen = FUNC_4(VAR_13->d_name, sizeof(VAR_13->d_name),
      "%d", VAR_10);
   VAR_13->d_reclen = VAR_4;
   VAR_13->d_type = VAR_0;
   VAR_13->d_fileno = VAR_10 + VAR_2;



   VAR_11 = FUNC_6((caddr_t) VAR_13, VAR_4, VAR_8);
   if (VAR_11)
    break;
  }
  VAR_10++;
 }

 VAR_8->uio_offset = VAR_10 * VAR_4;
 return (VAR_11);
}
