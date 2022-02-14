
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int cache_validity; } ;
struct inode {int dummy; } ;
struct address_space {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct inode*) ;
 int FUNC_3 (struct inode*,struct address_space*) ;
 scalar_t__ FUNC_4 (struct inode*) ;

int FUNC_5(struct inode *VAR_1, struct address_space *VAR_2)
{
 struct nfs_inode *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;

 if (FUNC_4(VAR_1)) {
  VAR_4 = FUNC_2(FUNC_1(VAR_1), VAR_1);
  if (VAR_4 < 0)
   goto out;
 }
 if (VAR_3->cache_validity & VAR_0)
  VAR_4 = FUNC_3(VAR_1, VAR_2);
out:
 return VAR_4;
}
