
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,struct inode*,struct dentry*,int) ;
 int FUNC_2 (struct p9_fid*) ;
 int FUNC_3 (struct p9_fid*) ;
 struct p9_fid* FUNC_4 (struct dentry*) ;
 struct v9fs_session_info* FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4;
 struct v9fs_session_info *VAR_5;
 struct p9_fid *VAR_6;

 FUNC_1(VAR_0, "inode: %p dentry: %p rmdir: %d\n", VAR_1, VAR_2,
  VAR_3);

 VAR_4 = VAR_2->d_inode;
 VAR_5 = FUNC_5(VAR_4);
 VAR_6 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);

 return FUNC_3(VAR_6);
}
