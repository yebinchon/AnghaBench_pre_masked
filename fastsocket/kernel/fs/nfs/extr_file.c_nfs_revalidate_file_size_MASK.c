
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_inode {int cache_validity; } ;
struct inode {int dummy; } ;
struct file {int f_flags; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct nfs_server*,struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_1(VAR_2);
 struct nfs_inode *VAR_5 = FUNC_0(VAR_2);

 if (FUNC_4(VAR_2))
  goto out_noreval;

 if (VAR_3->f_flags & VAR_1)
  goto force_reval;
 if (VAR_5->cache_validity & VAR_0)
  goto force_reval;
 if (FUNC_3(VAR_2))
  goto force_reval;
out_noreval:
 return 0;
force_reval:
 return FUNC_2(VAR_4, VAR_2);
}
