
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uio_t ;
typedef int uio_buf ;
typedef int uint32_t ;
typedef int u_int32_t ;
struct vnode {int dummy; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct quotafile {int qf_maxentries; int qf_entrycnt; int qf_shift; int qf_cred; struct vnode* qf_vp; } ;
struct dqblk {int dqb_id; int dqb_ihardlimit; int dqb_isoftlimit; int dqb_curinodes; int dqb_btime; int dqb_itime; void* dqb_curbytes; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;


 int FUNC_0 (struct dqblk*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct vnode*,int ,int ,struct vfs_context*) ;
 int FUNC_6 (struct vnode*,int ,int ,struct vfs_context*) ;
 int FUNC_7 (struct dqblk*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int,int,...) ;
 int FUNC_13 (struct quotafile*) ;
 int FUNC_14 (struct quotafile*) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int,int ,int ,int ,char*,int) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(struct quotafile *VAR_4, u_int32_t VAR_5, struct dqblk *VAR_6, uint32_t *VAR_7)
{
 struct vnode *VAR_8;
 struct vfs_context VAR_9;
 uio_t VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u_int32_t VAR_14;
 int VAR_15 = 0;
 char VAR_16[ FUNC_4(1) ];


 FUNC_13(VAR_4);

 VAR_8 = VAR_4->qf_vp;

 VAR_9.vc_thread = FUNC_8();
 VAR_9.vc_ucred = VAR_4->qf_cred;

 VAR_14 = VAR_4->qf_maxentries - 1;
 VAR_11 = FUNC_9(VAR_5, VAR_4->qf_shift, VAR_14);
 VAR_12 = FUNC_10(VAR_5, VAR_14);

 for (VAR_13 = (VAR_11 + (VAR_4->qf_maxentries-1) * VAR_12) & VAR_14;
      VAR_11 != VAR_13;
      VAR_11 = (VAR_11 + VAR_12) & VAR_14) {
  VAR_10 = FUNC_16(1, FUNC_11(VAR_11), VAR_2, VAR_1,
           &VAR_16[0], sizeof(VAR_16));
  FUNC_15(VAR_10, FUNC_0(VAR_6), sizeof (struct dqblk));
  VAR_15 = FUNC_5(VAR_8, VAR_10, 0, &VAR_9);
  if (VAR_15) {
   FUNC_12("dqlookup: error %d looking up id %u at index %d\n", VAR_15, VAR_5, VAR_11);
   break;
  } else if (FUNC_18(VAR_10)) {
   VAR_15 = VAR_0;
   FUNC_12("dqlookup: error looking up id %u at index %d\n", VAR_5, VAR_11);
   break;
  }





  if (VAR_6->dqb_id == 0) {
   FUNC_7(VAR_6, sizeof(struct dqblk));
   VAR_6->dqb_id = FUNC_3(VAR_5);



   FUNC_17(VAR_10, FUNC_11(VAR_11), VAR_2, VAR_3);
   FUNC_15(VAR_10, FUNC_0(VAR_6), sizeof (struct dqblk));
   VAR_15 = FUNC_6(VAR_8, VAR_10, 0, &VAR_9);
   if (FUNC_18(VAR_10) && VAR_15 == 0)
    VAR_15 = VAR_0;
   if (VAR_15 == 0)
    ++VAR_4->qf_entrycnt;
   VAR_6->dqb_id = VAR_5;
   break;
  }

  if (FUNC_1(VAR_6->dqb_id) == VAR_5) {
   VAR_6->dqb_bhardlimit = FUNC_2(VAR_6->dqb_bhardlimit);
   VAR_6->dqb_bsoftlimit = FUNC_2(VAR_6->dqb_bsoftlimit);
   VAR_6->dqb_curbytes = FUNC_2(VAR_6->dqb_curbytes);
   VAR_6->dqb_ihardlimit = FUNC_1(VAR_6->dqb_ihardlimit);
   VAR_6->dqb_isoftlimit = FUNC_1(VAR_6->dqb_isoftlimit);
   VAR_6->dqb_curinodes = FUNC_1(VAR_6->dqb_curinodes);
   VAR_6->dqb_btime = FUNC_1(VAR_6->dqb_btime);
   VAR_6->dqb_itime = FUNC_1(VAR_6->dqb_itime);
   VAR_6->dqb_id = FUNC_1(VAR_6->dqb_id);
   break;
  }
 }
 FUNC_14(VAR_4);

 *VAR_7 = VAR_11;

 return (VAR_15);
}
