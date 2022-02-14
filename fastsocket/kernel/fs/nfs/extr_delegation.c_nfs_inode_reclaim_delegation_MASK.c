
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_openres {int maxsize; int delegation_type; int delegation; } ;
struct nfs_delegation {int lock; int type; int flags; struct rpc_cred* cred; int maxsize; int stateid; int * inode; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int delegation_state; int delegation; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int *) ;
 struct rpc_cred* FUNC_2 (struct rpc_cred*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct inode*,struct rpc_cred*,struct nfs_openres*) ;
 int FUNC_5 (struct rpc_cred*) ;
 struct nfs_delegation* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct inode *VAR_1, struct rpc_cred *VAR_2,
      struct nfs_openres *VAR_3)
{
 struct nfs_delegation *VAR_4;
 struct rpc_cred *VAR_5 = ((void*)0);

 FUNC_7();
 VAR_4 = FUNC_6(FUNC_0(VAR_1)->delegation);
 if (VAR_4 != ((void*)0)) {
  FUNC_9(&VAR_4->lock);
  if (VAR_4->inode != ((void*)0)) {
   FUNC_3(&VAR_4->stateid, &VAR_3->delegation);
   VAR_4->type = VAR_3->delegation_type;
   VAR_4->maxsize = VAR_3->maxsize;
   VAR_5 = VAR_4->cred;
   VAR_4->cred = FUNC_2(VAR_2);
   FUNC_1(VAR_0,
      &VAR_4->flags);
   FUNC_0(VAR_1)->delegation_state = VAR_4->type;
   FUNC_10(&VAR_4->lock);
   FUNC_5(VAR_5);
   FUNC_8();
  } else {

   FUNC_10(&VAR_4->lock);
   FUNC_8();
   FUNC_4(VAR_1, VAR_2, VAR_3);
  }
 } else {
  FUNC_8();
 }
}
