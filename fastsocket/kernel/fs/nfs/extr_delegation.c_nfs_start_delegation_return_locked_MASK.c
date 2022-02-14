
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int delegation; } ;
struct nfs_delegation {int lock; int flags; } ;


 int VAR_0 ;
 struct nfs_delegation* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static struct nfs_delegation *
FUNC_4(struct nfs_inode *VAR_1)
{
 struct nfs_delegation *VAR_2 = ((void*)0);
 struct nfs_delegation *VAR_3 = FUNC_0(VAR_1->delegation);

 if (VAR_3 == ((void*)0))
  goto out;
 FUNC_1(&VAR_3->lock);
 if (!FUNC_3(VAR_0, &VAR_3->flags))
  VAR_2 = VAR_3;
 FUNC_2(&VAR_3->lock);
out:
 return VAR_2;
}
