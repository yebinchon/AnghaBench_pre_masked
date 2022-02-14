
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {scalar_t__ attrtimeo; scalar_t__ read_cache_jiffies; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

int FUNC_2(struct inode *VAR_1)
{
 struct nfs_inode *VAR_2 = FUNC_0(VAR_1);

 return !FUNC_1(VAR_0, VAR_2->read_cache_jiffies, VAR_2->read_cache_jiffies + VAR_2->attrtimeo);
}
