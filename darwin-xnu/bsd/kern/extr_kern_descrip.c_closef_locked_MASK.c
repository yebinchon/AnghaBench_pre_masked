
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vfs_context {int vc_ucred; int * vc_thread; } ;
struct flock {int l_type; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
struct fileproc {int f_flags; } ;
struct fileglob {scalar_t__ fg_count; int fg_lock; int fg_lflags; int fg_flag; scalar_t__ fg_data; int fg_cred; } ;
typedef TYPE_1__* proc_t ;
typedef int caddr_t ;
struct TYPE_6__ {int p_ladvflag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct vnode*,int ,int ,struct flock*,int ,struct vfs_context*,int *) ;
 TYPE_1__* FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (struct fileglob*) ;
 int FUNC_5 (struct fileglob*,struct vfs_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,struct fileglob*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct fileproc *VAR_8, struct fileglob *VAR_9, proc_t VAR_10)
{
 struct vnode *VAR_11;
 struct flock VAR_12;
 struct vfs_context VAR_13;
 int VAR_14;

 if (VAR_9 == ((void*)0)) {
  return (0);
 }


 if (VAR_10 == FUNC_2())
  VAR_13.vc_thread = FUNC_3();
 else
  VAR_13.vc_thread = ((void*)0);
 VAR_13.vc_ucred = VAR_9->fg_cred;
 if (VAR_10 && (VAR_10->p_ladvflag & VAR_6) &&
     VAR_0 == FUNC_0(VAR_9)) {
  FUNC_10(VAR_10);

  VAR_12.l_whence = VAR_7;
  VAR_12.l_start = 0;
  VAR_12.l_len = 0;
  VAR_12.l_type = VAR_5;
  VAR_11 = (struct vnode *)VAR_9->fg_data;

  if ( (VAR_14 = FUNC_11(VAR_11)) == 0 ) {
   (void) FUNC_1(VAR_11, (caddr_t)VAR_10, VAR_5, &VAR_12, VAR_4, &VAR_13, ((void*)0));
   (void)FUNC_12(VAR_11);
  }
  FUNC_9(VAR_10);
 }
 FUNC_6(&VAR_9->fg_lock);
 VAR_9->fg_count--;

 if (VAR_9->fg_count > 0) {
  FUNC_7(&VAR_9->fg_lock);
  return (0);
 }





 if (VAR_8 && (VAR_8->f_flags & VAR_2))
         VAR_9->fg_flag |= VAR_3;

 VAR_9->fg_lflags |= VAR_1;
 FUNC_7(&VAR_9->fg_lock);

 if (VAR_10)
  FUNC_10(VAR_10);



 VAR_14 = FUNC_5(VAR_9, &VAR_13);

 FUNC_4(VAR_9);

 if (VAR_10)
  FUNC_9(VAR_10);

 return(VAR_14);
}
