
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_data {TYPE_1__* queue; } ;
struct blkio_group {int dummy; } ;
struct TYPE_2__ {int queue_lock; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct blkio_group*) ;
 int FUNC_3 (struct throtl_data*,int ) ;

void FUNC_4(void *VAR_0, struct blkio_group *VAR_1)
{
 unsigned long VAR_2;
 struct throtl_data *VAR_3 = VAR_0;

 FUNC_0(VAR_3->queue->queue_lock, VAR_2);
 FUNC_3(VAR_3, FUNC_2(VAR_1));
 FUNC_1(VAR_3->queue->queue_lock, VAR_2);
}
