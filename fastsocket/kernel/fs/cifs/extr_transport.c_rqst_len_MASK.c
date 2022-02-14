
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {unsigned int rq_nvec; int rq_npages; int rq_pagesz; scalar_t__ rq_tailsz; struct kvec* rq_iov; } ;
struct kvec {scalar_t__ iov_len; } ;



__attribute__((used)) static unsigned long
FUNC_0(struct smb_rqst *VAR_0)
{
 unsigned int VAR_1;
 struct kvec *VAR_2 = VAR_0->rq_iov;
 unsigned long VAR_3 = 0;


 for (VAR_1 = 0; VAR_1 < VAR_0->rq_nvec; VAR_1++)
  VAR_3 += VAR_2[VAR_1].iov_len;


 if (VAR_0->rq_npages) {
  VAR_3 += VAR_0->rq_pagesz * (VAR_0->rq_npages - 1);
  VAR_3 += VAR_0->rq_tailsz;
 }

 return VAR_3;
}
