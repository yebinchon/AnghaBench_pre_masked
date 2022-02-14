
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vi ;
struct TYPE_7__ {int vi_stat; } ;
struct TYPE_6__ {int fi_openflags; } ;
struct vnode_fdinfo {TYPE_2__ pvi; TYPE_1__ pfi; } ;
struct proc_fdinfo {int proc_fdtype; int proc_fd; } ;
typedef TYPE_3__* fdOpenInfoRef ;
struct TYPE_8__ {int fds_size; int fds_count; int flags; struct proc_fdinfo* fds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (TYPE_3__*,int *) ;
 int VAR_5 ;
 struct proc_fdinfo* FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ,struct vnode_fdinfo*,int) ;
 int FUNC_3 (int,int ,int ,struct proc_fdinfo*,int) ;
 struct proc_fdinfo* FUNC_4 (struct proc_fdinfo*,int) ;

__attribute__((used)) static int
FUNC_5(fdOpenInfoRef VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;


 VAR_8 = FUNC_3(VAR_7, VAR_4, 0, ((void*)0), 0);
 if (VAR_8 <= 0) {
  return -1;
 }

 while (1) {
  if (VAR_8 > VAR_6->fds_size) {

   while (VAR_8 > VAR_6->fds_size) {
    VAR_6->fds_size += (sizeof(struct proc_fdinfo) * 32);
   }

   if (VAR_6->fds == ((void*)0)) {
    VAR_6->fds = FUNC_1(VAR_6->fds_size);
   } else {
    VAR_6->fds = FUNC_4(VAR_6->fds, VAR_6->fds_size);
   }
   if (VAR_6->fds == ((void*)0)) {
    return -1;
   }
  }

  VAR_8 = FUNC_3(VAR_7, VAR_4, 0, VAR_6->fds, (int)VAR_6->fds_size);
  if (VAR_8 <= 0) {
   return -1;
  }

  if ((VAR_8 + sizeof(struct proc_fdinfo)) >= VAR_6->fds_size) {

   VAR_8 = (int)(VAR_6->fds_size + sizeof(struct proc_fdinfo));
   continue;
  }

  VAR_6->fds_count = (int)(VAR_8 / sizeof(struct proc_fdinfo));
  break;
 }


 for (VAR_9 = 0; VAR_9 < VAR_6->fds_count; VAR_9++) {
  struct proc_fdinfo *VAR_11;

  VAR_11 = &VAR_6->fds[VAR_9];
  switch (VAR_11->proc_fdtype) {
   case 128 : {
    int VAR_12;
    struct vnode_fdinfo VAR_13;

    VAR_12 = FUNC_2(VAR_7, VAR_11->proc_fd, VAR_3, &VAR_13, sizeof(VAR_13));
    if (VAR_12 <= 0) {
     if (VAR_5 == VAR_0) {






      continue;
     }
     return -1;
    } else if (VAR_12 < sizeof(VAR_13)) {

     return -1;
    }

    if ((VAR_6->flags & VAR_2) &&
        (VAR_13.pfi.fi_openflags & VAR_1)) {

     continue;
    }

    VAR_10 = FUNC_0(VAR_6, &VAR_13.pvi.vi_stat);
    if (VAR_10 != 0) {

     return VAR_10;
    }
    break;
   }
   default :
    break;
  }
 }

 return 0;
}
