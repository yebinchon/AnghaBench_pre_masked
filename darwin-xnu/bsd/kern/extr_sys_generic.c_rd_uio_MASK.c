
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
typedef int uio_t ;
struct vfs_context {int vc_ucred; } ;
struct proc {int dummy; } ;
struct fileproc {int f_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,struct fileproc*,int) ;
 int FUNC_1 (struct fileproc*,int ,int ,struct vfs_context*) ;
 int FUNC_2 (struct proc*,struct fileproc**,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct vfs_context* FUNC_4 () ;

int
FUNC_5(struct proc *VAR_3, int VAR_4, uio_t VAR_5, user_ssize_t *VAR_6)
{
 struct fileproc *VAR_7;
 int VAR_8;
 user_ssize_t VAR_9;
 struct vfs_context VAR_10 = *FUNC_4();

 if ( (VAR_8 = FUNC_2(VAR_3, &VAR_7, VAR_4, 0)) )
         return (VAR_8);

 VAR_9 = FUNC_3(VAR_5);

 VAR_10.vc_ucred = VAR_7->f_cred;

 VAR_8 = FUNC_1(VAR_7, VAR_5, 0, &VAR_10);

 if (VAR_8) {
         if (FUNC_3(VAR_5) != VAR_9 && (VAR_8 == VAR_1 ||
      VAR_8 == VAR_0 || VAR_8 == VAR_2))
          VAR_8 = 0;
 }
 *VAR_6 = VAR_9 - FUNC_3(VAR_5);

 FUNC_0(VAR_3, VAR_7, VAR_4);

 return (VAR_8);
}
