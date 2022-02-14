
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nlm_res {int status; int cookie; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (struct svc_rqst*,int *) ;
 int VAR_0 ;

int
FUNC_2(struct svc_rqst *VAR_1, __be32 *VAR_2, struct nlm_res *VAR_3)
{
 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->cookie)))
  return 0;
 *VAR_2++ = VAR_3->status;
 *VAR_2++ = VAR_0;
 return FUNC_1(VAR_1, VAR_2);
}
