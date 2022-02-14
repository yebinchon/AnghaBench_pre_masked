
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nfs_delegation {int flags; } ;
struct nfs4_state {int inode; } ;
struct TYPE_10__ {scalar_t__ claim; int seqid; int fmode; } ;
struct TYPE_11__ {scalar_t__ delegation_type; int stateid; int fh; } ;
struct TYPE_12__ {int valid; } ;
struct nfs4_opendata {TYPE_2__ o_arg; TYPE_3__ o_res; TYPE_6__* owner; TYPE_5__ f_attr; TYPE_1__* dir; int rpc_done; } ;
struct inode {int dummy; } ;
struct TYPE_15__ {int cl_server; } ;
struct TYPE_14__ {int delegation; } ;
struct TYPE_13__ {int so_cred; } ;
struct TYPE_9__ {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_state* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_8__* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 TYPE_7__* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 struct nfs4_state* FUNC_6 (struct inode*,TYPE_6__*) ;
 struct nfs4_state* FUNC_7 (struct nfs4_opendata*) ;
 struct inode* FUNC_8 (int ,int *,TYPE_5__*) ;
 int FUNC_9 (int ,int ,TYPE_3__*) ;
 int FUNC_10 (int ,int ,TYPE_3__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 struct nfs_delegation* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct nfs4_state*,int *,int *,int ) ;

__attribute__((used)) static struct nfs4_state *FUNC_17(struct nfs4_opendata *VAR_5)
{
 struct inode *VAR_6;
 struct nfs4_state *VAR_7 = ((void*)0);
 struct nfs_delegation *VAR_8;
 int VAR_9;

 if (!VAR_5->rpc_done) {
  VAR_7 = FUNC_7(VAR_5);
  goto out;
 }

 VAR_9 = -VAR_0;
 if (!(VAR_5->f_attr.valid & VAR_3))
  goto err;
 VAR_6 = FUNC_8(VAR_5->dir->d_sb, &VAR_5->o_res.fh, &VAR_5->f_attr);
 VAR_9 = FUNC_4(VAR_6);
 if (FUNC_1(VAR_6))
  goto err;
 VAR_9 = -VAR_1;
 VAR_7 = FUNC_6(VAR_6, VAR_5->owner);
 if (VAR_7 == ((void*)0))
  goto err_put_inode;
 if (VAR_5->o_res.delegation_type != 0) {
  int VAR_10 = 0;

  FUNC_14();
  VAR_8 = FUNC_13(FUNC_3(VAR_6)->delegation);
  if (VAR_8)
   VAR_10 = VAR_8->flags;
  FUNC_15();
  if (VAR_5->o_arg.claim == VAR_2) {
   FUNC_12("NFS: Broken NFSv4 server %s is "
     "returning a delegation for "
     "OPEN(CLAIM_DELEGATE_CUR)\n",
     FUNC_2(VAR_6)->cl_server);
  } else if ((VAR_10 & 1UL<<VAR_4) == 0)
   FUNC_10(VAR_7->inode,
     VAR_5->owner->so_cred,
     &VAR_5->o_res);
  else
   FUNC_9(VAR_7->inode,
     VAR_5->owner->so_cred,
     &VAR_5->o_res);
 }

 FUNC_16(VAR_7, &VAR_5->o_res.stateid, ((void*)0),
   VAR_5->o_arg.fmode);
 FUNC_5(VAR_6);
out:
 FUNC_11(VAR_5->o_arg.seqid);
 return VAR_7;
err_put_inode:
 FUNC_5(VAR_6);
err:
 return FUNC_0(VAR_9);
}
