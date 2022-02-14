
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {struct nfs4_cached_acl* nfs4_acl; } ;
struct nfs4_cached_acl {scalar_t__ cached; size_t len; int data; } ;
struct inode {int i_lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline ssize_t FUNC_4(struct inode *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct nfs_inode *VAR_5 = FUNC_0(VAR_2);
 struct nfs4_cached_acl *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_2(&VAR_2->i_lock);
 VAR_6 = VAR_5->nfs4_acl;
 if (VAR_6 == ((void*)0))
  goto out;
 if (VAR_3 == ((void*)0))
  goto out_len;
 if (VAR_6->cached == 0)
  goto out;
 VAR_7 = -VAR_1;
 if (VAR_6->len > VAR_4)
  goto out;
 FUNC_1(VAR_3, VAR_6->data, VAR_6->len);
out_len:
 VAR_7 = VAR_6->len;
out:
 FUNC_3(&VAR_2->i_lock);
 return VAR_7;
}
