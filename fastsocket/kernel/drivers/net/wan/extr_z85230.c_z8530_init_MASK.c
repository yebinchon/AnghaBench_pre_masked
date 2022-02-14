
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * lock; } ;
struct TYPE_3__ {int * lock; } ;
struct z8530_dev {int lock; TYPE_2__ chanB; TYPE_1__ chanA; } ;


 int FUNC_0 (struct z8530_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct z8530_dev *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;


 FUNC_1(&VAR_0->lock);
 VAR_0->chanA.lock = &VAR_0->lock;
 VAR_0->chanB.lock = &VAR_0->lock;

 FUNC_2(&VAR_0->lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(&VAR_0->lock, VAR_1);

 return VAR_2;
}
