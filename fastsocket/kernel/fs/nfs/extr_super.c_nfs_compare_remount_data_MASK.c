
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nfs_server {scalar_t__ flags; scalar_t__ rsize; scalar_t__ wsize; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; scalar_t__ port; TYPE_5__* nfs_client; TYPE_3__* client; } ;
struct TYPE_9__ {scalar_t__ port; scalar_t__ addrlen; int address; } ;
struct nfs_parsed_mount_data {scalar_t__ flags; scalar_t__ rsize; scalar_t__ wsize; scalar_t__ retrans; scalar_t__* auth_flavors; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; unsigned int timeo; TYPE_4__ nfs_server; } ;
struct TYPE_10__ {scalar_t__ cl_addrlen; int cl_addr; } ;
struct TYPE_8__ {TYPE_2__* cl_timeout; TYPE_1__* cl_auth; } ;
struct TYPE_7__ {scalar_t__ to_retries; unsigned int to_initval; } ;
struct TYPE_6__ {scalar_t__ au_flavor; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*) ;

__attribute__((used)) static int
FUNC_1(struct nfs_server *VAR_2,
    struct nfs_parsed_mount_data *VAR_3)
{
 if (VAR_3->flags != VAR_2->flags ||
     VAR_3->rsize != VAR_2->rsize ||
     VAR_3->wsize != VAR_2->wsize ||
     VAR_3->retrans != VAR_2->client->cl_timeout->to_retries ||
     VAR_3->auth_flavors[0] != VAR_2->client->cl_auth->au_flavor ||
     VAR_3->acregmin != VAR_2->acregmin / VAR_1 ||
     VAR_3->acregmax != VAR_2->acregmax / VAR_1 ||
     VAR_3->acdirmin != VAR_2->acdirmin / VAR_1 ||
     VAR_3->acdirmax != VAR_2->acdirmax / VAR_1 ||
     VAR_3->timeo != (10U * VAR_2->client->cl_timeout->to_initval / VAR_1) ||
     VAR_3->nfs_server.port != VAR_2->port ||
     VAR_3->nfs_server.addrlen != VAR_2->nfs_client->cl_addrlen ||
     !FUNC_0((struct sockaddr *)&VAR_3->nfs_server.address,
     (struct sockaddr *)&VAR_2->nfs_client->cl_addr))
  return -VAR_0;

 return 0;
}
