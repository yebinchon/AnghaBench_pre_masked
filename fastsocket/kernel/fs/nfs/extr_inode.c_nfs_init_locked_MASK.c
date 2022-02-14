
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_find_desc {int fh; struct nfs_fattr* fattr; } ;
struct nfs_fattr {int fileid; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_0, void *VAR_1)
{
 struct nfs_find_desc *VAR_2 = (struct nfs_find_desc *)VAR_1;
 struct nfs_fattr *VAR_3 = VAR_2->fattr;

 FUNC_2(VAR_0, VAR_3->fileid);
 FUNC_1(FUNC_0(VAR_0), VAR_2->fh);
 return 0;
}
