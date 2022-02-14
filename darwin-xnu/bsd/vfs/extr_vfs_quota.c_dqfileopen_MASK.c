
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uio_t ;
typedef int uio_buf ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct quotafile {int qf_btime; int qf_itime; int qf_maxentries; int qf_entrycnt; int qf_shift; int qf_vp; int qf_cred; } ;
struct dqfilehdr {scalar_t__ dqh_magic; scalar_t__ dqh_version; scalar_t__ dqh_maxentries; scalar_t__ dqh_btime; scalar_t__ dqh_itime; scalar_t__ dqh_entrycnt; } ;
struct dqblk {int dummy; } ;
typedef int off_t ;
typedef int header ;


 int FUNC_0 (struct dqfilehdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,struct vfs_context*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int* VAR_6 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int,int ,int ,int ,char*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int*,struct vfs_context*) ;

int
FUNC_11(struct quotafile *VAR_7, int VAR_8)
{
 struct dqfilehdr VAR_9;
 struct vfs_context VAR_10;
 off_t VAR_11;
 uio_t VAR_12;
 int VAR_13 = 0;
 char VAR_14[ FUNC_2(1) ];

 VAR_10.vc_thread = FUNC_4();
 VAR_10.vc_ucred = VAR_7->qf_cred;


 if ((VAR_13 = FUNC_10(VAR_7->qf_vp, &VAR_11, &VAR_10)) != 0)
         goto out;


 VAR_12 = FUNC_8(1, 0, VAR_5, VAR_4,
        &VAR_14[0], sizeof(VAR_14));
 FUNC_7(VAR_12, FUNC_0(&VAR_9), sizeof (VAR_9));
 VAR_13 = FUNC_3(VAR_7->qf_vp, VAR_12, 0, &VAR_10);
 if (VAR_13)
         goto out;
 else if (FUNC_9(VAR_12)) {
  VAR_13 = VAR_0;
  goto out;
 }

 if ((FUNC_1(VAR_9.dqh_magic) != VAR_6[VAR_8]) ||
     (FUNC_1(VAR_9.dqh_version) > VAR_3) ||
     (!FUNC_6(FUNC_1(VAR_9.dqh_maxentries))) ||
     (FUNC_1(VAR_9.dqh_maxentries) > (VAR_11 / sizeof(struct dqblk)))) {
  VAR_13 = VAR_0;
  goto out;
 }

 if (VAR_9.dqh_btime != 0)
  VAR_7->qf_btime = FUNC_1(VAR_9.dqh_btime);
 else
  VAR_7->qf_btime = VAR_1;
 if (VAR_9.dqh_itime != 0)
  VAR_7->qf_itime = FUNC_1(VAR_9.dqh_itime);
 else
  VAR_7->qf_itime = VAR_2;


 VAR_7->qf_maxentries = FUNC_1(VAR_9.dqh_maxentries);
 VAR_7->qf_entrycnt = FUNC_1(VAR_9.dqh_entrycnt);
 VAR_7->qf_shift = FUNC_5(VAR_7->qf_maxentries);
out:
 return (VAR_13);
}
