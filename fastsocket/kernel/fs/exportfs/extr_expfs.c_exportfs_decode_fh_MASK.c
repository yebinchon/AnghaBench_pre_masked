
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {TYPE_2__* mnt_sb; } ;
struct fid {int dummy; } ;
struct export_operations {struct dentry* (* fh_to_parent ) (TYPE_2__*,struct fid*,int,int) ;struct dentry* (* fh_to_dentry ) (TYPE_2__*,struct fid*,int,int) ;} ;
struct dentry {int d_flags; TYPE_1__* d_inode; } ;
struct TYPE_5__ {struct export_operations* s_export_op; } ;
struct TYPE_4__ {int i_mutex; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct vfsmount*,struct dentry*,char*,struct dentry*) ;
 struct dentry* FUNC_6 (struct dentry*,int (*) (void*,struct dentry*),void*) ;
 struct dentry* FUNC_7 (char*,struct dentry*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vfsmount*,struct dentry*,char*) ;
 int FUNC_11 (char*) ;
 struct dentry* FUNC_12 (TYPE_2__*,struct fid*,int,int) ;
 struct dentry* FUNC_13 (TYPE_2__*,struct fid*,int,int) ;

struct dentry *FUNC_14(struct vfsmount *VAR_4, struct fid *VAR_5,
  int VAR_6, int VAR_7,
  int (*VAR_8)(void *, struct dentry *), void *VAR_9)
{
 const struct export_operations *VAR_10 = VAR_4->mnt_sb->s_export_op;
 struct dentry *VAR_11, *VAR_12;
 char VAR_13[VAR_3+1];
 int VAR_14;




 VAR_11 = VAR_10->fh_to_dentry(VAR_4->mnt_sb, VAR_5, VAR_6, VAR_7);
 if (!VAR_11)
  VAR_11 = FUNC_0(-VAR_2);
 if (FUNC_1(VAR_11))
  return VAR_11;

 if (FUNC_3(VAR_11->d_inode->i_mode)) {
  if (VAR_11->d_flags & VAR_0) {
   VAR_14 = FUNC_10(VAR_4, VAR_11, VAR_13);
   if (VAR_14)
    goto err_result;
  }

  if (!VAR_8(VAR_9, VAR_11)) {
   VAR_14 = -VAR_1;
   goto err_result;
  }

  return VAR_11;
 } else {



  struct dentry *VAR_15, *VAR_16;
  VAR_12 = FUNC_6(VAR_11, VAR_8, VAR_9);
  if (VAR_12)
   return VAR_12;





  VAR_14 = -VAR_2;
  if (!VAR_10->fh_to_parent)
   goto err_result;

  VAR_15 = VAR_10->fh_to_parent(VAR_4->mnt_sb, VAR_5,
    VAR_6, VAR_7);
  if (!VAR_15)
   goto err_result;
  VAR_14 = FUNC_2(VAR_15);
  if (FUNC_1(VAR_15))
   goto err_result;






  VAR_14 = FUNC_10(VAR_4, VAR_15, VAR_13);
  if (VAR_14) {
   FUNC_4(VAR_15);
   goto err_result;
  }






  VAR_14 = FUNC_5(VAR_4, VAR_15, VAR_13, VAR_11);
  if (!VAR_14) {
   FUNC_8(&VAR_15->d_inode->i_mutex);
   VAR_16 = FUNC_7(VAR_13, VAR_15,
       FUNC_11(VAR_13));
   FUNC_9(&VAR_15->d_inode->i_mutex);
   if (!FUNC_1(VAR_16)) {
    if (VAR_16->d_inode) {
     FUNC_4(VAR_11);
     VAR_11 = VAR_16;
    } else
     FUNC_4(VAR_16);
   }
  }





  FUNC_4(VAR_15);





  VAR_12 = FUNC_6(VAR_11, VAR_8, VAR_9);
  if (!VAR_12) {
   VAR_14 = -VAR_1;
   goto err_result;
  }

  return VAR_12;
 }

 err_result:
 FUNC_4(VAR_11);
 return FUNC_0(VAR_14);
}
