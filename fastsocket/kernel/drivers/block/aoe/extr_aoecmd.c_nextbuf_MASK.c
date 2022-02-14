
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {void* special; struct bio* bio; } ;
struct buf {int dummy; } ;
struct bio {struct bio* bi_next; } ;
struct TYPE_2__ {struct buf* buf; struct request* rq; struct bio* nxbio; } ;
struct aoedev {TYPE_1__ ip; int bufpool; struct request_queue* blkq; } ;


 int VAR_0 ;
 struct request* FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct buf*,struct request*,struct bio*) ;
 struct buf* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct request*) ;

__attribute__((used)) static struct buf *
FUNC_6(struct aoedev *VAR_1)
{
 struct request *VAR_2;
 struct request_queue *VAR_3;
 struct buf *VAR_4;
 struct bio *VAR_5;

 VAR_3 = VAR_1->blkq;
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_1->ip.buf)
  return VAR_1->ip.buf;
 VAR_2 = VAR_1->ip.rq;
 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_0(VAR_3);
  if (VAR_2 == ((void*)0))
   return ((void*)0);
  FUNC_1(VAR_2);
  VAR_1->ip.rq = VAR_2;
  VAR_1->ip.nxbio = VAR_2->bio;
  VAR_2->special = (void *) FUNC_5(VAR_2);
 }
 VAR_4 = FUNC_3(VAR_1->bufpool, VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_4("aoe: nextbuf: unable to mempool_alloc!\n");
  return ((void*)0);
 }
 VAR_5 = VAR_1->ip.nxbio;
 FUNC_2(VAR_4, VAR_2, VAR_5);
 VAR_5 = VAR_5->bi_next;
 VAR_1->ip.nxbio = VAR_5;
 if (VAR_5 == ((void*)0))
  VAR_1->ip.rq = ((void*)0);
 return VAR_1->ip.buf = VAR_4;
}
