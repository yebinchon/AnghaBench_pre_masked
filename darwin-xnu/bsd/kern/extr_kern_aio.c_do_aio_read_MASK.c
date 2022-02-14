
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfs_context {int vc_ucred; int vc_thread; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
struct TYPE_6__ {int aio_fildes; int aio_offset; int aio_nbytes; int aio_buf; } ;
struct TYPE_7__ {TYPE_2__ aiocb; int procp; int returnval; int thread; } ;
typedef TYPE_3__ aio_workq_entry ;
struct TYPE_5__ {int fg_flag; int fg_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vfs_context*,struct fileproc*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,struct fileproc*,int ) ;
 int FUNC_2 (int ,int ,struct fileproc**,int ) ;

__attribute__((used)) static int
FUNC_3( aio_workq_entry *VAR_3 )
{
 struct fileproc *VAR_4;
 int VAR_5;
 struct vfs_context VAR_6;

 if ( (VAR_5 = FUNC_2(VAR_3->procp, VAR_3->aiocb.aio_fildes, &VAR_4 , 0)) )
  return(VAR_5);
 if ( (VAR_4->f_fglob->fg_flag & VAR_2) == 0 ) {
  FUNC_1(VAR_3->procp, VAR_3->aiocb.aio_fildes, VAR_4, 0);
  return(VAR_0);
 }

 VAR_6.vc_thread = VAR_3->thread;
 VAR_6.vc_ucred = VAR_4->f_fglob->fg_cred;

 VAR_5 = FUNC_0(&VAR_6, VAR_4,
    VAR_3->aiocb.aio_buf,
    VAR_3->aiocb.aio_nbytes,
    VAR_3->aiocb.aio_offset, VAR_1,
    &VAR_3->returnval);
 FUNC_1(VAR_3->procp, VAR_3->aiocb.aio_fildes, VAR_4, 0);

 return( VAR_5 );

}
