
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct w1_slave {TYPE_2__ dev; } ;
struct TYPE_3__ {TYPE_2__* parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct platform_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct platform_device*) ;
 struct platform_device* FUNC_3 (char*,int) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct w1_slave *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct platform_device *VAR_5;

 VAR_4 = FUNC_1();
 if (VAR_4 < 0) {
  VAR_3 = VAR_4;
  goto noid;
 }

 VAR_5 = FUNC_3("ds2760-battery", VAR_4);
 if (!VAR_5) {
  VAR_3 = -VAR_0;
  goto pdev_alloc_failed;
 }
 VAR_5->dev.parent = &VAR_2->dev;

 VAR_3 = FUNC_2(VAR_5);
 if (VAR_3)
  goto pdev_add_failed;

 VAR_3 = FUNC_6(&VAR_2->dev.kobj, &VAR_1);
 if (VAR_3)
  goto bin_attr_failed;

 FUNC_0(&VAR_2->dev, VAR_5);

 goto success;

bin_attr_failed:
pdev_add_failed:
 FUNC_4(VAR_5);
pdev_alloc_failed:
 FUNC_5(VAR_4);
noid:
success:
 return VAR_3;
}
