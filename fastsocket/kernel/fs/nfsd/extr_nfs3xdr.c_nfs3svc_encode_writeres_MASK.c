
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd3_writeres {scalar_t__ status; int committed; int count; int fh; } ;
typedef int __be32 ;
struct TYPE_2__ {int tv_usec; int tv_sec; } ;


 int * FUNC_0 (struct svc_rqst*,int *,int *) ;
 void* FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct svc_rqst*,int *) ;

int
FUNC_3(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd3_writeres *VAR_3)
{
 VAR_2 = FUNC_0(VAR_1, VAR_2, &VAR_3->fh);
 if (VAR_3->status == 0) {
  *VAR_2++ = FUNC_1(VAR_3->count);
  *VAR_2++ = FUNC_1(VAR_3->committed);
  *VAR_2++ = FUNC_1(VAR_0.tv_sec);
  *VAR_2++ = FUNC_1(VAR_0.tv_usec);
 }
 return FUNC_2(VAR_1, VAR_2);
}
