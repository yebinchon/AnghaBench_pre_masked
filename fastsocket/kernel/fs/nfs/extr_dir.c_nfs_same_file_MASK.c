
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_entry {int fh; } ;
struct dentry {int * d_inode; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static
int FUNC_2(struct dentry *VAR_0, struct nfs_entry *VAR_1)
{
 if (VAR_0->d_inode == ((void*)0))
  goto different;
 if (FUNC_1(VAR_1->fh, FUNC_0(VAR_0->d_inode)) != 0)
  goto different;
 return 1;
different:
 return 0;
}
