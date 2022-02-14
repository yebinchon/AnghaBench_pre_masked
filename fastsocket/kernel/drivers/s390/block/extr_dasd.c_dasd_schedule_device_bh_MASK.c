
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int tasklet; int tasklet_scheduled; } ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dasd_device *VAR_0)
{

 if (FUNC_0 (&VAR_0->tasklet_scheduled, 0, 1) != 0)
  return;
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->tasklet);
}
