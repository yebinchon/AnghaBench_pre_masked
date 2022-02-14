
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct nfs_inode {struct posix_acl* acl_default; struct posix_acl* acl_access; } ;
struct inode {int i_ino; TYPE_1__* i_sb; int i_lock; } ;
struct TYPE_2__ {int s_id; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct posix_acl* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct posix_acl*) ;
 struct nfs_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,int ,int ,int,struct posix_acl*) ;
 struct posix_acl* FUNC_4 (struct posix_acl*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct posix_acl *FUNC_7(struct inode *VAR_2, int VAR_3)
{
 struct nfs_inode *VAR_4 = FUNC_2(VAR_2);
 struct posix_acl *VAR_5 = FUNC_0(-VAR_1);

 FUNC_5(&VAR_2->i_lock);
 switch(VAR_3) {
  case 129:
   VAR_5 = VAR_4->acl_access;
   break;

  case 128:
   VAR_5 = VAR_4->acl_default;
   break;

  default:
   goto out;
 }
 if (FUNC_1(VAR_5))
  VAR_5 = FUNC_0(-VAR_0);
 else
  VAR_5 = FUNC_4(VAR_5);
out:
 FUNC_6(&VAR_2->i_lock);
 FUNC_3("NFS: nfs3_get_cached_acl(%s/%ld, %d) = %p\n", VAR_2->i_sb->s_id,
  VAR_2->i_ino, VAR_3, VAR_5);
 return VAR_5;
}
