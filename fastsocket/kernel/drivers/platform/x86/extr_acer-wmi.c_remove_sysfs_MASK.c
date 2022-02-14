
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 if (FUNC_1(VAR_0))
  FUNC_0(&VAR_3->dev, &VAR_2);

 FUNC_0(&VAR_3->dev, &VAR_1);

 return 0;
}
