
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {struct bio* bio; } ;
struct bio {int bi_flags; int bi_size; } ;
struct TYPE_2__ {struct request* rq; } ;
struct aoedev {TYPE_1__ ip; struct request_queue* blkq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request*,int ,int ) ;
 int FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void
FUNC_3(struct aoedev *VAR_2, struct request *VAR_3, int VAR_4)
{
 struct bio *VAR_5;
 int VAR_6;
 struct request_queue *VAR_7;

 VAR_7 = VAR_2->blkq;
 if (VAR_3 == VAR_2->ip.rq)
  VAR_2->ip.rq = ((void*)0);
 do {
  VAR_5 = VAR_3->bio;
  VAR_6 = !VAR_4 && FUNC_2(VAR_0, &VAR_5->bi_flags);
 } while (FUNC_0(VAR_3, VAR_6 ? 0 : -VAR_1, VAR_5->bi_size));


 if (!VAR_4)
  FUNC_1(VAR_7);
}
