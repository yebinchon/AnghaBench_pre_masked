
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uio_t ;
typedef int uio_buf ;
struct vnode {int dummy; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct dqblk {scalar_t__* dqb_spare; void* dqb_id; void* dqb_itime; void* dqb_btime; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; void* dqb_curbytes; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;
struct dquot {scalar_t__ dq_id; int dq_flags; struct dqblk dq_dqb; TYPE_1__* dq_qfile; int dq_index; } ;
struct TYPE_2__ {int qf_cred; struct vnode* qf_vp; } ;


 int FUNC_0 (struct dqblk*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vnode* VAR_2 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct vnode*,int ,int ,struct vfs_context*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int,int ,int ,int ,char*,int) ;
 scalar_t__ FUNC_10 (int ) ;

int
FUNC_11(struct dquot *VAR_5)
{
 struct vfs_context VAR_6;
 struct vnode *VAR_7;
 struct dqblk VAR_8, *VAR_9;
 uio_t VAR_10;
 int VAR_11;
 char VAR_12[ FUNC_3(1) ];

 if (VAR_5->dq_id == 0) {
         VAR_5->dq_flags &= ~VAR_0;
  return (0);
 }
 if (VAR_5->dq_qfile == ((void*)0))
  FUNC_7("dqsync: NULL dq_qfile");
 if ((VAR_7 = VAR_5->dq_qfile->qf_vp) == VAR_2)
  FUNC_7("dqsync: NULL qf_vp");

 VAR_10 = FUNC_9(1, FUNC_6(VAR_5->dq_index), VAR_3,
          VAR_4, &VAR_12[0], sizeof(VAR_12));
 FUNC_8(VAR_10, FUNC_0(&VAR_8), sizeof (struct dqblk));

 VAR_6.vc_thread = FUNC_5();
 VAR_6.vc_ucred = VAR_5->dq_qfile->qf_cred;

 VAR_9 = &VAR_5->dq_dqb;
 VAR_8.dqb_bhardlimit = FUNC_2(VAR_9->dqb_bhardlimit);
 VAR_8.dqb_bsoftlimit = FUNC_2(VAR_9->dqb_bsoftlimit);
 VAR_8.dqb_curbytes = FUNC_2(VAR_9->dqb_curbytes);
 VAR_8.dqb_ihardlimit = FUNC_1(VAR_9->dqb_ihardlimit);
 VAR_8.dqb_isoftlimit = FUNC_1(VAR_9->dqb_isoftlimit);
 VAR_8.dqb_curinodes = FUNC_1(VAR_9->dqb_curinodes);
 VAR_8.dqb_btime = FUNC_1(VAR_9->dqb_btime);
 VAR_8.dqb_itime = FUNC_1(VAR_9->dqb_itime);
 VAR_8.dqb_id = FUNC_1(VAR_9->dqb_id);
 VAR_8.dqb_spare[0] = 0;
 VAR_8.dqb_spare[1] = 0;
 VAR_8.dqb_spare[2] = 0;
 VAR_8.dqb_spare[3] = 0;

 VAR_11 = FUNC_4(VAR_7, VAR_10, 0, &VAR_6);
 if (FUNC_10(VAR_10) && VAR_11 == 0)
  VAR_11 = VAR_1;
 VAR_5->dq_flags &= ~VAR_0;

 return (VAR_11);
}
