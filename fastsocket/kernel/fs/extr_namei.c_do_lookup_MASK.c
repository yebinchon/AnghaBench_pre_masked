
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct qstr {char* name; size_t len; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct TYPE_5__ {struct dentry* dentry; struct vfsmount* mnt; } ;
struct nameidata {int flags; TYPE_2__ path; } ;
struct inode {int i_mutex; TYPE_3__* i_op; } ;
struct dentry {struct inode* d_inode; TYPE_1__* d_op; } ;
struct TYPE_6__ {struct dentry* (* lookup ) (struct inode*,struct dentry*,struct nameidata*) ;} ;
struct TYPE_4__ {scalar_t__ d_revalidate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_5 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_6 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_7 (struct dentry*,struct nameidata*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct path*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct path*,struct nameidata*) ;
 struct dentry* FUNC_13 (struct inode*,struct dentry*,struct nameidata*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct nameidata *VAR_4, struct qstr *VAR_5,
       struct path *VAR_6)
{
 struct vfsmount *VAR_7 = VAR_4->path.mnt;
 struct dentry *VAR_8 = FUNC_4(VAR_4->path.dentry, VAR_5);
 int VAR_9 = VAR_4->flags;
 struct dentry *VAR_10;
 struct inode *VAR_11;
 int VAR_12;

 if (!VAR_8)
  goto need_lookup;
found:
 if (VAR_8->d_op && VAR_8->d_op->d_revalidate)
  goto need_revalidate;
done:
 VAR_6->mnt = VAR_7;
 VAR_6->dentry = VAR_8;




 if (!(VAR_4->flags & VAR_2) && VAR_5->name[VAR_5->len] == '/')
  VAR_9 |= VAR_3;
 VAR_12 = FUNC_9(VAR_6, VAR_9);
 if (FUNC_14(VAR_12 < 0))
  FUNC_12(VAR_6, VAR_4);
 return VAR_12;

need_lookup:
 VAR_10 = VAR_4->path.dentry;
 VAR_11 = VAR_10->d_inode;

 FUNC_10(&VAR_11->i_mutex);
 VAR_8 = FUNC_6(VAR_10, VAR_5);
 if (!VAR_8) {
  struct dentry *VAR_13;


  VAR_8 = FUNC_0(-VAR_0);
  if (FUNC_1(VAR_11))
   goto out_unlock;

  VAR_13 = FUNC_5(VAR_10, VAR_5);
  VAR_8 = FUNC_0(-VAR_1);
  if (VAR_13) {
   VAR_8 = VAR_11->i_op->lookup(VAR_11, VAR_13, VAR_4);
   if (VAR_8)
    FUNC_8(VAR_13);
   else
    VAR_8 = VAR_13;
  }
out_unlock:
  FUNC_11(&VAR_11->i_mutex);
  if (FUNC_2(VAR_8))
   goto fail;
  goto done;
 }





 FUNC_11(&VAR_11->i_mutex);
 goto found;

need_revalidate:
 VAR_8 = FUNC_7(VAR_8, VAR_4);
 if (!VAR_8)
  goto need_lookup;
 if (FUNC_2(VAR_8))
  goto fail;
 goto done;

fail:
 return FUNC_3(VAR_8);
}
