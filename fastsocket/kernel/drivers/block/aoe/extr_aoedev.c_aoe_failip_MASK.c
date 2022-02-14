
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {void* special; } ;
struct bio {struct bio* bi_next; int bi_flags; } ;
struct TYPE_2__ {struct bio* nxbio; struct request* rq; int buf; } ;
struct aoedev {TYPE_1__ ip; } ;


 int VAR_0 ;
 int FUNC_0 (struct aoedev*,struct request*,int ) ;
 int FUNC_1 (struct aoedev*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct aoedev *VAR_1)
{
 struct request *VAR_2;
 struct bio *VAR_3;
 unsigned long VAR_4;

 FUNC_1(VAR_1, VAR_1->ip.buf);

 VAR_2 = VAR_1->ip.rq;
 if (VAR_2 == ((void*)0))
  return;
 while ((VAR_3 = VAR_1->ip.nxbio)) {
  FUNC_2(VAR_0, &VAR_3->bi_flags);
  VAR_1->ip.nxbio = VAR_3->bi_next;
  VAR_4 = (unsigned long) VAR_2->special;
  VAR_2->special = (void *) --VAR_4;
 }
 if ((unsigned long) VAR_2->special == 0)
  FUNC_0(VAR_1, VAR_2, 0);
}
