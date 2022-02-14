
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mspro_block_data {int eject; int disk; int attr_group; int * queue; int q_lock; } ;
struct TYPE_2__ {int kobj; } ;
struct memstick_dev {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct mspro_block_data* FUNC_4 (struct memstick_dev*) ;
 int FUNC_5 (struct memstick_dev*,int *) ;
 int FUNC_6 (struct mspro_block_data*) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static void FUNC_13(struct memstick_dev *VAR_1)
{
 struct mspro_block_data *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;

 FUNC_2(VAR_2->disk);
 FUNC_3(&VAR_1->dev, "mspro block remove\n");
 FUNC_10(&VAR_2->q_lock, VAR_3);
 VAR_2->eject = 1;
 FUNC_1(VAR_2->queue);
 FUNC_11(&VAR_2->q_lock, VAR_3);

 FUNC_0(VAR_2->queue);
 VAR_2->queue = ((void*)0);

 FUNC_12(&VAR_1->dev.kobj, &VAR_2->attr_group);

 FUNC_8(&VAR_0);
 FUNC_6(VAR_2);
 FUNC_9(&VAR_0);

 FUNC_7(VAR_2->disk);
 FUNC_5(VAR_1, ((void*)0));
}
