
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cl_id; } ;
struct nfs4_client {int cl_strhash; int cl_recdir; int cl_idhash; TYPE_1__ cl_clientid; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*,struct nfs4_client*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nfs4_client*) ;

__attribute__((used)) static void
FUNC_5(struct nfs4_client *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->cl_clientid.cl_id);
 unsigned int VAR_4;

 FUNC_2("NFSD: move_to_confirm nfs4_client %p\n", VAR_2);
 FUNC_3(&VAR_2->cl_idhash, &VAR_0[VAR_3]);
 VAR_4 = FUNC_1(VAR_2->cl_recdir);
 FUNC_3(&VAR_2->cl_strhash, &VAR_1[VAR_4]);
 FUNC_4(VAR_2);
}
