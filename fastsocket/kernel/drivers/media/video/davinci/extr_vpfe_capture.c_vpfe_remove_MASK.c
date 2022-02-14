
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {int ccdc_addr; int video_dev; int v4l2_dev; struct vpfe_device* sd; int ccdc_irq0; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_2__ {int driver; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct vpfe_device* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct vpfe_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vpfe_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vpfe_device* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vpfe_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 struct vpfe_device *VAR_4 = FUNC_5(VAR_3);
 struct resource *VAR_5;

 FUNC_9(VAR_3->dev.driver, "vpfe_remove\n");

 FUNC_0(VAR_4->ccdc_irq0, VAR_4);
 FUNC_2(VAR_4->sd);
 FUNC_8(&VAR_4->v4l2_dev);
 FUNC_10(VAR_4->video_dev);
 FUNC_3(&VAR_2);
 VAR_5 = FUNC_6(VAR_3, VAR_0, 0);
 FUNC_7(VAR_5->start, VAR_5->end - VAR_5->start + 1);
 FUNC_1(VAR_1->ccdc_addr);
 FUNC_4(&VAR_2);
 FUNC_11(VAR_4);
 FUNC_2(VAR_4);
 FUNC_2(VAR_1);
 return 0;
}
