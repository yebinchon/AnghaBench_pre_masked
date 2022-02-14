
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fib {int hw_fib_va; struct aac_dev* dev; } ;
struct TYPE_5__ {int * producer; } ;
struct aac_queue {int lock; TYPE_2__ headers; int numpending; } ;
struct aac_dev {TYPE_1__* queues; } ;
struct TYPE_6__ {unsigned long irq_mod; } ;
struct TYPE_4__ {struct aac_queue* queue; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct aac_dev*,size_t) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct aac_dev*,scalar_t__*,size_t,int ,int,struct fib*,unsigned long*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

int FUNC_5(struct fib * VAR_2)
{
 struct aac_dev *VAR_3 = VAR_2->dev;
 struct aac_queue *VAR_4 = &VAR_3->queues->queue[VAR_0];
 unsigned long VAR_5;
 u32 VAR_6;
 unsigned long VAR_7 = 0;

 FUNC_3(VAR_4->lock, VAR_5);
 FUNC_1( VAR_3, &VAR_6, VAR_0, VAR_2->hw_fib_va, 1, VAR_2, &VAR_7);

 VAR_4->numpending++;
 *(VAR_4->headers.producer) = FUNC_2(VAR_6 + 1);
 FUNC_4(VAR_4->lock, VAR_5);
 if (!(VAR_7 & VAR_1.irq_mod))
  FUNC_0(VAR_3, VAR_0);

 return 0;
}
