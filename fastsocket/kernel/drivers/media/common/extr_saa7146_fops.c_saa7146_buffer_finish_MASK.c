
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7146_dmaqueue {TYPE_2__* curr; } ;
struct saa7146_dev {int slock; } ;
struct TYPE_3__ {int state; int done; int ts; } ;
struct TYPE_4__ {TYPE_1__ vb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct saa7146_dev *VAR_0,
      struct saa7146_dmaqueue *VAR_1,
      int VAR_2)
{
 FUNC_3(&VAR_0->slock);
 FUNC_2(("dev:%p, dmaq:%p, state:%d\n", VAR_0, VAR_1, VAR_2));
 FUNC_2(("q->curr:%p\n",VAR_1->curr));

 FUNC_0(!VAR_1->curr);


 if (((void*)0) == VAR_1->curr) {
  FUNC_1(("aiii. no current buffer\n"));
  return;
 }

 VAR_1->curr->vb.state = VAR_2;
 FUNC_4(&VAR_1->curr->vb.ts);
 FUNC_5(&VAR_1->curr->vb.done);

 VAR_1->curr = ((void*)0);
}
