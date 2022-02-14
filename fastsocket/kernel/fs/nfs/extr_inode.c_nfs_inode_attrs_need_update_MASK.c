
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {scalar_t__ attr_gencount; } ;
struct nfs_fattr {scalar_t__ gencount; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode const*) ;
 scalar_t__ FUNC_1 (struct inode const*,struct nfs_fattr const*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct inode const*,struct nfs_fattr const*) ;

__attribute__((used)) static int FUNC_4(const struct inode *VAR_0, const struct nfs_fattr *VAR_1)
{
 const struct nfs_inode *VAR_2 = FUNC_0(VAR_0);

 return ((long)VAR_1->gencount - (long)VAR_2->attr_gencount) > 0 ||
  FUNC_1(VAR_0, VAR_1) ||
  FUNC_3(VAR_0, VAR_1) ||
  ((long)VAR_2->attr_gencount - (long)FUNC_2() > 0);
}
