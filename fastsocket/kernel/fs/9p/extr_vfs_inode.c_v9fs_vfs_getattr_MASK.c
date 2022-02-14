
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct p9_wstat {int dummy; } ;
typedef struct p9_wstat p9_fid ;
struct kstat {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct p9_wstat*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,struct dentry*) ;
 int FUNC_2 (struct p9_wstat*) ;
 int FUNC_3 (TYPE_1__*,struct kstat*) ;
 int FUNC_4 (struct p9_wstat*) ;
 struct p9_wstat* FUNC_5 (struct p9_wstat*) ;
 int FUNC_6 (struct vfsmount*,struct dentry*,struct kstat*) ;
 struct p9_wstat* FUNC_7 (struct dentry*) ;
 struct v9fs_session_info* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct p9_wstat*,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_10(struct vfsmount *VAR_4, struct dentry *VAR_5,
   struct kstat *VAR_6)
{
 int VAR_7;
 struct v9fs_session_info *VAR_8;
 struct p9_fid *VAR_9;
 struct p9_wstat *VAR_10;

 FUNC_1(VAR_3, "dentry: %p\n", VAR_5);
 VAR_7 = -VAR_2;
 VAR_8 = FUNC_8(VAR_5->d_inode);
 if (VAR_8->cache == VAR_1 || VAR_8->cache == VAR_0)
  return FUNC_6(VAR_4, VAR_5, VAR_6);

 VAR_9 = FUNC_7(VAR_5);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 VAR_10 = FUNC_5(VAR_9);
 if (FUNC_0(VAR_10))
  return FUNC_2(VAR_10);

 FUNC_9(VAR_10, VAR_5->d_inode, VAR_5->d_inode->i_sb);
  FUNC_3(VAR_5->d_inode, VAR_6);

 FUNC_4(VAR_10);
 return 0;
}
