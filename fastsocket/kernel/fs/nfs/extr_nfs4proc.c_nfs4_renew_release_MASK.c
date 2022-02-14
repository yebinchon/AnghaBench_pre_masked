
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_count; } ;
struct nfs4_renewdata {struct nfs_client* client; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs4_renewdata*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_client*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct nfs4_renewdata *VAR_1 = VAR_0;
 struct nfs_client *VAR_2 = VAR_1->client;

 if (FUNC_0(&VAR_2->cl_count) > 1)
  FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_1);
}
