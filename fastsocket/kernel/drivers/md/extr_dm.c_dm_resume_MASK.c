
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int suspend_lock; int flags; int queue; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct dm_table* FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct dm_table*) ;
 int FUNC_6 (struct dm_table*) ;
 int FUNC_7 (struct dm_table*) ;
 int FUNC_8 (struct dm_table*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mapped_device*) ;

int FUNC_13(struct mapped_device *VAR_2)
{
 int VAR_3 = -VAR_1;
 struct dm_table *VAR_4 = ((void*)0);

 FUNC_9(&VAR_2->suspend_lock);
 if (!FUNC_4(VAR_2))
  goto out;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4 || !FUNC_5(VAR_4))
  goto out;

 VAR_3 = FUNC_7(VAR_4);
 if (VAR_3)
  goto out;

 FUNC_2(VAR_2);






 if (FUNC_3(VAR_2))
  FUNC_11(VAR_2->queue);

 FUNC_12(VAR_2);

 FUNC_0(VAR_0, &VAR_2->flags);

 FUNC_8(VAR_4);
 VAR_3 = 0;
out:
 FUNC_6(VAR_4);
 FUNC_10(&VAR_2->suspend_lock);

 return VAR_3;
}
