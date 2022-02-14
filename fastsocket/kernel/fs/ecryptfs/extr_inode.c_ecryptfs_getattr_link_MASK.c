
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kstat {size_t size; } ;
struct ecryptfs_mount_crypt_stat {int flags; } ;
struct dentry {int d_inode; int d_sb; } ;
struct TYPE_2__ {struct ecryptfs_mount_crypt_stat mount_crypt_stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,char**,size_t*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct kstat*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct vfsmount *VAR_1, struct dentry *VAR_2,
     struct kstat *VAR_3)
{
 struct ecryptfs_mount_crypt_stat *VAR_4;
 int VAR_5 = 0;

 VAR_4 = &FUNC_1(
      VAR_2->d_sb)->mount_crypt_stat;
 FUNC_2(VAR_2->d_inode, VAR_3);
 if (VAR_4->flags & VAR_0) {
  char *VAR_6;
  size_t VAR_7;

  VAR_5 = FUNC_0(VAR_2, &VAR_6, &VAR_7);
  if (!VAR_5) {
   FUNC_3(VAR_6);
   VAR_3->size = VAR_7;
  }
 }
 return VAR_5;
}
