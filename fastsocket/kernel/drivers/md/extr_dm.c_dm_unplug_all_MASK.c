
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mapped_device* queuedata; } ;
struct mapped_device {int dummy; } ;
struct dm_table {int dummy; } ;


 struct dm_table* FUNC_0 (struct mapped_device*) ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct dm_table*) ;
 int FUNC_3 (struct dm_table*) ;
 int FUNC_4 (struct request_queue*) ;

__attribute__((used)) static void FUNC_5(struct request_queue *VAR_0)
{
 struct mapped_device *VAR_1 = VAR_0->queuedata;
 struct dm_table *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2) {
  if (FUNC_1(VAR_1))
   FUNC_4(VAR_0);

  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
 }
}
