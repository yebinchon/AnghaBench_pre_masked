
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* dentry; } ;
struct nameidata {TYPE_5__ path; } ;
struct device {int devt; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct cred {int dummy; } ;
typedef int mode_t ;
struct TYPE_10__ {int i_mutex; } ;
struct TYPE_9__ {int mnt_root; } ;
struct TYPE_8__ {TYPE_4__* d_inode; } ;
struct TYPE_7__ {TYPE_3__** i_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char const*) ;
 TYPE_3__* VAR_5 ;
 char* FUNC_3 (struct device*,int*,char const**) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (char const*) ;
 struct dentry* FUNC_7 (struct nameidata*,int ) ;
 int FUNC_8 (int *) ;
 struct cred* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (struct cred const*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_4__*,struct dentry*,int,int ) ;
 int FUNC_14 (int ,TYPE_3__*,char const*,int ,struct nameidata*) ;

int FUNC_15(struct device *VAR_7)
{
 const char *VAR_8 = ((void*)0);
 const char *VAR_9;
 const struct cred *VAR_10;
 mode_t VAR_11 = 0;
 struct nameidata VAR_12;
 struct dentry *VAR_13;
 int VAR_14;

 if (!VAR_5)
  return 0;

 VAR_9 = FUNC_3(VAR_7, &VAR_11, &VAR_8);
 if (!VAR_9)
  return -VAR_1;

 if (VAR_11 == 0)
  VAR_11 = 0600;
 if (FUNC_5(VAR_7))
  VAR_11 |= VAR_3;
 else
  VAR_11 |= VAR_4;

 VAR_10 = FUNC_9(&VAR_6);
 VAR_14 = FUNC_14(VAR_5->mnt_root, VAR_5,
         VAR_9, VAR_2, &VAR_12);
 if (VAR_14 == -VAR_0) {

  FUNC_2(VAR_9);
  VAR_14 = FUNC_14(VAR_5->mnt_root, VAR_5,
          VAR_9, VAR_2, &VAR_12);
  if (VAR_14)
   goto out;
 }

 VAR_13 = FUNC_7(&VAR_12, 0);
 if (!FUNC_0(VAR_13)) {
  int VAR_15;

  VAR_15 = FUNC_12(0000);
  VAR_14 = FUNC_13(VAR_12.path.dentry->d_inode,
    VAR_13, VAR_11, VAR_7->devt);
  FUNC_12(VAR_15);

  if (!VAR_14)
   VAR_13->d_inode->i_private = &VAR_5;
  FUNC_4(VAR_13);
 } else {
  VAR_14 = FUNC_1(VAR_13);
 }
 FUNC_8(&VAR_12.path.dentry->d_inode->i_mutex);

 FUNC_10(&VAR_12.path);
out:
 FUNC_6(VAR_8);
 FUNC_11(VAR_10);
 return VAR_14;
}
