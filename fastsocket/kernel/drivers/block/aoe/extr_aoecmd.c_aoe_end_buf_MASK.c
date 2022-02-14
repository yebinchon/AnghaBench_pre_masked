
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {void* special; } ;
struct buf {int bio; struct request* rq; } ;
struct TYPE_2__ {struct buf* buf; } ;
struct aoedev {int bufpool; TYPE_1__ ip; } ;


 int FUNC_0 (struct aoedev*,struct request*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buf*,int ) ;

__attribute__((used)) static void
FUNC_3(struct aoedev *VAR_0, struct buf *VAR_1)
{
 struct request *VAR_2;
 unsigned long VAR_3;

 if (VAR_1 == VAR_0->ip.buf)
  VAR_0->ip.buf = ((void*)0);
 VAR_2 = VAR_1->rq;
 FUNC_1(VAR_1->bio);
 FUNC_2(VAR_1, VAR_0->bufpool);
 VAR_3 = (unsigned long) VAR_2->special;
 VAR_2->special = (void *) --VAR_3;
 if (VAR_3 == 0)
  FUNC_0(VAR_0, VAR_2, 0);
}
