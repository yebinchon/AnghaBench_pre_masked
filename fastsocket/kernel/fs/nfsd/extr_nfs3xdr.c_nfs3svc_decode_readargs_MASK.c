
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct svc_rqst {TYPE_1__* rq_vec; int * rq_respages; int rq_resused; } ;
struct nfsd3_readargs {unsigned int count; int vlen; int offset; int fh; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int iov_len; int iov_base; } ;


 unsigned int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (struct svc_rqst*,int *) ;
 int * FUNC_5 (int *,int *) ;

int
FUNC_6(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd3_readargs *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5,VAR_6;
 u32 VAR_7 = FUNC_3(VAR_1);

 if (!(VAR_2 = FUNC_0(VAR_2, &VAR_3->fh)))
  return 0;
 VAR_2 = FUNC_5(VAR_2, &VAR_3->offset);

 VAR_4 = VAR_3->count = FUNC_1(*VAR_2++);

 if (VAR_4 > VAR_7)
  VAR_4 = VAR_7;


 VAR_5=0;
 while (VAR_4 > 0) {
  VAR_6 = VAR_1->rq_resused++;
  VAR_1->rq_vec[VAR_5].iov_base = FUNC_2(VAR_1->rq_respages[VAR_6]);
  VAR_1->rq_vec[VAR_5].iov_len = VAR_4 < VAR_0? VAR_4 : VAR_0;
  VAR_4 -= VAR_1->rq_vec[VAR_5].iov_len;
  VAR_5++;
 }
 VAR_3->vlen = VAR_5;
 return FUNC_4(VAR_1, VAR_2);
}
