
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nfs_server {int s_dev; TYPE_3__* nfs_client; } ;
struct nfs_open_context {int dummy; } ;
struct TYPE_12__ {int s_dev; int id; int clientid; } ;
struct TYPE_14__ {int * open_seqid; int * lock_seqid; TYPE_5__ lock_owner; int * lock_stateid; int * fl; int fh; } ;
struct TYPE_13__ {int * lock_seqid; } ;
struct nfs4_lockdata {TYPE_7__ arg; int fl; int ctx; struct nfs_server* server; struct nfs4_lock_state* lsp; TYPE_6__ res; } ;
struct TYPE_11__ {int id; } ;
struct nfs4_lock_state {int ls_count; TYPE_4__ ls_id; int ls_stateid; int ls_seqid; TYPE_2__* ls_state; } ;
struct inode {int dummy; } ;
struct file_lock {int dummy; } ;
typedef int gfp_t ;
struct TYPE_10__ {int cl_clientid; } ;
struct TYPE_9__ {TYPE_1__* owner; struct inode* inode; } ;
struct TYPE_8__ {int so_seqid; } ;


 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_open_context*) ;
 int FUNC_4 (struct nfs4_lockdata*) ;
 struct nfs4_lockdata* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,struct file_lock*,int) ;
 void* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct nfs4_lockdata *FUNC_9(struct file_lock *VAR_0,
  struct nfs_open_context *VAR_1, struct nfs4_lock_state *VAR_2,
  gfp_t VAR_3)
{
 struct nfs4_lockdata *VAR_4;
 struct inode *VAR_5 = VAR_2->ls_state->inode;
 struct nfs_server *VAR_6 = FUNC_1(VAR_5);

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_3);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->arg.fh = FUNC_0(VAR_5);
 VAR_4->arg.fl = &VAR_4->fl;
 VAR_4->arg.open_seqid = FUNC_7(&VAR_2->ls_state->owner->so_seqid, VAR_3);
 if (VAR_4->arg.open_seqid == ((void*)0))
  goto out_free;
 VAR_4->arg.lock_seqid = FUNC_7(&VAR_2->ls_seqid, VAR_3);
 if (VAR_4->arg.lock_seqid == ((void*)0))
  goto out_free_seqid;
 VAR_4->arg.lock_stateid = &VAR_2->ls_stateid;
 VAR_4->arg.lock_owner.clientid = VAR_6->nfs_client->cl_clientid;
 VAR_4->arg.lock_owner.id = VAR_2->ls_id.id;
 VAR_4->arg.lock_owner.s_dev = VAR_6->s_dev;
 VAR_4->res.lock_seqid = VAR_4->arg.lock_seqid;
 VAR_4->lsp = VAR_2;
 VAR_4->server = VAR_6;
 FUNC_2(&VAR_2->ls_count);
 VAR_4->ctx = FUNC_3(VAR_1);
 FUNC_6(&VAR_4->fl, VAR_0, sizeof(VAR_4->fl));
 return VAR_4;
out_free_seqid:
 FUNC_8(VAR_4->arg.open_seqid);
out_free:
 FUNC_4(VAR_4);
 return ((void*)0);
}
