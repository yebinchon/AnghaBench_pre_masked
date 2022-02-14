
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {unsigned int page_len; TYPE_1__* head; } ;
struct svc_rqst {TYPE_3__* rq_vec; int * rq_pages; TYPE_2__ rq_arg; } ;
struct nfsd3_writeargs {scalar_t__ count; unsigned int len; unsigned int vlen; void* stable; int offset; int fh; } ;
typedef int __be32 ;
struct TYPE_6__ {unsigned int iov_len; void* iov_base; } ;
struct TYPE_4__ {void* iov_base; unsigned int iov_len; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (int *,int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct svc_rqst*) ;
 int * FUNC_5 (int *,int *) ;

int
FUNC_6(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd3_writeargs *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8 = FUNC_4(VAR_1);

 if (!(VAR_2 = FUNC_1(VAR_2, &VAR_3->fh)))
  return 0;
 VAR_2 = FUNC_5(VAR_2, &VAR_3->offset);

 VAR_3->count = FUNC_2(*VAR_2++);
 VAR_3->stable = FUNC_2(*VAR_2++);
 VAR_4 = VAR_3->len = FUNC_2(*VAR_2++);



 if (VAR_3->count != VAR_3->len)
  return 0;





 VAR_6 = (void*)VAR_2 - VAR_1->rq_arg.head[0].iov_base;
 VAR_7 = VAR_1->rq_arg.head[0].iov_len + VAR_1->rq_arg.page_len
  - VAR_6;
 if (VAR_7 < FUNC_0(VAR_4)*4)
  return 0;

 if (VAR_3->count > VAR_8) {
  VAR_3->count = VAR_8;
  VAR_4 = VAR_3->len = VAR_8;
 }
 VAR_1->rq_vec[0].iov_base = (void*)VAR_2;
 VAR_1->rq_vec[0].iov_len = VAR_1->rq_arg.head[0].iov_len - VAR_6;
 VAR_5 = 0;
 while (VAR_4 > VAR_1->rq_vec[VAR_5].iov_len) {
  VAR_4 -= VAR_1->rq_vec[VAR_5].iov_len;
  VAR_5++;
  VAR_1->rq_vec[VAR_5].iov_base = FUNC_3(VAR_1->rq_pages[VAR_5]);
  VAR_1->rq_vec[VAR_5].iov_len = VAR_0;
 }
 VAR_1->rq_vec[VAR_5].iov_len = VAR_4;
 VAR_3->vlen = VAR_5 + 1;
 return 1;
}
