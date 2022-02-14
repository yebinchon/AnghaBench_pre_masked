
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int stateid; int cred; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int ,int *,int) ;
 int FUNC_1 (struct nfs_delegation*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct nfs_delegation *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1->cred, &VAR_1->stateid, VAR_2);
 FUNC_1(VAR_1);
 return VAR_3;
}
