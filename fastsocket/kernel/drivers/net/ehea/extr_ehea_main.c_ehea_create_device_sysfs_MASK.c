
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct of_device *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_2->dev, &VAR_0);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_1);
out:
 return VAR_3;
}
