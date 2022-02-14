
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {struct rpc_cred* rpc_cred; struct nfs_setattrres* rpc_resp; struct nfs_setattrargs* rpc_argp; int * rpc_proc; } ;
struct rpc_cred {int dummy; } ;
struct nfs_setattrres {int seq_res; struct nfs_server* server; struct nfs_fattr* fattr; } ;
struct nfs_setattrargs {int seq_args; int stateid; int bitmask; struct nfs_server* server; struct iattr* iap; int fh; } ;
struct nfs_server {int client; int attr_bitmask; } ;
struct nfs_lockowner {int l_pid; int l_owner; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_state {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct TYPE_2__ {int tgid; int files; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 TYPE_1__* VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,struct inode*,int ) ;
 int * VAR_4 ;
 int FUNC_4 (int *,struct nfs4_state*,int ,struct nfs_lockowner*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (struct nfs4_state*) ;
 int FUNC_7 (struct nfs_fattr*) ;
 int FUNC_8 (struct nfs_server*,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_6, struct rpc_cred *VAR_7,
       struct nfs_fattr *VAR_8, struct iattr *VAR_9,
       struct nfs4_state *VAR_10)
{
 struct nfs_server *VAR_11 = FUNC_1(VAR_6);
        struct nfs_setattrargs VAR_12 = {
                .fh = FUNC_0(VAR_6),
                .iap = VAR_9,
  .server = VAR_11,
  .bitmask = VAR_11->attr_bitmask,
        };
        struct nfs_setattrres VAR_13 = {
  .fattr = VAR_8,
  .server = VAR_11,
        };
        struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_4[VAR_1],
  .rpc_argp = &VAR_12,
  .rpc_resp = &VAR_13,
  .rpc_cred = VAR_7,
        };
 unsigned long VAR_15 = VAR_3;
 int VAR_16;

 FUNC_7(VAR_8);

 if (VAR_10 != ((void*)0) && FUNC_6(VAR_10)) {
  struct nfs_lockowner VAR_17 = {
   .l_owner = VAR_2->files,
   .l_pid = VAR_2->tgid,
  };
  FUNC_4(&VAR_12.stateid, VAR_10, VAR_0,
    &VAR_17);
 } else if (FUNC_3(&VAR_12.stateid, VAR_6,
    VAR_0)) {

 } else
  FUNC_5(&VAR_12.stateid, &VAR_5);

 VAR_16 = FUNC_2(VAR_11->client, VAR_11, &VAR_14, &VAR_12.seq_args, &VAR_13.seq_res, 1);
 if (VAR_16 == 0 && VAR_10 != ((void*)0))
  FUNC_8(VAR_11, VAR_15);
 return VAR_16;
}
