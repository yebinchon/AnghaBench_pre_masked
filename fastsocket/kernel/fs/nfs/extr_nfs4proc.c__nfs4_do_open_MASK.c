
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_server {int dummy; } ;
struct nfs4_state_owner {int dummy; } ;
struct nfs4_state {int inode; } ;
struct TYPE_4__ {int f_attr; } ;
struct TYPE_3__ {int open_flags; scalar_t__ createmode; } ;
struct nfs4_opendata {TYPE_2__ o_res; TYPE_1__ o_arg; int state; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int * d_inode; } ;
typedef int fmode_t ;
typedef enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int VAR_5 ;
 int FUNC_1 (struct nfs4_opendata*,int ,int,struct nfs4_state**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct rpc_cred*,int ,struct iattr*,struct nfs4_state*) ;
 int FUNC_4 (struct nfs4_opendata*,struct iattr*) ;
 int FUNC_5 (int *,struct nfs4_state_owner*) ;
 struct nfs4_state_owner* FUNC_6 (struct nfs_server*,struct rpc_cred*) ;
 struct nfs4_opendata* FUNC_7 (struct dentry*,struct nfs4_state_owner*,int ,int,struct iattr*,int,int ) ;
 int FUNC_8 (struct nfs4_opendata*) ;
 int FUNC_9 (struct nfs4_state_owner*) ;
 int FUNC_10 (struct nfs_server*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,struct iattr*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_6, struct dentry *VAR_7, fmode_t VAR_8, int VAR_9, struct iattr *VAR_10, struct rpc_cred *VAR_11, struct nfs4_state **VAR_12)
{
 struct nfs4_state_owner *VAR_13;
 struct nfs4_state *VAR_14 = ((void*)0);
 struct nfs_server *VAR_15 = FUNC_0(VAR_6);
 struct nfs4_opendata *VAR_16;
 enum open_claim_type4 VAR_17 = VAR_4;
 int VAR_18;


 VAR_18 = -VAR_0;
 if (!(VAR_13 = FUNC_6(VAR_15, VAR_11))) {
  FUNC_2("nfs4_do_open: nfs4_get_state_owner failed!\n");
  goto out_err;
 }
 VAR_18 = FUNC_10(VAR_15);
 if (VAR_18 != 0)
  goto err_put_state_owner;
 if (VAR_7->d_inode != ((void*)0))
  FUNC_11(VAR_7->d_inode, VAR_8);
 VAR_18 = -VAR_0;
 if (VAR_7->d_inode)
  VAR_17 = VAR_3;
 VAR_16 = FUNC_7(VAR_7, VAR_13, VAR_8, VAR_9, VAR_10,
   VAR_17, VAR_1);
 if (VAR_16 == ((void*)0))
  goto err_put_state_owner;

 if (VAR_7->d_inode != ((void*)0))
  VAR_16->state = FUNC_5(VAR_7->d_inode, VAR_13);

 VAR_18 = FUNC_1(VAR_16, VAR_8, VAR_9, &VAR_14);
 if (VAR_18 != 0)
  goto err_opendata_put;

 if ((VAR_16->o_arg.open_flags & VAR_5) &&
     (VAR_16->o_arg.createmode != VAR_2)) {
  FUNC_4(VAR_16, VAR_10);

  FUNC_12(VAR_16->o_res.f_attr);
  VAR_18 = FUNC_3(VAR_14->inode, VAR_11,
    VAR_16->o_res.f_attr, VAR_10,
    VAR_14);
  if (VAR_18 == 0)
   FUNC_14(VAR_14->inode, VAR_10);
  FUNC_13(VAR_14->inode, VAR_16->o_res.f_attr);
 }
 FUNC_8(VAR_16);
 FUNC_9(VAR_13);
 *VAR_12 = VAR_14;
 return 0;
err_opendata_put:
 FUNC_8(VAR_16);
err_put_state_owner:
 FUNC_9(VAR_13);
out_err:
 *VAR_12 = ((void*)0);
 return VAR_18;
}
