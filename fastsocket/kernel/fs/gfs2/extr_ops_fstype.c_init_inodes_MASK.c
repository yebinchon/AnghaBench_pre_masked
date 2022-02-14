
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_sbd {void* sd_statfs_inode; void* sd_rindex; void* sd_quota_inode; scalar_t__ sd_rindex_uptodate; TYPE_1__* sd_master_dir; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (struct gfs2_sbd*,char*,int) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 void* FUNC_4 (struct inode*,char*) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (struct gfs2_sbd*,int) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(struct gfs2_sbd *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct inode *VAR_4 = VAR_1->sd_master_dir->d_inode;

 if (VAR_2)
  goto fail_qinode;

 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (VAR_3)
  goto fail;


 VAR_1->sd_statfs_inode = FUNC_4(VAR_4, "statfs");
 if (FUNC_0(VAR_1->sd_statfs_inode)) {
  VAR_3 = FUNC_1(VAR_1->sd_statfs_inode);
  FUNC_2(VAR_1, "can't read in statfs inode: %d\n", VAR_3);
  goto fail_journal;
 }


 VAR_1->sd_rindex = FUNC_4(VAR_4, "rindex");
 if (FUNC_0(VAR_1->sd_rindex)) {
  VAR_3 = FUNC_1(VAR_1->sd_rindex);
  FUNC_2(VAR_1, "can't get resource index inode: %d\n", VAR_3);
  goto fail_statfs;
 }
 VAR_1->sd_rindex_uptodate = 0;


 VAR_1->sd_quota_inode = FUNC_4(VAR_4, "quota");
 if (FUNC_0(VAR_1->sd_quota_inode)) {
  VAR_3 = FUNC_1(VAR_1->sd_quota_inode);
  FUNC_2(VAR_1, "can't get quota file inode: %d\n", VAR_3);
  goto fail_rindex;
 }

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  goto fail_qinode;

 return 0;

fail_qinode:
 FUNC_7(VAR_1->sd_quota_inode);
fail_rindex:
 FUNC_3(VAR_1);
 FUNC_7(VAR_1->sd_rindex);
fail_statfs:
 FUNC_7(VAR_1->sd_statfs_inode);
fail_journal:
 FUNC_6(VAR_1, VAR_0);
fail:
 return VAR_3;
}
