
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pdrv_genirq_platdata {int uioinfo; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (struct uio_pdrv_genirq_platdata*) ;
 struct uio_pdrv_genirq_platdata* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct uio_pdrv_genirq_platdata *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->uioinfo);
 FUNC_2(&VAR_0->dev);
 FUNC_0(VAR_1);
 return 0;
}
