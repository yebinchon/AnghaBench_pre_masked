
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {TYPE_1__* cfqd; int fifo; scalar_t__ next_rq; } ;
struct TYPE_2__ {int queue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct cfq_queue*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cfq_queue *VAR_0)
{
 int VAR_1 = 0;

 while (VAR_0->next_rq) {
  FUNC_2(VAR_0->cfqd->queue, VAR_0->next_rq);
  VAR_1++;
 }

 FUNC_0(!FUNC_3(&VAR_0->fifo));


 FUNC_1(VAR_0->cfqd, VAR_0, 0);
 return VAR_1;
}
