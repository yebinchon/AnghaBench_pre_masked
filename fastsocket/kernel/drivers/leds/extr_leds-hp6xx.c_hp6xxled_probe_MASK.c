
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_0);
 if (VAR_3 < 0)
  FUNC_1(&VAR_1);

 return VAR_3;
}
