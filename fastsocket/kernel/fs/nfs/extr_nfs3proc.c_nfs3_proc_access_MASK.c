
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int rpc_cred; struct nfs3_accessres* rpc_resp; struct nfs3_accessargs* rpc_argp; int * rpc_proc; } ;
struct nfs_access_entry {int mask; int cred; } ;
struct nfs3_accessres {int access; int * fattr; } ;
struct nfs3_accessargs {int access; int fh; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int * VAR_11 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *) ;
 int FUNC_7 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_12, struct nfs_access_entry *VAR_13)
{
 struct nfs3_accessargs VAR_14 = {
  .fh = FUNC_1(VAR_12),
 };
 struct nfs3_accessres VAR_15;
 struct rpc_message VAR_16 = {
  .rpc_proc = &VAR_11[VAR_4],
  .rpc_argp = &VAR_14,
  .rpc_resp = &VAR_15,
  .rpc_cred = VAR_13->cred,
 };
 int VAR_17 = VAR_13->mask;
 int VAR_18 = -VAR_0;

 FUNC_3("NFS call  access\n");

 if (VAR_17 & VAR_2)
  VAR_14.access |= VAR_10;
 if (FUNC_2(VAR_12->i_mode)) {
  if (VAR_17 & VAR_3)
   VAR_14.access |= VAR_9 | VAR_7 | VAR_5;
  if (VAR_17 & VAR_1)
   VAR_14.access |= VAR_8;
 } else {
  if (VAR_17 & VAR_3)
   VAR_14.access |= VAR_9 | VAR_7;
  if (VAR_17 & VAR_1)
   VAR_14.access |= VAR_6;
 }

 VAR_15.fattr = FUNC_4();
 if (VAR_15.fattr == ((void*)0))
  goto out;

 VAR_18 = FUNC_7(FUNC_0(VAR_12), &VAR_16, 0);
 FUNC_6(VAR_12, VAR_15.fattr);
 if (VAR_18 == 0) {
  VAR_13->mask = 0;
  if (VAR_15.access & VAR_10)
   VAR_13->mask |= VAR_2;
  if (VAR_15.access & (VAR_9 | VAR_7 | VAR_5))
   VAR_13->mask |= VAR_3;
  if (VAR_15.access & (VAR_8|VAR_6))
   VAR_13->mask |= VAR_1;
 }
 FUNC_5(VAR_15.fattr);
out:
 FUNC_3("NFS reply access: %d\n", VAR_18);
 return VAR_18;
}
