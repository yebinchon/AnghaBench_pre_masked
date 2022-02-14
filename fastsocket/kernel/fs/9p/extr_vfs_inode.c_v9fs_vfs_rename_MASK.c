
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int uname; } ;
struct p9_wstat {char* name; int muid; } ;
struct p9_fid {int qid; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ name; } ;
struct dentry {TYPE_1__ d_name; int d_parent; struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct p9_fid*) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*,struct p9_wstat*) ;
 int FUNC_6 (struct p9_wstat*) ;
 struct p9_fid* FUNC_7 (int ) ;
 struct p9_fid* FUNC_8 (struct dentry*) ;
 struct v9fs_session_info* FUNC_9 (struct inode*) ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_3, struct dentry *VAR_4,
  struct inode *VAR_5, struct dentry *VAR_6)
{
 struct inode *VAR_7;
 struct v9fs_session_info *VAR_8;
 struct p9_fid *VAR_9;
 struct p9_fid *VAR_10;
 struct p9_fid *VAR_11;
 struct p9_wstat VAR_12;
 int VAR_13;

 FUNC_1(VAR_2, "\n");
 VAR_13 = 0;
 VAR_7 = VAR_4->d_inode;
 VAR_8 = FUNC_9(VAR_7);
 VAR_9 = FUNC_8(VAR_4);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 VAR_10 = FUNC_7(VAR_4->d_parent);
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_2(VAR_10);
  goto done;
 }

 VAR_11 = FUNC_7(VAR_6->d_parent);
 if (FUNC_0(VAR_11)) {
  VAR_13 = FUNC_2(VAR_11);
  goto clunk_olddir;
 }


 if (FUNC_3(&VAR_10->qid, &VAR_11->qid, sizeof(VAR_11->qid))) {
  FUNC_1(VAR_1,
    "old dir and new dir are different\n");
  VAR_13 = -VAR_0;
  goto clunk_newdir;
 }

 FUNC_6(&VAR_12);
 VAR_12.muid = VAR_8->uname;
 VAR_12.name = (char *) VAR_6->d_name.name;
 VAR_13 = FUNC_5(VAR_9, &VAR_12);

clunk_newdir:
 FUNC_4(VAR_11);

clunk_olddir:
 FUNC_4(VAR_10);

done:
 return VAR_13;
}
