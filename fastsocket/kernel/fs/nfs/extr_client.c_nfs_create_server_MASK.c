
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ minor; scalar_t__ major; } ;
struct nfs_server {scalar_t__ namelen; int mount_time; TYPE_3__ fsid; TYPE_2__* nfs_client; int caps; } ;
struct nfs_parsed_mount_data {int flags; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int valid; int fsid; } ;
struct TYPE_5__ {TYPE_1__* rpc_ops; } ;
struct TYPE_4__ {int version; int (* getattr ) (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;int file_inode_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct nfs_server* FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,unsigned long long,...) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 struct nfs_fattr* FUNC_4 () ;
 struct nfs_server* FUNC_5 () ;
 int FUNC_6 (struct nfs_fattr*) ;
 int FUNC_7 (struct nfs_server*) ;
 int FUNC_8 (struct nfs_server*,struct nfs_parsed_mount_data const*) ;
 int FUNC_9 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_10 (struct nfs_server*) ;
 int FUNC_11 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;

struct nfs_server *FUNC_12(const struct nfs_parsed_mount_data *VAR_7,
         struct nfs_fh *VAR_8)
{
 struct nfs_server *VAR_9;
 struct nfs_fattr *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5();
 if (!VAR_9)
  return FUNC_1(-VAR_0);

 VAR_11 = -VAR_0;
 VAR_10 = FUNC_4();
 if (VAR_10 == ((void*)0))
  goto error;


 VAR_11 = FUNC_8(VAR_9, VAR_7);
 if (VAR_11 < 0)
  goto error;

 FUNC_0(!VAR_9->nfs_client);
 FUNC_0(!VAR_9->nfs_client->rpc_ops);
 FUNC_0(!VAR_9->nfs_client->rpc_ops->file_inode_ops);


 VAR_11 = FUNC_9(VAR_9, VAR_8, VAR_10);
 if (VAR_11 < 0)
  goto error;
 if (VAR_9->nfs_client->rpc_ops->version == 3) {
  if (VAR_9->namelen == 0 || VAR_9->namelen > VAR_2)
   VAR_9->namelen = VAR_2;
  if (!(VAR_7->flags & VAR_5))
   VAR_9->caps |= VAR_4;
 } else {
  if (VAR_9->namelen == 0 || VAR_9->namelen > VAR_1)
   VAR_9->namelen = VAR_1;
 }

 if (!(VAR_10->valid & VAR_3)) {
  VAR_11 = VAR_9->nfs_client->rpc_ops->getattr(VAR_9, VAR_8, VAR_10);
  if (VAR_11 < 0) {
   FUNC_2("nfs_create_server: getattr error = %d\n", -VAR_11);
   goto error;
  }
 }
 FUNC_3(&VAR_9->fsid, &VAR_10->fsid, sizeof(VAR_9->fsid));

 FUNC_2("Server FSID: %llx:%llx\n",
  (unsigned long long) VAR_9->fsid.major,
  (unsigned long long) VAR_9->fsid.minor);

 FUNC_10(VAR_9);
 VAR_9->mount_time = VAR_6;
 FUNC_6(VAR_10);
 return VAR_9;

error:
 FUNC_6(VAR_10);
 FUNC_7(VAR_9);
 return FUNC_1(VAR_11);
}
