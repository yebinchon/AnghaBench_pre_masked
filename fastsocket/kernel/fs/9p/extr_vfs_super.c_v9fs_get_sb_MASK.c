
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct v9fs_session_info {int qid; struct dentry* s_root; } ;
struct super_block {int qid; struct dentry* s_root; } ;
struct p9_wstat {int qid; struct dentry* s_root; } ;
struct p9_fid {int qid; struct dentry* s_root; } ;
struct inode {int qid; struct dentry* s_root; } ;
struct file_system_type {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct v9fs_session_info*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct v9fs_session_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dentry* FUNC_3 (struct v9fs_session_info*) ;
 int FUNC_4 (struct v9fs_session_info*) ;
 int FUNC_5 (struct v9fs_session_info*) ;
 int FUNC_6 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_7 (int,int ) ;
 int FUNC_8 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_9 (struct v9fs_session_info*) ;
 int FUNC_10 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_11 (struct file_system_type*,int *,int ,struct v9fs_session_info*) ;
 int FUNC_12 (struct vfsmount*,struct v9fs_session_info*) ;
 int FUNC_13 (struct dentry*,struct v9fs_session_info*) ;
 int FUNC_14 (struct v9fs_session_info*,struct v9fs_session_info*,int,void*) ;
 struct v9fs_session_info* FUNC_15 (struct v9fs_session_info*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_18 (struct v9fs_session_info*,char const*,void*) ;
 int VAR_6 ;
 int FUNC_19 (struct v9fs_session_info*,TYPE_1__*,struct v9fs_session_info*) ;

__attribute__((used)) static int FUNC_20(struct file_system_type *VAR_7, int VAR_8,
         const char *VAR_9, void *VAR_10,
         struct vfsmount *VAR_11)
{
 struct super_block *VAR_12 = ((void*)0);
 struct inode *VAR_13 = ((void*)0);
 struct dentry *VAR_14 = ((void*)0);
 struct v9fs_session_info *VAR_15 = ((void*)0);
 struct p9_wstat *VAR_16 = ((void*)0);
 int VAR_17 = VAR_4 | VAR_5;
 struct p9_fid *VAR_18;
 int VAR_19 = 0;

 FUNC_1(VAR_2, " \n");

 VAR_15 = FUNC_7(sizeof(struct v9fs_session_info), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_18 = FUNC_18(VAR_15, VAR_9, VAR_10);
 if (FUNC_0(VAR_18)) {
  VAR_19 = FUNC_2(VAR_18);
  goto close_session;
 }

 VAR_16 = FUNC_9(VAR_18);
 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_2(VAR_16);
  goto clunk_fid;
 }

 VAR_12 = FUNC_11(VAR_7, ((void*)0), VAR_6, VAR_15);
 if (FUNC_0(VAR_12)) {
  VAR_19 = FUNC_2(VAR_12);
  goto free_stat;
 }
 FUNC_14(VAR_12, VAR_15, VAR_8, VAR_10);

 VAR_13 = FUNC_15(VAR_12, VAR_3 | VAR_17);
 if (FUNC_0(VAR_13)) {
  VAR_19 = FUNC_2(VAR_13);
  goto release_sb;
 }

 VAR_14 = FUNC_3(VAR_13);
 if (!VAR_14) {
  FUNC_5(VAR_13);
  VAR_19 = -VAR_0;
  goto release_sb;
 }

 VAR_12->s_root = VAR_14;
 VAR_14->d_inode->i_ino = FUNC_16(&VAR_16->qid);

 FUNC_19(VAR_16, VAR_14->d_inode, VAR_12);

 FUNC_13(VAR_14, VAR_18);
 FUNC_10(VAR_16);
 FUNC_6(VAR_16);

FUNC_1(VAR_2, " simple set mount, return 0\n");
 FUNC_12(VAR_11, VAR_12);
 return 0;

free_stat:
 FUNC_10(VAR_16);
 FUNC_6(VAR_16);

clunk_fid:
 FUNC_8(VAR_18);

close_session:
 FUNC_17(VAR_15);
 FUNC_6(VAR_15);
 return VAR_19;

release_sb:
 FUNC_10(VAR_16);
 FUNC_6(VAR_16);
 FUNC_4(VAR_12);
 return VAR_19;
}
