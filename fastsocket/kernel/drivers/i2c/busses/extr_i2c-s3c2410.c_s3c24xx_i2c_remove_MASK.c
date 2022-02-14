
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {struct s3c24xx_i2c* ioarea; int regs; int clk; int irq; int adap; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct s3c24xx_i2c*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct s3c24xx_i2c*) ;
 struct s3c24xx_i2c* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct s3c24xx_i2c*) ;
 int FUNC_8 (struct s3c24xx_i2c*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct s3c24xx_i2c *VAR_1 = FUNC_6(VAR_0);

 FUNC_8(VAR_1);

 FUNC_3(&VAR_1->adap);
 FUNC_2(VAR_1->irq, VAR_1);

 FUNC_0(VAR_1->clk);
 FUNC_1(VAR_1->clk);

 FUNC_4(VAR_1->regs);

 FUNC_7(VAR_1->ioarea);
 FUNC_5(VAR_1->ioarea);
 FUNC_5(VAR_1);

 return 0;
}
