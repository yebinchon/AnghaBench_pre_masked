
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dev; } ;
struct throtl_grp {TYPE_1__ blkg; } ;
struct throtl_data {TYPE_2__* queue; } ;
struct TYPE_4__ {int queue_lock; } ;


 int FUNC_0 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct throtl_data *VAR_0, struct throtl_grp *VAR_1)
{
 if (!VAR_1 || VAR_1->blkg.dev)
  return;

 FUNC_1(VAR_0->queue->queue_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0->queue->queue_lock);
}
