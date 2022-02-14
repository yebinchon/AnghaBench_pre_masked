
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs4_state_owner {int dummy; } ;
struct TYPE_4__ {int seqid; } ;
struct nfs4_closedata {TYPE_1__ arg; TYPE_3__* state; scalar_t__ roc; } ;
struct TYPE_6__ {TYPE_2__* inode; struct nfs4_state_owner* owner; } ;
struct TYPE_5__ {struct super_block* i_sb; } ;


 int FUNC_0 (struct nfs4_closedata*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct nfs4_state_owner*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct nfs4_closedata *VAR_1 = VAR_0;
 struct nfs4_state_owner *VAR_2 = VAR_1->state->owner;
 struct super_block *VAR_3 = VAR_1->state->inode->i_sb;

 if (VAR_1->roc)
  FUNC_5(VAR_1->state->inode);
 FUNC_1(VAR_1->state);
 FUNC_3(VAR_1->arg.seqid);
 FUNC_2(VAR_2);
 FUNC_4(VAR_3);
 FUNC_0(VAR_1);
}
