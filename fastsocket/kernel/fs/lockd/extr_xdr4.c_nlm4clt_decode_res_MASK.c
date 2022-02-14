
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nlm_res {int status; int cookie; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nlm_res *VAR_3)
{
 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->cookie)))
  return -VAR_0;
 VAR_3->status = *VAR_2++;
 return 0;
}
