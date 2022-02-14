
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_c {struct pool* pool; } ;
struct TYPE_2__ {int work; } ;
struct pool {int low_water_triggered; TYPE_1__ waker; int lock; } ;
struct dm_target {struct pool_c* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_0)
{
 struct pool_c *VAR_1 = VAR_0->private;
 struct pool *VAR_2 = VAR_1->pool;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_2->low_water_triggered = 0;
 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_1(VAR_2);

 FUNC_0(&VAR_2->waker.work);
}
