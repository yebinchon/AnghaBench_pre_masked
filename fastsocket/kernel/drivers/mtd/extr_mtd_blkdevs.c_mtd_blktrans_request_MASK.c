
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct mtd_blktrans_ops* queuedata; } ;
struct mtd_blktrans_ops {TYPE_1__* blkcore_priv; } ;
struct TYPE_2__ {int thread; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct request_queue *VAR_0)
{
 struct mtd_blktrans_ops *VAR_1 = VAR_0->queuedata;
 FUNC_0(VAR_1->blkcore_priv->thread);
}
