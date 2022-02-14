
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dio_dev {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,int *) ;

int FUNC_1(struct dio_dev *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 int VAR_7;


 if ((VAR_7 = FUNC_0(VAR_6, &VAR_0)) ||
     (VAR_7 = FUNC_0(VAR_6, &VAR_1)) ||
     (VAR_7 = FUNC_0(VAR_6, &VAR_4)) ||
     (VAR_7 = FUNC_0(VAR_6, &VAR_2)) ||
     (VAR_7 = FUNC_0(VAR_6, &VAR_3)))
  return VAR_7;

 return 0;
}
