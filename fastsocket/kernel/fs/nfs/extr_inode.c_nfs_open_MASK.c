
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_cred*) ;
 int FUNC_1 (struct rpc_cred*) ;
 struct nfs_open_context* FUNC_2 (int ,struct rpc_cred*,int ) ;
 int FUNC_3 (struct file*,struct nfs_open_context*) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 (struct nfs_open_context*) ;
 int FUNC_6 (struct rpc_cred*) ;
 struct rpc_cred* FUNC_7 () ;

int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 struct nfs_open_context *VAR_3;
 struct rpc_cred *VAR_4;

 VAR_4 = FUNC_7();
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_3 = FUNC_2(VAR_2->f_path.dentry, VAR_4, VAR_2->f_mode);
 FUNC_6(VAR_4);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 FUNC_3(VAR_2, VAR_3);
 FUNC_5(VAR_3);
 FUNC_4(VAR_1, VAR_2);
 return 0;
}
