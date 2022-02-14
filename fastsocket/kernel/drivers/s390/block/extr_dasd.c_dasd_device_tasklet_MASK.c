
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dasd_device {int cdev; int tasklet_scheduled; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*,struct list_head*) ;
 int FUNC_4 (struct dasd_device*,struct list_head*) ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct dasd_device*) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct dasd_device *VAR_1)
{
 struct list_head VAR_2;

 FUNC_6 (&VAR_1->tasklet_scheduled, 0);
 FUNC_0(&VAR_2);
 FUNC_9(FUNC_8(VAR_1->cdev));

 FUNC_1(VAR_1);

 FUNC_3(VAR_1, &VAR_2);
 FUNC_2(VAR_1);
 FUNC_10(FUNC_8(VAR_1->cdev));

 FUNC_4(VAR_1, &VAR_2);
 FUNC_9(FUNC_8(VAR_1->cdev));

 FUNC_5(VAR_1);
 FUNC_10(FUNC_8(VAR_1->cdev));
 if (FUNC_11(&VAR_0))
  FUNC_12(&VAR_0);
 FUNC_7(VAR_1);
}
