
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct queue_limits {int dummy; } ;
struct mapped_device {int map_lock; int flags; int immutable_target_type; struct dm_table* map; int geometry; int disk; struct request_queue* queue; } ;
struct dm_table {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct mapped_device*,struct dm_table*) ;
 int FUNC_1 (struct mapped_device*,scalar_t__) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dm_table*,int ,struct mapped_device*) ;
 int FUNC_5 (struct dm_table*) ;
 scalar_t__ FUNC_6 (struct dm_table*) ;
 int FUNC_7 (struct dm_table*) ;
 scalar_t__ FUNC_8 (struct dm_table*) ;
 int FUNC_9 (struct dm_table*,struct request_queue*,struct queue_limits*) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct request_queue*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static struct dm_table *FUNC_16(struct mapped_device *VAR_2, struct dm_table *VAR_3,
          struct queue_limits *VAR_4)
{
 struct dm_table *VAR_5;
 struct request_queue *VAR_6 = VAR_2->queue;
 sector_t VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(VAR_3);




 if (VAR_7 != FUNC_10(VAR_2->disk))
  FUNC_11(&VAR_2->geometry, 0, sizeof(VAR_2->geometry));

 FUNC_1(VAR_2, VAR_7);

 FUNC_4(VAR_3, VAR_1, VAR_2);
 if (FUNC_8(VAR_3) && !FUNC_2(VAR_6))
  FUNC_13(VAR_6);

 FUNC_0(VAR_2, VAR_3);

 VAR_9 = FUNC_7(VAR_3);

 FUNC_14(&VAR_2->map_lock, VAR_8);
 VAR_5 = VAR_2->map;
 VAR_2->map = VAR_3;
 VAR_2->immutable_target_type = FUNC_5(VAR_3);

 FUNC_9(VAR_3, VAR_6, VAR_4);
 if (VAR_9)
  FUNC_12(VAR_0, &VAR_2->flags);
 else
  FUNC_3(VAR_0, &VAR_2->flags);
 FUNC_15(&VAR_2->map_lock, VAR_8);

 return VAR_5;
}
