
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
struct TYPE_6__ {int aio_fildes; } ;
struct TYPE_7__ {int flags; int returnval; TYPE_2__ aiocb; int procp; } ;
typedef TYPE_3__ aio_workq_entry ;
struct TYPE_5__ {int fg_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*,int,struct vfs_context*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct fileproc*,int ) ;
 int FUNC_3 (int ,int ,struct fileproc**,struct vnode**) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static int
FUNC_6( aio_workq_entry *VAR_3 )
{
 struct vfs_context VAR_4;
 struct vnode *VAR_5;
 struct fileproc *VAR_6;
 int VAR_7;
 int VAR_8;
 if (VAR_3->flags & VAR_0)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;

 VAR_8 = FUNC_3( VAR_3->procp, VAR_3->aiocb.aio_fildes, &VAR_6, &VAR_5);
 if ( VAR_8 == 0 ) {
  if ( (VAR_8 = FUNC_4(VAR_5)) ) {
          FUNC_2(VAR_3->procp, VAR_3->aiocb.aio_fildes, VAR_6, 0);
   VAR_3->returnval = -1;
   return(VAR_8);
  }
  VAR_4.vc_thread = FUNC_1();
  VAR_4.vc_ucred = VAR_6->f_fglob->fg_cred;

  VAR_8 = FUNC_0( VAR_5, VAR_7, &VAR_4);

  (void)FUNC_5(VAR_5);

  FUNC_2(VAR_3->procp, VAR_3->aiocb.aio_fildes, VAR_6, 0);
 }
 if ( VAR_8 != 0 )
  VAR_3->returnval = -1;

 return( VAR_8 );

}
