
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct TYPE_6__ {scalar_t__ version; int port; int addrlen; TYPE_1__ address; scalar_t__ hostname; int protocol; } ;
struct TYPE_5__ {int addrlen; int address; scalar_t__ hostname; int export_path; } ;
struct nfs_parsed_mount_data {int flags; int version; TYPE_3__ mount_server; TYPE_2__ nfs_server; } ;
struct nfs_mount_request {int noresvport; unsigned int* auth_flav_len; scalar_t__ version; scalar_t__ hostname; struct sockaddr* sap; int salen; int * auth_flavs; struct nfs_fh* fh; int protocol; int dirpath; } ;
struct nfs_fh {int dummy; } ;
typedef int rpc_authflavor_t ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,scalar_t__,int) ;
 int FUNC_2 (struct sockaddr*,int *,int ) ;
 int FUNC_3 (struct nfs_mount_request*) ;
 int FUNC_4 (struct sockaddr*,int *,int ) ;
 int FUNC_5 (struct nfs_parsed_mount_data*,struct nfs_mount_request*) ;

__attribute__((used)) static int FUNC_6(struct nfs_parsed_mount_data *VAR_6,
    struct nfs_fh *VAR_7)
{
 rpc_authflavor_t VAR_8[VAR_2];
 unsigned int VAR_9 = FUNC_0(VAR_8);
 struct nfs_mount_request VAR_10 = {
  .sap = (struct sockaddr *)
      &VAR_6->mount_server.address,
  .dirpath = VAR_6->nfs_server.export_path,
  .protocol = VAR_6->mount_server.protocol,
  .fh = VAR_7,
  .noresvport = VAR_6->flags & VAR_5,
  .auth_flav_len = &VAR_9,
  .auth_flavs = VAR_8,
 };
 int VAR_11;

 if (VAR_6->mount_server.version == 0) {
  switch (VAR_6->version) {
   default:
    VAR_6->mount_server.version = VAR_3;
    break;
   case 2:
    VAR_6->mount_server.version = VAR_4;
  }
 }
 VAR_10.version = VAR_6->mount_server.version;

 if (VAR_6->mount_server.hostname)
  VAR_10.hostname = VAR_6->mount_server.hostname;
 else
  VAR_10.hostname = VAR_6->nfs_server.hostname;




 if (VAR_6->mount_server.address.ss_family == VAR_0) {
  FUNC_2(VAR_10.sap, &VAR_6->nfs_server.address,
         VAR_6->nfs_server.addrlen);
  VAR_6->mount_server.addrlen = VAR_6->nfs_server.addrlen;
 }
 VAR_10.salen = VAR_6->mount_server.addrlen;
 FUNC_4(VAR_10.sap, &VAR_6->mount_server.port, 0);





 VAR_11 = FUNC_3(&VAR_10);
 if (VAR_11 != 0) {
  FUNC_1(VAR_1, "NFS: unable to mount server %s, error %d\n",
    VAR_10.hostname, VAR_11);
  return VAR_11;
 }




 if (VAR_6->mount_server.version != VAR_3)
  return 0;
 return FUNC_5(VAR_6, &VAR_10);
}
