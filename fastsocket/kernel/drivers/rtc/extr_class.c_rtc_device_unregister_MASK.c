
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dev; int ops_lock; int * ops; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rtc_device*) ;
 int FUNC_6 (struct rtc_device*) ;
 int FUNC_7 (struct rtc_device*) ;

void FUNC_8(struct rtc_device *VAR_0)
{
 if (FUNC_1(&VAR_0->dev) != ((void*)0)) {
  FUNC_2(&VAR_0->ops_lock);



  FUNC_7(VAR_0);
  FUNC_5(VAR_0);
  FUNC_6(VAR_0);
  FUNC_0(&VAR_0->dev);
  VAR_0->ops = ((void*)0);
  FUNC_3(&VAR_0->ops_lock);
  FUNC_4(&VAR_0->dev);
 }
}
