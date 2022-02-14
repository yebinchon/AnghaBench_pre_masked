
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ccwgroup_driver {int driver; } ;
struct ccwgroup_device {int reg_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccwgroup_device*) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 int FUNC_2 (struct device*) ;
 struct device* FUNC_3 (int *,int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;
 struct ccwgroup_device* FUNC_10 (struct device*) ;

void FUNC_11(struct ccwgroup_driver *VAR_1)
{
 struct device *VAR_2;


 FUNC_5(&VAR_1->driver);
 while ((VAR_2 = FUNC_3(&VAR_1->driver, ((void*)0), ((void*)0),
      VAR_0))) {
  struct ccwgroup_device *VAR_3 = FUNC_10(VAR_2);

  FUNC_6(&VAR_3->reg_mutex);
  FUNC_1(VAR_3);
  FUNC_2(VAR_2);
  FUNC_0(VAR_3);
  FUNC_7(&VAR_3->reg_mutex);
  FUNC_8(VAR_2);
 }
 FUNC_9(&VAR_1->driver);
 FUNC_4(&VAR_1->driver);
}
