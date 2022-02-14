
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nlm_lock {int len; int caller; } ;
struct nlm_args {int state; struct nlm_lock lock; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rqst*,int *) ;
 int * FUNC_2 (int *,int *,int *,int ) ;

int
FUNC_3(struct svc_rqst *VAR_1, __be32 *VAR_2, struct nlm_args *VAR_3)
{
 struct nlm_lock *VAR_4 = &VAR_3->lock;

 if (!(VAR_2 = FUNC_2(VAR_2, &VAR_4->caller,
         &VAR_4->len, VAR_0)))
  return 0;
 VAR_3->state = FUNC_0(*VAR_2++);
 return FUNC_1(VAR_1, VAR_2);
}
