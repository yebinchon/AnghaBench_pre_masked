
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ minor; scalar_t__ major; } ;
struct nfs_server {scalar_t__ namelen; int mount_time; TYPE_3__ fsid; int client_acl; TYPE_2__* client; TYPE_1__* nfs_client; int destroy; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {TYPE_3__ fsid; } ;
typedef int rpc_authflavor_t ;
struct TYPE_5__ {int cl_timeout; } ;
struct TYPE_4__ {int cl_count; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 struct nfs_fattr* FUNC_4 () ;
 struct nfs_server* FUNC_5 () ;
 int FUNC_6 (struct nfs_fattr*) ;
 int FUNC_7 (struct nfs_server*) ;
 int FUNC_8 (struct nfs_server*) ;
 int FUNC_9 (struct nfs_server*,int ,int ) ;
 int FUNC_10 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_11 (struct nfs_server*,struct nfs_server*) ;
 int FUNC_12 (struct nfs_server*) ;
 int FUNC_13 (struct nfs_server*) ;

struct nfs_server *FUNC_14(struct nfs_server *VAR_3,
        struct nfs_fh *VAR_4,
        struct nfs_fattr *VAR_5,
        rpc_authflavor_t VAR_6)
{
 struct nfs_server *VAR_7;
 struct nfs_fattr *VAR_8;
 int VAR_9;

 FUNC_3("--> nfs_clone_server(,%llx:%llx,)\n",
  (unsigned long long) VAR_5->fsid.major,
  (unsigned long long) VAR_5->fsid.minor);

 VAR_7 = FUNC_5();
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_9 = -VAR_0;
 VAR_8 = FUNC_4();
 if (VAR_8 == ((void*)0))
  goto out_free_server;


 VAR_7->nfs_client = VAR_3->nfs_client;
 VAR_7->destroy = VAR_3->destroy;
 FUNC_2(&VAR_7->nfs_client->cl_count);
 FUNC_11(VAR_7, VAR_3);

 VAR_7->fsid = VAR_5->fsid;

 VAR_9 = FUNC_9(VAR_7,
   VAR_3->client->cl_timeout,
   VAR_6);
 if (VAR_9 < 0)
  goto out_free_server;
 if (!FUNC_1(VAR_3->client_acl))
  FUNC_8(VAR_7);


 VAR_9 = FUNC_10(VAR_7, VAR_4, VAR_8);
 if (VAR_9 < 0)
  goto out_free_server;

 if (VAR_7->namelen == 0 || VAR_7->namelen > VAR_1)
  VAR_7->namelen = VAR_1;

 FUNC_3("Cloned FSID: %llx:%llx\n",
  (unsigned long long) VAR_7->fsid.major,
  (unsigned long long) VAR_7->fsid.minor);

 VAR_9 = FUNC_13(VAR_7);
 if (VAR_9 < 0)
  goto out_free_server;

 FUNC_12(VAR_7);
 VAR_7->mount_time = VAR_2;

 FUNC_6(VAR_8);
 FUNC_3("<-- nfs_clone_server() = %p\n", VAR_7);
 return VAR_7;

out_free_server:
 FUNC_6(VAR_8);
 FUNC_7(VAR_7);
 FUNC_3("<-- nfs_clone_server() = error %d\n", VAR_9);
 return FUNC_0(VAR_9);
}
