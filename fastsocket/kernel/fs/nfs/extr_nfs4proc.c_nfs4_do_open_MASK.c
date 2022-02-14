
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_server {TYPE_1__* nfs_client; } ;
struct nfs4_state {int dummy; } ;
struct nfs4_exception {int retry; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {int cl_hostname; } ;


 int VAR_0 ;
 struct nfs4_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct dentry*,int,int,struct iattr*,struct rpc_cred*,struct nfs4_state**) ;
 scalar_t__ FUNC_3 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_4 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static struct nfs4_state *FUNC_6(struct inode *VAR_6, struct dentry *VAR_7, fmode_t VAR_8, int VAR_9, struct iattr *VAR_10, struct rpc_cred *VAR_11)
{
 struct nfs_server *VAR_12 = FUNC_1(VAR_6);
 struct nfs4_exception VAR_13 = { };
 struct nfs4_state *VAR_14;
 int VAR_15;

 VAR_8 &= VAR_2|VAR_3|VAR_1;
 do {
  VAR_15 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, &VAR_14);
  if (VAR_15 == 0)
   break;
  if (VAR_15 == -VAR_4) {
   FUNC_5("NFS: v4 server %s "
     " returned a bad sequence-id error!\n",
     FUNC_1(VAR_6)->nfs_client->cl_hostname);
   VAR_13.retry = 1;
   continue;
  }






  if (VAR_15 == -VAR_5) {
   VAR_13.retry = 1;
   continue;
  }
  if (VAR_15 == -VAR_0) {

   VAR_13.retry = 1;
   continue;
  }
  if (FUNC_3(VAR_12, VAR_15, &VAR_13))
   continue;
  VAR_14 = FUNC_0(FUNC_4(VAR_12,
     VAR_15, &VAR_13));
 } while (VAR_13.retry);
 return VAR_14;
}
