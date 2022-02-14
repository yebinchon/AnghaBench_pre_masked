
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_5__ {scalar_t__ ar_spectator; } ;
struct gfs2_sbd {struct inode* sd_sc_inode; struct inode* sd_qc_inode; int sd_sc_gh; int sd_qc_gh; TYPE_3__* sd_jdesc; TYPE_2__ sd_args; TYPE_1__* sd_master_dir; } ;
struct gfs2_inode {int i_gl; } ;
struct TYPE_6__ {int jd_jid; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct gfs2_sbd*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 void* FUNC_6 (struct inode*,char*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct gfs2_sbd *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = ((void*)0);
 char VAR_4[30];
 int VAR_5 = 0;
 struct gfs2_inode *VAR_6;
 struct inode *VAR_7 = VAR_1->sd_master_dir->d_inode;

 if (VAR_1->sd_args.ar_spectator)
  return 0;

 if (VAR_2)
  goto fail_qc_gh;

 VAR_3 = FUNC_6(VAR_7, "per_node");
 if (FUNC_1(VAR_3)) {
  VAR_5 = FUNC_2(VAR_3);
  FUNC_3(VAR_1, "can't find per_node directory: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_8(VAR_4, "statfs_change%u", VAR_1->sd_jdesc->jd_jid);
 VAR_1->sd_sc_inode = FUNC_6(VAR_3, VAR_4);
 if (FUNC_1(VAR_1->sd_sc_inode)) {
  VAR_5 = FUNC_2(VAR_1->sd_sc_inode);
  FUNC_3(VAR_1, "can't find local \"sc\" file: %d\n", VAR_5);
  goto fail;
 }

 FUNC_8(VAR_4, "quota_change%u", VAR_1->sd_jdesc->jd_jid);
 VAR_1->sd_qc_inode = FUNC_6(VAR_3, VAR_4);
 if (FUNC_1(VAR_1->sd_qc_inode)) {
  VAR_5 = FUNC_2(VAR_1->sd_qc_inode);
  FUNC_3(VAR_1, "can't find local \"qc\" file: %d\n", VAR_5);
  goto fail_ut_i;
 }

 FUNC_7(VAR_3);
 VAR_3 = ((void*)0);

 VAR_6 = FUNC_0(VAR_1->sd_sc_inode);
 VAR_5 = FUNC_5(VAR_6->i_gl, VAR_0, 0,
       &VAR_1->sd_sc_gh);
 if (VAR_5) {
  FUNC_3(VAR_1, "can't lock local \"sc\" file: %d\n", VAR_5);
  goto fail_qc_i;
 }

 VAR_6 = FUNC_0(VAR_1->sd_qc_inode);
 VAR_5 = FUNC_5(VAR_6->i_gl, VAR_0, 0,
       &VAR_1->sd_qc_gh);
 if (VAR_5) {
  FUNC_3(VAR_1, "can't lock local \"qc\" file: %d\n", VAR_5);
  goto fail_ut_gh;
 }

 return 0;

fail_qc_gh:
 FUNC_4(&VAR_1->sd_qc_gh);
fail_ut_gh:
 FUNC_4(&VAR_1->sd_sc_gh);
fail_qc_i:
 FUNC_7(VAR_1->sd_qc_inode);
fail_ut_i:
 FUNC_7(VAR_1->sd_sc_inode);
fail:
 if (VAR_3)
  FUNC_7(VAR_3);
 return VAR_5;
}
