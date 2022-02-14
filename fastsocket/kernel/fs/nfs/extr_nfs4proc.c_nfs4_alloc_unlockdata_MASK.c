
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_seqid {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct TYPE_6__ {int * stateid; struct nfs_seqid* seqid; int * fl; int fh; } ;
struct TYPE_5__ {struct nfs_seqid* seqid; } ;
struct nfs4_unlockdata {int server; int fl; int ctx; struct nfs4_lock_state* lsp; TYPE_3__ arg; TYPE_2__ res; } ;
struct nfs4_lock_state {int ls_count; int ls_stateid; TYPE_1__* ls_state; } ;
struct inode {int dummy; } ;
struct file_lock {int dummy; } ;
struct TYPE_4__ {struct inode* inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_open_context*) ;
 struct nfs4_unlockdata* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct file_lock*,int) ;

__attribute__((used)) static struct nfs4_unlockdata *FUNC_6(struct file_lock *VAR_1,
  struct nfs_open_context *VAR_2,
  struct nfs4_lock_state *VAR_3,
  struct nfs_seqid *VAR_4)
{
 struct nfs4_unlockdata *VAR_5;
 struct inode *VAR_6 = VAR_3->ls_state->inode;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->arg.fh = FUNC_0(VAR_6);
 VAR_5->arg.fl = &VAR_5->fl;
 VAR_5->arg.seqid = VAR_4;
 VAR_5->res.seqid = VAR_4;
 VAR_5->arg.stateid = &VAR_3->ls_stateid;
 VAR_5->lsp = VAR_3;
 FUNC_2(&VAR_3->ls_count);

 VAR_5->ctx = FUNC_3(VAR_2);
 FUNC_5(&VAR_5->fl, VAR_1, sizeof(VAR_5->fl));
 VAR_5->server = FUNC_1(VAR_6);
 return VAR_5;
}
