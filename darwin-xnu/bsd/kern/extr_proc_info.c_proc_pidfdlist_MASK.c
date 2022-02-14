
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int user_addr_t ;
typedef int uint32_t ;
struct proc_fdinfo {int proc_fd; scalar_t__ proc_fdtype; } ;
struct fileproc {int f_fglob; } ;
typedef TYPE_2__* proc_t ;
typedef int int32_t ;
typedef scalar_t__ file_type_t ;
struct TYPE_7__ {TYPE_1__* p_fd; } ;
struct TYPE_6__ {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

int
FUNC_7(proc_t VAR_4, user_addr_t VAR_5, uint32_t VAR_6, int32_t *VAR_7)
{
  uint32_t VAR_8 = 0;
  uint32_t VAR_9;
  char * VAR_10;
  struct proc_fdinfo * VAR_11;
  struct fileproc * VAR_12;
  int VAR_13;
  int VAR_14 = 0;
  int VAR_15 = 0;

  if (VAR_4->p_fd->fd_nfiles > 0) {
   VAR_8 = (uint32_t)VAR_4->p_fd->fd_nfiles;
  }

  if (VAR_5 == (user_addr_t) 0) {
   VAR_8 += 20;
   *VAR_7 = (VAR_8 * sizeof(struct proc_fdinfo));
   return(0);
  }


  VAR_9 = VAR_6/sizeof(struct proc_fdinfo);

  if (VAR_8 > VAR_9) {
   VAR_8 = VAR_9;
  }

  VAR_10 = (char *)FUNC_3((vm_size_t)(VAR_8 * sizeof(struct proc_fdinfo)));
  if (VAR_10 == ((void*)0))
   return(VAR_1);
  FUNC_1(VAR_10, VAR_8 * sizeof(struct proc_fdinfo));

  FUNC_5(VAR_4);

  VAR_11 = (struct proc_fdinfo *)VAR_10;

  for (VAR_13 = 0; ((VAR_13 < (int)VAR_8) && (VAR_13 < VAR_4->p_fd->fd_nfiles)); VAR_13++) {
   if (((VAR_12 = VAR_4->p_fd->fd_ofiles[VAR_13]) != 0)
        && ((VAR_4->p_fd->fd_ofileflags[VAR_13] & VAR_3) == 0)) {
    file_type_t VAR_16 = FUNC_0(VAR_12->f_fglob);
    VAR_11->proc_fd = VAR_13;
    VAR_11->proc_fdtype = (VAR_16 != VAR_0) ?
     VAR_16 : VAR_2;
    VAR_14++;
    VAR_11++;
   }
  }
  FUNC_6(VAR_4);

  VAR_15 = FUNC_2(VAR_10, VAR_5, VAR_14 * sizeof(struct proc_fdinfo));
  FUNC_4((void *)VAR_10, (vm_size_t)(VAR_8 * sizeof(struct proc_fdinfo)));
  if (VAR_15 == 0)
   *VAR_7 = (VAR_14 * sizeof(struct proc_fdinfo));
  return(VAR_15);
}
