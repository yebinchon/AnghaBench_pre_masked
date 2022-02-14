
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int requeue_task; int requeue_scheduled; } ;
struct tape_device {TYPE_1__ blk_data; } ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct tape_device *VAR_0)
{

 if (FUNC_0(&VAR_0->blk_data.requeue_scheduled, 0, 1) != 0)
  return;
 FUNC_1(&VAR_0->blk_data.requeue_task);
}
