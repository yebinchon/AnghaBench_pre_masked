
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {int len; int data; } ;
struct TYPE_2__ {int len; int * data; } ;
struct nfs4_client {TYPE_1__ cl_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs4_client*) ;
 int * FUNC_1 (int ,int ) ;
 struct nfs4_client* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static struct nfs4_client *FUNC_4(struct xdr_netobj VAR_1)
{
 struct nfs4_client *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct nfs4_client), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->cl_name.data = FUNC_1(VAR_1.len, VAR_0);
 if (VAR_2->cl_name.data == ((void*)0)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 FUNC_3(VAR_2->cl_name.data, VAR_1.data, VAR_1.len);
 VAR_2->cl_name.len = VAR_1.len;
 return VAR_2;
}
