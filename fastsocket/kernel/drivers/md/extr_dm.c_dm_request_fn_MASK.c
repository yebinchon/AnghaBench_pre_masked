
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int queue_lock; struct mapped_device* queuedata; } ;
struct request {int cmd_flags; } ;
struct mapped_device {int dummy; } ;
struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ (* busy ) (struct dm_target*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct request* FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 scalar_t__ FUNC_6 (struct request*) ;
 struct dm_table* FUNC_7 (struct mapped_device*) ;
 int FUNC_8 (struct request*,int ) ;
 struct request* FUNC_9 (struct mapped_device*,struct request*) ;
 struct dm_target* FUNC_10 (struct dm_table*,scalar_t__) ;
 int FUNC_11 (struct dm_table*) ;
 int FUNC_12 (struct dm_target*) ;
 int FUNC_13 (struct request_queue*) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (struct dm_target*,struct request*,struct mapped_device*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (struct dm_target*) ;

__attribute__((used)) static void FUNC_19(struct request_queue *VAR_2)
{
 struct mapped_device *VAR_3 = VAR_2->queuedata;
 struct dm_table *VAR_4 = FUNC_7(VAR_3);
 struct dm_target *VAR_5;
 struct request *VAR_6, *VAR_7;
 sector_t VAR_8;







 while (!FUNC_4(VAR_2) && !FUNC_5(VAR_2)) {
  VAR_6 = FUNC_2(VAR_2);
  if (!VAR_6)
   goto plug_and_out;


  VAR_8 = 0;
  if (!(VAR_6->cmd_flags & VAR_1))
   VAR_8 = FUNC_6(VAR_6);

  VAR_5 = FUNC_10(VAR_4, VAR_8);
  if (!FUNC_12(VAR_5)) {




   FUNC_1("request attempted access beyond the end of device");
   VAR_7 = FUNC_9(VAR_3, VAR_6);
   FUNC_8(VAR_7, -VAR_0);
   continue;
  }

  if (VAR_5->type->busy && VAR_5->type->busy(VAR_5))
   goto plug_and_out;

  VAR_7 = FUNC_9(VAR_3, VAR_6);

  FUNC_17(VAR_2->queue_lock);
  if (FUNC_15(VAR_5, VAR_7, VAR_3))
   goto requeued;

  FUNC_0(!FUNC_14());
  FUNC_16(VAR_2->queue_lock);
 }

 goto out;

requeued:
 FUNC_0(!FUNC_14());
 FUNC_16(VAR_2->queue_lock);

plug_and_out:
 if (!FUNC_13(VAR_2))

  FUNC_3(VAR_2);

out:
 FUNC_11(VAR_4);
}
