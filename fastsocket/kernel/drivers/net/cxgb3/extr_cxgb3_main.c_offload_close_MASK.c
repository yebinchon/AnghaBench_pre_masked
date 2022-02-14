
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t3cdev {TYPE_2__* lldev; } ;
struct t3c_data {int tid_release_lock; int tid_release_task; } ;
struct adapter {int open_device_map; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct t3c_data* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct t3cdev*) ;
 int FUNC_5 (struct t3cdev*) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct adapter*,int ) ;
 struct adapter* FUNC_12 (struct t3cdev*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct t3cdev *VAR_2)
{
 struct adapter *VAR_3 = FUNC_12(VAR_2);
 struct t3c_data *VAR_4 = FUNC_0(VAR_2);

 if (!FUNC_13(VAR_0, &VAR_3->open_device_map))
  return 0;


 FUNC_4(VAR_2);

 FUNC_10(&VAR_2->lldev->dev.kobj, &VAR_1);


 FUNC_8(&VAR_4->tid_release_lock);
 FUNC_7(&VAR_4->tid_release_task);
 FUNC_1(&VAR_4->tid_release_task);
 FUNC_9(&VAR_4->tid_release_lock);

 VAR_2->lldev = ((void*)0);
 FUNC_5(VAR_2);
 FUNC_11(VAR_3, 0);
 FUNC_2(VAR_0, &VAR_3->open_device_map);

 if (!VAR_3->open_device_map)
  FUNC_6(VAR_3, 0);

 FUNC_3(VAR_3);
 return 0;
}
