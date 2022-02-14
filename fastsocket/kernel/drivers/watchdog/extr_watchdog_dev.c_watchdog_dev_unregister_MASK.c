
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {scalar_t__ id; int cdev; int lock; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;

int FUNC_5(struct watchdog_device *VAR_3)
{
 FUNC_2(&VAR_3->lock);
 FUNC_4(VAR_0, &VAR_3->status);
 FUNC_3(&VAR_3->lock);

 FUNC_0(&VAR_3->cdev);
 if (VAR_3->id == 0) {
  FUNC_1(&VAR_2);
  VAR_1 = ((void*)0);
 }
 return 0;
}
