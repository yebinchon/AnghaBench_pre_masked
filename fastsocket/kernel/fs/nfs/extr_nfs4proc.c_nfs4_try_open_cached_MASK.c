
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_inode {int delegation; } ;
struct nfs_delegation {int stateid; } ;
struct nfs4_state {int count; TYPE_2__* owner; int inode; } ;
struct TYPE_3__ {int open_flags; int seqid; int fmode; } ;
struct nfs4_opendata {int is_recover; TYPE_1__ o_arg; struct nfs4_state* state; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;
struct TYPE_4__ {int so_cred; int so_lock; } ;


 int VAR_0 ;
 struct nfs4_state* FUNC_0 (int) ;
 struct nfs_inode* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct nfs4_state*,int ,int) ;
 int FUNC_4 (struct nfs_delegation*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 struct nfs_delegation* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct nfs4_state*,int ) ;
 scalar_t__ FUNC_14 (struct nfs4_state*,int *,int *,int ) ;

__attribute__((used)) static struct nfs4_state *FUNC_15(struct nfs4_opendata *VAR_3)
{
 struct nfs4_state *VAR_4 = VAR_3->state;
 struct nfs_inode *VAR_5 = FUNC_1(VAR_4->inode);
 struct nfs_delegation *VAR_6;
 int VAR_7 = VAR_3->o_arg.open_flags & (VAR_1|VAR_2);
 fmode_t VAR_8 = VAR_3->o_arg.fmode;
 nfs4_stateid VAR_9;
 int VAR_10 = -VAR_0;

 for (;;) {
  if (FUNC_3(VAR_4, VAR_8, VAR_7)) {
   FUNC_11(&VAR_4->owner->so_lock);
   if (FUNC_3(VAR_4, VAR_8, VAR_7)) {
    FUNC_13(VAR_4, VAR_8);
    FUNC_12(&VAR_4->owner->so_lock);
    goto out_return_state;
   }
   FUNC_12(&VAR_4->owner->so_lock);
  }
  FUNC_9();
  VAR_6 = FUNC_8(VAR_5->delegation);
  if (!FUNC_4(VAR_6, VAR_8)) {
   FUNC_10();
   break;
  }

  FUNC_5(&VAR_9, &VAR_6->stateid);
  FUNC_10();
  FUNC_7(VAR_3->o_arg.seqid);
  if (!VAR_3->is_recover) {
   VAR_10 = FUNC_6(VAR_4->inode, VAR_4->owner->so_cred, VAR_7);
   if (VAR_10 != 0)
    goto out;
  }
  VAR_10 = -VAR_0;


  if (FUNC_14(VAR_4, ((void*)0), &VAR_9, VAR_8))
   goto out_return_state;
 }
out:
 return FUNC_0(VAR_10);
out_return_state:
 FUNC_2(&VAR_4->count);
 return VAR_4;
}
