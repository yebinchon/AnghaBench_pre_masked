
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v9fs_session_info {int dummy; } ;
struct p9_wstat {int n_gid; int n_uid; int length; int atime; int mtime; int mode; } ;
struct p9_fid {int dummy; } ;
struct TYPE_4__ {int tv_sec; } ;
struct TYPE_3__ {int tv_sec; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; int ia_size; TYPE_2__ ia_atime; TYPE_1__ ia_mtime; int ia_mode; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct p9_fid*) ;
 int FUNC_3 (int ,struct iattr*) ;
 int FUNC_4 (struct p9_fid*,struct p9_wstat*) ;
 int FUNC_5 (struct v9fs_session_info*,int ) ;
 int FUNC_6 (struct p9_wstat*) ;
 scalar_t__ FUNC_7 (struct v9fs_session_info*) ;
 struct p9_fid* FUNC_8 (struct dentry*) ;
 struct v9fs_session_info* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_8, struct iattr *VAR_9)
{
 int VAR_10;
 struct v9fs_session_info *VAR_11;
 struct p9_fid *VAR_12;
 struct p9_wstat VAR_13;

 FUNC_1(VAR_7, "\n");
 VAR_10 = -VAR_6;
 VAR_11 = FUNC_9(VAR_8->d_inode);
 VAR_12 = FUNC_8(VAR_8);
 if(FUNC_0(VAR_12))
  return FUNC_2(VAR_12);

 FUNC_6(&VAR_13);
 if (VAR_9->ia_valid & VAR_2)
  VAR_13.mode = FUNC_5(VAR_11, VAR_9->ia_mode);

 if (VAR_9->ia_valid & VAR_3)
  VAR_13.mtime = VAR_9->ia_mtime.tv_sec;

 if (VAR_9->ia_valid & VAR_0)
  VAR_13.atime = VAR_9->ia_atime.tv_sec;

 if (VAR_9->ia_valid & VAR_4)
  VAR_13.length = VAR_9->ia_size;

 if (FUNC_7(VAR_11)) {
  if (VAR_9->ia_valid & VAR_5)
   VAR_13.n_uid = VAR_9->ia_uid;

  if (VAR_9->ia_valid & VAR_1)
   VAR_13.n_gid = VAR_9->ia_gid;
 }

 VAR_10 = FUNC_4(VAR_12, &VAR_13);
 if (VAR_10 >= 0)
  VAR_10 = FUNC_3(VAR_8->d_inode, VAR_9);

 return VAR_10;
}
