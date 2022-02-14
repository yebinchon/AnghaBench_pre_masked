
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_post_attr; } ;
typedef int __be32 ;


 int * FUNC_0 (struct svc_rqst*,int *,struct svc_fh*,int *) ;
 int VAR_0 ;

__attribute__((used)) static __be32 *
FUNC_1(struct svc_rqst *VAR_1, __be32 *VAR_2, struct svc_fh *VAR_3)
{

 *VAR_2++ = VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_3->fh_post_attr);
}
