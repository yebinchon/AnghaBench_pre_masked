
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_limits {int dummy; } ;
struct mapped_device {int suspend_lock; TYPE_1__* queue; } ;
struct dm_table {int dummy; } ;
struct TYPE_2__ {struct queue_limits limits; } ;


 int VAR_0 ;
 struct dm_table* FUNC_0 (int) ;
 struct dm_table* FUNC_1 (struct mapped_device*,struct dm_table*,struct queue_limits*) ;
 int FUNC_2 (struct dm_table*,struct queue_limits*) ;
 struct dm_table* FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct mapped_device*) ;
 scalar_t__ FUNC_5 (struct dm_table*) ;
 int FUNC_6 (struct dm_table*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct dm_table *FUNC_9(struct mapped_device *VAR_1, struct dm_table *VAR_2)
{
 struct dm_table *VAR_3 = ((void*)0), *VAR_4 = FUNC_0(-VAR_0);
 struct queue_limits VAR_5;
 int VAR_6;

 FUNC_7(&VAR_1->suspend_lock);


 if (!FUNC_4(VAR_1))
  goto out;







 if (FUNC_5(VAR_2)) {
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3)
   VAR_5 = VAR_1->queue->limits;
  FUNC_6(VAR_3);
 }

 if (!VAR_3) {
  VAR_6 = FUNC_2(VAR_2, &VAR_5);
  if (VAR_6) {
   VAR_4 = FUNC_0(VAR_6);
   goto out;
  }
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5);

out:
 FUNC_8(&VAR_1->suspend_lock);
 return VAR_4;
}
