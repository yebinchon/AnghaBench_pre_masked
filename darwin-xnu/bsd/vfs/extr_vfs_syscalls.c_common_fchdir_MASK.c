
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef TYPE_2__* uthread_t ;
typedef scalar_t__ thread_t ;
struct mount {int dummy; } ;
struct filedesc {TYPE_1__* fd_cdir; } ;
struct fchdir_args {int fd; } ;
typedef TYPE_3__* proc_t ;
struct TYPE_19__ {int p_flag; struct filedesc* p_fd; } ;
struct TYPE_18__ {TYPE_1__* uu_cdir; } ;
struct TYPE_17__ {scalar_t__ v_type; struct mount* v_mountedhere; } ;


 int VAR_0 ;
 int FUNC_0 (int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct mount*,TYPE_1__**,int ) ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,TYPE_1__**) ;
 TYPE_2__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct mount*,int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct mount*) ;
 int FUNC_13 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_18(proc_t VAR_12, struct fchdir_args *VAR_13, int VAR_14)
{
 struct filedesc *VAR_15 = VAR_12->p_fd;
 vnode_t VAR_16;
 vnode_t VAR_17;
 vnode_t VAR_18;
 struct mount *VAR_19;
 int VAR_20;
 vfs_context_t VAR_21 = FUNC_10();

 FUNC_0(VAR_10, VAR_13->fd);
 if (VAR_14 && VAR_13->fd == -1) {






  thread_t VAR_22 = FUNC_11(VAR_21);
  if (VAR_22) {
   uthread_t VAR_23 = FUNC_5(VAR_22);
   VAR_18 = VAR_23->uu_cdir;
   VAR_23->uu_cdir = VAR_7;
   if (VAR_18 != VAR_7) {
    FUNC_17(VAR_18);
    return (0);
   }
  }
  return (VAR_2);
 }

 if ( (VAR_20 = FUNC_4(VAR_13->fd, &VAR_16)) )
  return(VAR_20);
 if ( (VAR_20 = FUNC_14(VAR_16)) ) {
         FUNC_3(VAR_13->fd);
  return(VAR_20);
 }

 FUNC_0(VAR_11, VAR_16, VAR_0);

 if (VAR_16->v_type != VAR_9) {
  VAR_20 = VAR_4;
  goto out;
 }






 VAR_20 = FUNC_13(VAR_16, ((void*)0), VAR_5, VAR_21);
 if (VAR_20)
  goto out;

 while (!VAR_20 && (VAR_19 = VAR_16->v_mountedhere) != ((void*)0)) {
  if (FUNC_9(VAR_19, VAR_6)) {
   VAR_20 = VAR_1;
   goto out;
  }
  VAR_20 = FUNC_2(VAR_19, &VAR_17, VAR_21);
  FUNC_12(VAR_19);
  if (VAR_20)
   break;
  FUNC_15(VAR_16);
  VAR_16 = VAR_17;
 }
 if (VAR_20)
  goto out;
 if ( (VAR_20 = FUNC_16(VAR_16)) )
         goto out;
 FUNC_15(VAR_16);

 if (VAR_14) {
  thread_t VAR_24 = FUNC_11(VAR_21);
  if (VAR_24) {
   uthread_t VAR_25 = FUNC_5(VAR_24);
   VAR_18 = VAR_25->uu_cdir;
   VAR_25->uu_cdir = VAR_16;
   FUNC_1(VAR_8, &VAR_12->p_flag);
  } else {
   FUNC_17(VAR_16);
   return (VAR_3);
  }
 } else {
  FUNC_7(VAR_12);
  VAR_18 = VAR_15->fd_cdir;
  VAR_15->fd_cdir = VAR_16;
  FUNC_8(VAR_12);
 }

 if (VAR_18)
         FUNC_17(VAR_18);
 FUNC_3(VAR_13->fd);

 return (0);
out:
 FUNC_15(VAR_16);
 FUNC_3(VAR_13->fd);

 return(VAR_20);
}
