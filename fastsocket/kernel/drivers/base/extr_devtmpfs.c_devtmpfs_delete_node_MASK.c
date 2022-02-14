
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* dentry; int mnt; } ;
struct TYPE_8__ {int len; int name; } ;
struct nameidata {TYPE_4__ path; TYPE_1__ last; } ;
struct kstat {int mode; } ;
struct iattr {int ia_mode; int ia_valid; scalar_t__ ia_gid; scalar_t__ ia_uid; } ;
struct device {int dummy; } ;
struct dentry {TYPE_6__* d_inode; } ;
struct cred {int dummy; } ;
struct TYPE_13__ {int i_mutex; } ;
struct TYPE_12__ {TYPE_2__* d_inode; } ;
struct TYPE_10__ {int mnt_root; } ;
struct TYPE_9__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char const*) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_3 (struct device*,TYPE_6__*,struct kstat*) ;
 char* FUNC_4 (struct device*,int *,char const**) ;
 int FUNC_5 (struct dentry*) ;
 int VAR_8 ;
 int FUNC_6 (char const*) ;
 struct dentry* FUNC_7 (int ,TYPE_5__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dentry*,struct iattr*) ;
 struct cred* FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (struct cred const*) ;
 scalar_t__ FUNC_15 (char const*,char) ;
 int FUNC_16 (int ,struct dentry*,struct kstat*) ;
 int FUNC_17 (int ,TYPE_3__*,char const*,int ,struct nameidata*) ;
 int FUNC_18 (TYPE_2__*,struct dentry*) ;

int FUNC_19(struct device *VAR_9)
{
 const char *VAR_10 = ((void*)0);
 const char *VAR_11;
 const struct cred *VAR_12;
 struct nameidata VAR_13;
 struct dentry *VAR_14;
 struct kstat VAR_15;
 int VAR_16 = 1;
 int VAR_17;

 if (!VAR_7)
  return 0;

 VAR_11 = FUNC_4(VAR_9, ((void*)0), &VAR_10);
 if (!VAR_11)
  return -VAR_4;

 VAR_12 = FUNC_12(&VAR_8);
 VAR_17 = FUNC_17(VAR_7->mnt_root, VAR_7,
         VAR_11, VAR_6, &VAR_13);
 if (VAR_17)
  goto out;

 FUNC_9(&VAR_13.path.dentry->d_inode->i_mutex, VAR_5);
 VAR_14 = FUNC_7(VAR_13.last.name, VAR_13.path.dentry, VAR_13.last.len);
 if (!FUNC_0(VAR_14)) {
  if (VAR_14->d_inode) {
   VAR_17 = FUNC_16(VAR_13.path.mnt, VAR_14, &VAR_15);
   if (!VAR_17 && FUNC_3(VAR_9, VAR_14->d_inode, &VAR_15)) {
    struct iattr VAR_18;




    VAR_18.ia_uid = 0;
    VAR_18.ia_gid = 0;
    VAR_18.ia_mode = VAR_15.mode & ~0777;
    VAR_18.ia_valid =
     VAR_2|VAR_0|VAR_1;
    FUNC_8(&VAR_14->d_inode->i_mutex);
    FUNC_11(VAR_14, &VAR_18);
    FUNC_10(&VAR_14->d_inode->i_mutex);
    VAR_17 = FUNC_18(VAR_13.path.dentry->d_inode,
       VAR_14);
    if (!VAR_17 || VAR_17 == -VAR_3)
     VAR_16 = 1;
   }
  } else {
   VAR_17 = -VAR_3;
  }
  FUNC_5(VAR_14);
 } else {
  VAR_17 = FUNC_1(VAR_14);
 }
 FUNC_10(&VAR_13.path.dentry->d_inode->i_mutex);

 FUNC_13(&VAR_13.path);
 if (VAR_16 && FUNC_15(VAR_11, '/'))
  FUNC_2(VAR_11);
out:
 FUNC_6(VAR_10);
 FUNC_14(VAR_12);
 return VAR_17;
}
