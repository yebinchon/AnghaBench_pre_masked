
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int stateid; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int *) ;

void FUNC_3(struct inode *VAR_0)
{
 struct nfs_delegation *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_0, &VAR_1->stateid);
  FUNC_0(VAR_1);
 }
}
