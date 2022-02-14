
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_npages; int rq_pagesz; int rq_tailsz; int * rq_pages; } ;
struct kvec {int iov_len; int iov_base; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct smb_rqst *VAR_0, unsigned int VAR_1,
   struct kvec *VAR_2)
{
 VAR_2->iov_base = FUNC_0(VAR_0->rq_pages[VAR_1]);


 if (VAR_1 == (VAR_0->rq_npages - 1))
  VAR_2->iov_len = VAR_0->rq_tailsz;
 else
  VAR_2->iov_len = VAR_0->rq_pagesz;
}
