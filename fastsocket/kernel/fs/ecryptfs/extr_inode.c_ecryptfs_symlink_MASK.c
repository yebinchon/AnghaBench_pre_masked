
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ecryptfs_mount_crypt_stat {int dummy; } ;
struct dentry {int d_inode; } ;
struct TYPE_2__ {struct ecryptfs_mount_crypt_stat mount_crypt_stat; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (char**,size_t*,int *,struct ecryptfs_mount_crypt_stat*,char const*,int ) ;
 int FUNC_5 (struct dentry*,struct dentry*,int ,int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (char*) ;
 struct dentry* FUNC_10 (struct dentry*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (int ,struct dentry*,char*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_0, struct dentry *VAR_1,
       const char *VAR_2)
{
 int VAR_3;
 struct dentry *VAR_4;
 struct dentry *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 struct ecryptfs_mount_crypt_stat *VAR_8 = ((void*)0);

 VAR_4 = FUNC_3(VAR_1);
 FUNC_1(VAR_4);
 VAR_5 = FUNC_10(VAR_4);
 VAR_8 = &FUNC_6(
  VAR_0->i_sb)->mount_crypt_stat;
 VAR_3 = FUNC_4(&VAR_6,
        &VAR_7,
        ((void*)0),
        VAR_8, VAR_2,
        FUNC_11(VAR_2));
 if (VAR_3)
  goto out_lock;
 VAR_3 = FUNC_13(VAR_5->d_inode, VAR_4,
    VAR_6);
 FUNC_9(VAR_6);
 if (VAR_3 || !VAR_4->d_inode)
  goto out_lock;
 VAR_3 = FUNC_5(VAR_4, VAR_1, VAR_0->i_sb, 0);
 if (VAR_3)
  goto out_lock;
 FUNC_7(VAR_0, VAR_5->d_inode);
 FUNC_8(VAR_0, VAR_5->d_inode);
out_lock:
 FUNC_12(VAR_5);
 FUNC_2(VAR_4);
 if (!VAR_1->d_inode)
  FUNC_0(VAR_1);
 return VAR_3;
}
