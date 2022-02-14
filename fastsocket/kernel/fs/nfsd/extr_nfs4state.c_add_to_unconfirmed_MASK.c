
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cl_id; } ;
struct nfs4_client {int cl_idhash; TYPE_1__ cl_clientid; int cl_strhash; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct nfs4_client*) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct nfs4_client *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 FUNC_1(&VAR_2->cl_strhash, &VAR_1[VAR_3]);
 VAR_4 = FUNC_0(VAR_2->cl_clientid.cl_id);
 FUNC_1(&VAR_2->cl_idhash, &VAR_0[VAR_4]);
 FUNC_2(VAR_2);
}
