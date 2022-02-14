
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs_fsinfo {scalar_t__ lease_time; int time_delta; int maxfilesize; void* dtpref; void* wtmult; void* wtpref; void* wtmax; void* rtmult; void* rtpref; void* rtmax; int fattr; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_fsinfo *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(*VAR_1++);

 VAR_1 = FUNC_3(VAR_1, VAR_2->fattr);
 if (VAR_3 != 0)
  return FUNC_0(VAR_3);

 VAR_2->rtmax = FUNC_1(*VAR_1++);
 VAR_2->rtpref = FUNC_1(*VAR_1++);
 VAR_2->rtmult = FUNC_1(*VAR_1++);
 VAR_2->wtmax = FUNC_1(*VAR_1++);
 VAR_2->wtpref = FUNC_1(*VAR_1++);
 VAR_2->wtmult = FUNC_1(*VAR_1++);
 VAR_2->dtpref = FUNC_1(*VAR_1++);
 VAR_1 = FUNC_2(VAR_1, &VAR_2->maxfilesize);
 VAR_1 = FUNC_4(VAR_1, &VAR_2->time_delta);


 VAR_2->lease_time = 0;
 return 0;
}
