
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_0, pm_message_t VAR_1)
{
 FUNC_0(&VAR_0->dev, "suspend not implemented\n");
 return 0;
}
