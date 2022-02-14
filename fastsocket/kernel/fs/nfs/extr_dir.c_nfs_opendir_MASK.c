
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
typedef struct rpc_cred nfs_open_dir_context ;
struct inode {int dummy; } ;
struct TYPE_12__ {TYPE_5__* mnt; TYPE_4__* dentry; } ;
struct file {TYPE_6__ f_path; struct rpc_cred* private_data; } ;
struct TYPE_11__ {TYPE_4__* mnt_root; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_10__ {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_cred*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_cred*) ;
 int FUNC_3 (int ,struct inode*) ;
 struct rpc_cred* FUNC_4 (struct inode*,struct rpc_cred*) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct rpc_cred*) ;
 struct rpc_cred* FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4 = 0;
 struct nfs_open_dir_context *VAR_5;
 struct rpc_cred *VAR_6;

 FUNC_5(VAR_0, "NFS: open dir(%s/%s)\n",
   VAR_3->f_path.dentry->d_parent->d_name.name,
   VAR_3->f_path.dentry->d_name.name);

 FUNC_6(VAR_2, VAR_1);

 VAR_6 = FUNC_8();
 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);
 VAR_5 = FUNC_4(VAR_2, VAR_6);
 if (FUNC_0(VAR_5)) {
  VAR_4 = FUNC_2(VAR_5);
  goto out;
 }
 VAR_3->private_data = VAR_5;
 if (VAR_3->f_path.dentry == VAR_3->f_path.mnt->mnt_root) {




  FUNC_3(FUNC_1(VAR_2), VAR_2);
 }
out:
 FUNC_7(VAR_6);
 return VAR_4;
}
