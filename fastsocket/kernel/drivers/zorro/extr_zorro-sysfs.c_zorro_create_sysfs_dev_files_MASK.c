
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct zorro_dev {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_6 ;

int FUNC_2(struct zorro_dev *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 int VAR_9;


 if ((VAR_9 = FUNC_0(VAR_8, &VAR_0)) ||
     (VAR_9 = FUNC_0(VAR_8, &VAR_5)) ||
     (VAR_9 = FUNC_0(VAR_8, &VAR_2)) ||
     (VAR_9 = FUNC_0(VAR_8, &VAR_3)) ||
     (VAR_9 = FUNC_0(VAR_8, &VAR_4)) ||
     (VAR_9 = FUNC_0(VAR_8, &VAR_1)) ||
     (VAR_9 = FUNC_1(&VAR_8->kobj, &VAR_6)))
  return VAR_9;

 return 0;
}
