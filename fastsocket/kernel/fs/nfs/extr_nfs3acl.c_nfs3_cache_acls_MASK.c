
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct nfs_inode {void* acl_default; void* acl_access; } ;
struct inode {int i_lock; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_id; } ;


 int FUNC_0 (struct posix_acl*) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_inode*) ;
 int FUNC_3 (char*,int ,int ,struct posix_acl*,struct posix_acl*) ;
 void* FUNC_4 (struct posix_acl*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0, struct posix_acl *VAR_1,
      struct posix_acl *VAR_2)
{
 struct nfs_inode *VAR_3 = FUNC_1(VAR_0);

 FUNC_3("nfs3_cache_acls(%s/%ld, %p, %p)\n", VAR_0->i_sb->s_id,
  VAR_0->i_ino, VAR_1, VAR_2);
 FUNC_5(&VAR_0->i_lock);
 FUNC_2(FUNC_1(VAR_0));
 if (!FUNC_0(VAR_1))
  VAR_3->acl_access = FUNC_4(VAR_1);
 if (!FUNC_0(VAR_2))
  VAR_3->acl_default = FUNC_4(VAR_2);
 FUNC_6(&VAR_0->i_lock);
}
