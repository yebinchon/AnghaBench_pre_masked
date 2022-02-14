
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {struct nfs_delegation* delegation; } ;
struct nfs_delegation {int type; int lock; int stateid; int flags; } ;
struct nfs4_state {int inode; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_state*,int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_4 (struct nfs_delegation*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct nfs4_state *VAR_3, nfs4_stateid *VAR_4, nfs4_stateid *VAR_5, fmode_t VAR_6)
{
 struct nfs_inode *VAR_7 = FUNC_0(VAR_3->inode);
 struct nfs_delegation *VAR_8;
 int VAR_9 = 0;

 VAR_6 &= (VAR_0|VAR_1);

 FUNC_5();
 VAR_8 = FUNC_4(VAR_7->delegation);
 if (VAR_8 == ((void*)0))
  goto no_delegation;

 FUNC_7(&VAR_8->lock);
 if (VAR_7->delegation != VAR_8 ||
    FUNC_9(VAR_2, &VAR_8->flags) ||
     (VAR_8->type & VAR_6) != VAR_6)
  goto no_delegation_unlock;

 if (VAR_5 == ((void*)0))
  VAR_5 = &VAR_8->stateid;
 else if (!FUNC_2(&VAR_8->stateid, VAR_5))
  goto no_delegation_unlock;

 FUNC_3(VAR_8);
 FUNC_1(VAR_3, VAR_4, &VAR_8->stateid, VAR_6);
 VAR_9 = 1;
no_delegation_unlock:
 FUNC_8(&VAR_8->lock);
no_delegation:
 FUNC_6();

 if (!VAR_9 && VAR_4 != ((void*)0)) {
  FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_6);
  VAR_9 = 1;
 }

 return VAR_9;
}
