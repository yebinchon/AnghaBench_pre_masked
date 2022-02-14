
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (char*,int) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct w1_slave *VAR_1)
{
 int VAR_2;
 int VAR_3 = 1;
 struct platform_device *VAR_4;

 VAR_4 = FUNC_2("bq27000-battery", VAR_3);
 if (!VAR_4) {
  VAR_2 = -VAR_0;
  return VAR_2;
 }
 VAR_4->dev.parent = &VAR_1->dev;

 VAR_2 = FUNC_1(VAR_4);
 if (VAR_2)
  goto pdev_add_failed;

 FUNC_0(&VAR_1->dev, VAR_4);

 goto success;

pdev_add_failed:
 FUNC_3(VAR_4);
success:
 return VAR_2;
}
