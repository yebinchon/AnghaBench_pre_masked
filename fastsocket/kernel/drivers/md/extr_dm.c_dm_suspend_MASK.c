
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int suspend_lock; int flags; int queue; int io_lock; int wq; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 struct dm_table* FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 scalar_t__ FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct dm_table*) ;
 int FUNC_6 (struct dm_table*) ;
 int FUNC_7 (struct dm_table*) ;
 int FUNC_8 (struct mapped_device*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct mapped_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct mapped_device*) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct mapped_device *VAR_7, unsigned VAR_8)
{
 struct dm_table *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 int VAR_11 = VAR_8 & VAR_3 ? 1 : 0;
 int VAR_12 = VAR_8 & VAR_4 ? 1 : 0;

 FUNC_12(&VAR_7->suspend_lock);

 if (FUNC_4(VAR_7)) {
  VAR_10 = -VAR_5;
  goto out_unlock;
 }

 VAR_9 = FUNC_1(VAR_7);





 if (VAR_12)
  FUNC_14(VAR_1, &VAR_7->flags);


 FUNC_6(VAR_9);







 if (!VAR_12 && VAR_11) {
  VAR_10 = FUNC_11(VAR_7);
  if (VAR_10)
   goto out;
 }
 FUNC_9(&VAR_7->io_lock);
 FUNC_14(VAR_0, &VAR_7->flags);
 FUNC_18(&VAR_7->io_lock);





 if (FUNC_3(VAR_7))
  FUNC_16(VAR_7->queue);

 FUNC_10(VAR_7->wq);






 VAR_10 = FUNC_8(VAR_7, VAR_6);

 FUNC_9(&VAR_7->io_lock);
 if (VAR_12)
  FUNC_0(VAR_1, &VAR_7->flags);
 FUNC_18(&VAR_7->io_lock);


 if (VAR_10 < 0) {
  FUNC_2(VAR_7);

  if (FUNC_3(VAR_7))
   FUNC_15(VAR_7->queue);

  FUNC_17(VAR_7);
  goto out;
 }







 FUNC_14(VAR_2, &VAR_7->flags);

 FUNC_5(VAR_9);

out:
 FUNC_7(VAR_9);

out_unlock:
 FUNC_13(&VAR_7->suspend_lock);
 return VAR_10;
}
