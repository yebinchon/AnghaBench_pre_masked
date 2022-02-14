
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thin_c {scalar_t__ origin_dev; scalar_t__ pool_dev; int td; TYPE_2__* pool; int list; int can_destroy; } ;
struct dm_target {struct thin_c* private; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_target*,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct thin_c*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 (struct thin_c*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct dm_target *VAR_1)
{
 struct thin_c *VAR_2 = VAR_1->private;
 unsigned long VAR_3;

 FUNC_10(VAR_2);
 FUNC_11(&VAR_2->can_destroy);

 FUNC_7(&VAR_2->pool->lock, VAR_3);
 FUNC_4(&VAR_2->list);
 FUNC_8(&VAR_2->pool->lock, VAR_3);
 FUNC_9();

 FUNC_5(&VAR_0.mutex);

 FUNC_0(VAR_2->pool);
 FUNC_1(VAR_2->td);
 FUNC_2(VAR_1, VAR_2->pool_dev);
 if (VAR_2->origin_dev)
  FUNC_2(VAR_1, VAR_2->origin_dev);
 FUNC_3(VAR_2);

 FUNC_6(&VAR_0.mutex);
}
