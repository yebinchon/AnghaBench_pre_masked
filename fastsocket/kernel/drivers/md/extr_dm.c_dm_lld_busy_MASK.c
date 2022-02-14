
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mapped_device* queuedata; } ;
struct mapped_device {int flags; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 struct dm_table* FUNC_0 (struct mapped_device*) ;
 int FUNC_1 (struct dm_table*) ;
 int FUNC_2 (struct dm_table*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct request_queue *VAR_1)
{
 int VAR_2;
 struct mapped_device *VAR_3 = VAR_1->queuedata;
 struct dm_table *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4 || FUNC_3(VAR_0, &VAR_3->flags))
  VAR_2 = 1;
 else
  VAR_2 = FUNC_1(VAR_4);

 FUNC_2(VAR_4);

 return VAR_2;
}
