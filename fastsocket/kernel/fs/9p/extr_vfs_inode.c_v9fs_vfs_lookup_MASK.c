
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v9fs_session_info {scalar_t__ cache; } ;
struct super_block {int dummy; } ;
struct TYPE_4__ {scalar_t__ version; } ;
struct p9_fid {TYPE_2__ qid; struct super_block* i_sb; } ;
struct nameidata {int dummy; } ;
struct inode {TYPE_2__ qid; struct super_block* i_sb; } ;
struct TYPE_3__ {scalar_t__ name; } ;
struct dentry {int * d_op; TYPE_1__ d_name; int d_parent; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct p9_fid*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct p9_fid*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,struct p9_fid*,scalar_t__,struct dentry*,struct nameidata*) ;
 int FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct dentry*,struct p9_fid*) ;
 int FUNC_6 (struct p9_fid*) ;
 struct p9_fid* FUNC_7 (struct p9_fid*,int,char**,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct dentry*,struct p9_fid*) ;
 struct p9_fid* FUNC_9 (int ) ;
 struct v9fs_session_info* FUNC_10 (struct p9_fid*) ;
 struct p9_fid* FUNC_11 (struct v9fs_session_info*,struct p9_fid*,struct super_block*) ;

__attribute__((used)) static struct dentry *FUNC_12(struct inode *VAR_4, struct dentry *VAR_5,
          struct nameidata *VAR_6)
{
 struct super_block *VAR_7;
 struct v9fs_session_info *VAR_8;
 struct p9_fid *VAR_9, *VAR_10;
 struct inode *VAR_11;
 char *VAR_12;
 int VAR_13 = 0;

 FUNC_3(VAR_1, "dir: %p dentry: (%s) %p nameidata: %p\n",
  VAR_4, VAR_5->d_name.name, VAR_5, VAR_6);

 VAR_7 = VAR_4->i_sb;
 VAR_8 = FUNC_10(VAR_4);
 VAR_9 = FUNC_9(VAR_5->d_parent);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);

 VAR_12 = (char *) VAR_5->d_name.name;
 VAR_10 = FUNC_7(VAR_9, 1, &VAR_12, 1);
 if (FUNC_2(VAR_10)) {
  VAR_13 = FUNC_4(VAR_10);
  if (VAR_13 == -VAR_0) {
   FUNC_5(VAR_5, ((void*)0));
   return ((void*)0);
  }

  return FUNC_1(VAR_13);
 }

 VAR_11 = FUNC_11(VAR_8, VAR_10, VAR_4->i_sb);
 if (FUNC_2(VAR_11)) {
  VAR_13 = FUNC_4(VAR_11);
  VAR_11 = ((void*)0);
  goto error;
 }

 VAR_13 = FUNC_8(VAR_5, VAR_10);
 if (VAR_13 < 0)
  goto error;

 if ((VAR_10->qid.version) && (VAR_8->cache))
  VAR_5->d_op = &VAR_2;
 else
  VAR_5->d_op = &VAR_3;

 FUNC_5(VAR_5, VAR_11);
 return ((void*)0);

error:
 FUNC_6(VAR_10);

 return FUNC_1(VAR_13);
}
