
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int * rq_respages; int rq_resused; } ;
struct nfsd3_readdirargs {int count; int buffer; void* dircount; int * verf; int cookie; int fh; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (struct svc_rqst*,int *) ;
 int * FUNC_5 (int *,int *) ;

int
FUNC_6(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd3_readdirargs *VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6 = FUNC_3(VAR_1);

 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->fh)))
  return 0;
 VAR_2 = FUNC_5(VAR_2, &VAR_3->cookie);
 VAR_3->verf = VAR_2; VAR_2 += 2;
 VAR_3->dircount = FUNC_1(*VAR_2++);
 VAR_3->count = FUNC_1(*VAR_2++);

 VAR_4 = (VAR_3->count > VAR_6) ? VAR_6 :
        VAR_3->count;
 VAR_3->count = VAR_4;

 while (VAR_4 > 0) {
  VAR_5 = VAR_1->rq_resused++;
  if (!VAR_3->buffer)
   VAR_3->buffer = FUNC_2(VAR_1->rq_respages[VAR_5]);
  VAR_4 -= VAR_0;
 }

 return FUNC_4(VAR_1, VAR_2);
}
