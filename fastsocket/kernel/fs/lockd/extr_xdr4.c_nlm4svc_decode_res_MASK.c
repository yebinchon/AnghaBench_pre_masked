
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nlm_res {int status; int cookie; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (struct svc_rqst*,int *) ;

int
FUNC_2(struct svc_rqst *VAR_0, __be32 *VAR_1, struct nlm_res *VAR_2)
{
 if (!(VAR_1 = FUNC_0(VAR_1, &VAR_2->cookie)))
  return 0;
 VAR_2->status = *VAR_1++;
 return FUNC_1(VAR_0, VAR_1);
}
