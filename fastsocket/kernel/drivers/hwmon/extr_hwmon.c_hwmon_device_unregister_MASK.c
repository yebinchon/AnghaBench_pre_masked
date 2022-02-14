
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int*) ;

void FUNC_8(struct device *VAR_3)
{
 int VAR_4;

 if (FUNC_4(FUNC_7(FUNC_1(VAR_3), VAR_0, &VAR_4) == 1)) {
  FUNC_2(VAR_3);
  FUNC_5(&VAR_2);
  FUNC_3(&VAR_1, VAR_4);
  FUNC_6(&VAR_2);
 } else
  FUNC_0(VAR_3->parent,
   "hwmon_device_unregister() failed: bad class ID!\n");
}
