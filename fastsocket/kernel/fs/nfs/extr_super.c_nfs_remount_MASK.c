
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


typedef int u32 ;
struct super_block {struct nfs_server* s_fs_info; } ;
struct nfs_server {int flags; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; TYPE_5__* nfs_client; int port; TYPE_4__* client; int wsize; int rsize; } ;
struct TYPE_12__ {int addrlen; int address; int port; } ;
struct nfs_parsed_mount_data {int flags; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; unsigned int timeo; TYPE_6__ nfs_server; int * auth_flavors; int retrans; int wsize; int rsize; } ;
struct nfs_mount_data {int version; } ;
struct nfs4_mount_data {int version; } ;
struct TYPE_11__ {int cl_addr; int cl_addrlen; TYPE_1__* rpc_ops; } ;
struct TYPE_10__ {TYPE_3__* cl_timeout; TYPE_2__* cl_auth; } ;
struct TYPE_9__ {unsigned int to_initval; int to_retries; } ;
struct TYPE_8__ {int au_flavor; } ;
struct TYPE_7__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfs_parsed_mount_data*) ;
 struct nfs_parsed_mount_data* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct nfs_server*,struct nfs_parsed_mount_data*) ;
 int FUNC_5 (char*,struct nfs_parsed_mount_data*) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct super_block *VAR_5, int *VAR_6, char *VAR_7)
{
 int VAR_8;
 struct nfs_server *VAR_9 = VAR_5->s_fs_info;
 struct nfs_parsed_mount_data *VAR_10;
 struct nfs_mount_data *VAR_11 = (struct nfs_mount_data *)VAR_7;
 struct nfs4_mount_data *VAR_12 = (struct nfs4_mount_data *)VAR_7;
 u32 VAR_13 = VAR_9->nfs_client->rpc_ops->version;







 if ((VAR_13 == 4 && (!VAR_12 || VAR_12->version == 1)) ||
     (VAR_13 <= 3 && (!VAR_11 || (VAR_11->version >= 1 &&
        VAR_11->version <= 6))))
  return 0;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 FUNC_2();

 VAR_10->flags = VAR_9->flags;
 VAR_10->rsize = VAR_9->rsize;
 VAR_10->wsize = VAR_9->wsize;
 VAR_10->retrans = VAR_9->client->cl_timeout->to_retries;
 VAR_10->auth_flavors[0] = VAR_9->client->cl_auth->au_flavor;
 VAR_10->acregmin = VAR_9->acregmin / VAR_2;
 VAR_10->acregmax = VAR_9->acregmax / VAR_2;
 VAR_10->acdirmin = VAR_9->acdirmin / VAR_2;
 VAR_10->acdirmax = VAR_9->acdirmax / VAR_2;
 VAR_10->timeo = 10U * VAR_9->client->cl_timeout->to_initval / VAR_2;
 VAR_10->nfs_server.port = VAR_9->port;
 VAR_10->nfs_server.addrlen = VAR_9->nfs_client->cl_addrlen;
 FUNC_3(&VAR_10->nfs_server.address, &VAR_9->nfs_client->cl_addr,
  VAR_10->nfs_server.addrlen);


 VAR_8 = FUNC_5((char *)VAR_11, VAR_10);
 if (VAR_8 < 0)
  goto out;







 if (VAR_10->flags & VAR_4)
  *VAR_6 |= VAR_3;


 VAR_8 = FUNC_4(VAR_9, VAR_10);
out:
 FUNC_0(VAR_10);
 FUNC_6();
 return VAR_8;
}
