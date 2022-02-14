
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
typedef TYPE_1__* uthread_t ;
typedef scalar_t__ thread_t ;
struct nameidata {scalar_t__ ni_vp; } ;
struct filedesc {scalar_t__ fd_cdir; } ;
struct chdir_args {int path; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_8__ {int p_flag; struct filedesc* p_fd; } ;
struct TYPE_7__ {scalar_t__ uu_cdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ,int ,int,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct nameidata*,int ) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11(proc_t VAR_7, struct chdir_args *VAR_8, int VAR_9)
{
 struct filedesc *VAR_10 = VAR_7->p_fd;
 int VAR_11;
 struct nameidata VAR_12;
 vnode_t VAR_13;
 vfs_context_t VAR_14 = FUNC_6();

 FUNC_0(&VAR_12, VAR_3, VAR_4, VAR_2 | VAR_0,
  VAR_6, VAR_8->path, VAR_14);
 VAR_11 = FUNC_2(&VAR_12, VAR_14);
 if (VAR_11)
  return (VAR_11);
 if ( (VAR_11 = FUNC_9(VAR_12.ni_vp)) ) {
         FUNC_8(VAR_12.ni_vp);
  return (VAR_11);
 }



 FUNC_8(VAR_12.ni_vp);

 if (VAR_9) {
  thread_t VAR_15 = FUNC_7(VAR_14);
  if (VAR_15) {
   uthread_t VAR_16 = FUNC_3(VAR_15);
   VAR_13 = VAR_16->uu_cdir;
   VAR_16->uu_cdir = VAR_12.ni_vp;
   FUNC_1(VAR_5, &VAR_7->p_flag);
  } else {
   FUNC_10(VAR_12.ni_vp);
   return (VAR_1);
  }
 } else {
  FUNC_4(VAR_7);
  VAR_13 = VAR_10->fd_cdir;
  VAR_10->fd_cdir = VAR_12.ni_vp;
  FUNC_5(VAR_7);
 }

 if (VAR_13)
         FUNC_10(VAR_13);

 return (0);
}
