
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int protocol; void* port; } ;
struct TYPE_3__ {void* port; } ;
struct nfs_parsed_mount_data {int auth_flavor_len; unsigned int version; int lsm_opts; scalar_t__ minorversion; int * auth_flavors; TYPE_2__ nfs_server; TYPE_1__ mount_server; int acdirmax; int acdirmin; int acregmax; int acregmin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nfs_parsed_mount_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct nfs_parsed_mount_data *FUNC_2(unsigned int VAR_8)
{
 struct nfs_parsed_mount_data *VAR_9;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_0);
 if (VAR_9) {
  VAR_9->acregmin = VAR_4;
  VAR_9->acregmax = VAR_3;
  VAR_9->acdirmin = VAR_2;
  VAR_9->acdirmax = VAR_1;
  VAR_9->mount_server.port = VAR_5;
  VAR_9->nfs_server.port = VAR_5;
  VAR_9->nfs_server.protocol = VAR_7;
  VAR_9->auth_flavors[0] = VAR_6;
  VAR_9->auth_flavor_len = 1;
  VAR_9->version = VAR_8;
  VAR_9->minorversion = 0;
  FUNC_1(&VAR_9->lsm_opts);
 }
 return VAR_9;
}
