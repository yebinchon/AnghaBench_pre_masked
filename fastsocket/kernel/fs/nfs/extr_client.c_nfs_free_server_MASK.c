
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int backing_dev_info; int io_stats; int nfs_client; int client; int client_acl; int (* destroy ) (struct nfs_server*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nfs_server*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfs_server*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct nfs_server*) ;
 int FUNC_10 (struct nfs_server*) ;

void FUNC_11(struct nfs_server *VAR_0)
{
 FUNC_2("--> nfs_free_server()\n");

 FUNC_7(VAR_0);
 FUNC_10(VAR_0);

 if (VAR_0->destroy != ((void*)0))
  VAR_0->destroy(VAR_0);

 if (!FUNC_0(VAR_0->client_acl))
  FUNC_8(VAR_0->client_acl);
 if (!FUNC_0(VAR_0->client))
  FUNC_8(VAR_0->client);

 FUNC_5(VAR_0->nfs_client);

 FUNC_4(VAR_0->io_stats);
 FUNC_1(&VAR_0->backing_dev_info);
 FUNC_3(VAR_0);
 FUNC_6();
 FUNC_2("<-- nfs_free_server()\n");
}
