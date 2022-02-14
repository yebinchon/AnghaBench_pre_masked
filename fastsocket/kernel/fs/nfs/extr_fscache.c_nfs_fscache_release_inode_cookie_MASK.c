
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int * fscache; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,struct nfs_inode*,int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct inode *VAR_1)
{
 struct nfs_inode *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, "NFS: clear cookie (0x%p/0x%p)\n",
   VAR_2, VAR_2->fscache);

 FUNC_2(VAR_2->fscache, 0);
 VAR_2->fscache = ((void*)0);
}
