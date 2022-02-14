
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct nfs4_client {TYPE_1__ cl_verifier; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_2__ nfs4_verifier ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct nfs4_client *VAR_0, nfs4_verifier *VAR_1)
{
 FUNC_0(VAR_0->cl_verifier.data, VAR_1->data,
   sizeof(VAR_0->cl_verifier.data));
}
