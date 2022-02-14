
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int rpc_cred; struct nfs4_accessres* rpc_resp; struct nfs4_accessargs* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; int attr_bitmask; } ;
struct nfs_access_entry {int mask; int cred; } ;
struct nfs4_accessres {int * fattr; int access; int seq_res; struct nfs_server* server; } ;
struct nfs4_accessargs {int access; int seq_args; int bitmask; int fh; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_11 ;
 int FUNC_4 (struct nfs_access_entry*,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_12, struct nfs_access_entry *VAR_13)
{
 struct nfs_server *VAR_14 = FUNC_1(VAR_12);
 struct nfs4_accessargs VAR_15 = {
  .fh = FUNC_0(VAR_12),
  .bitmask = VAR_14->attr_bitmask,
 };
 struct nfs4_accessres VAR_16 = {
  .server = VAR_14,
 };
 struct rpc_message VAR_17 = {
  .rpc_proc = &VAR_11[VAR_10],
  .rpc_argp = &VAR_15,
  .rpc_resp = &VAR_16,
  .rpc_cred = VAR_13->cred,
 };
 int VAR_18 = VAR_13->mask;
 int VAR_19;




 if (VAR_18 & VAR_2)
  VAR_15.access |= VAR_9;
 if (FUNC_2(VAR_12->i_mode)) {
  if (VAR_18 & VAR_3)
   VAR_15.access |= VAR_8 | VAR_6 | VAR_4;
  if (VAR_18 & VAR_1)
   VAR_15.access |= VAR_7;
 } else {
  if (VAR_18 & VAR_3)
   VAR_15.access |= VAR_8 | VAR_6;
  if (VAR_18 & VAR_1)
   VAR_15.access |= VAR_5;
 }

 VAR_16.fattr = FUNC_5();
 if (VAR_16.fattr == ((void*)0))
  return -VAR_0;

 VAR_19 = FUNC_3(VAR_14->client, VAR_14, &VAR_17, &VAR_15.seq_args, &VAR_16.seq_res, 0);
 if (!VAR_19) {
  FUNC_4(VAR_13, VAR_16.access);
  FUNC_7(VAR_12, VAR_16.fattr);
 }
 FUNC_6(VAR_16.fattr);
 return VAR_19;
}
