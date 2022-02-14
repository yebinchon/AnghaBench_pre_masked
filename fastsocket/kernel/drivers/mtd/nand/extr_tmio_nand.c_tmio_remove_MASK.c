
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_nand {int ccr; int fcr; scalar_t__ irq; int mtd; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__,struct tmio_nand*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tmio_nand*) ;
 int FUNC_3 (int *) ;
 struct tmio_nand* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct tmio_nand*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct tmio_nand *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(&VAR_1->mtd);
 if (VAR_1->irq)
  FUNC_0(VAR_1->irq, VAR_1);
 FUNC_5(VAR_0, VAR_1);
 FUNC_1(VAR_1->fcr);
 FUNC_1(VAR_1->ccr);
 FUNC_2(VAR_1);
 return 0;
}
