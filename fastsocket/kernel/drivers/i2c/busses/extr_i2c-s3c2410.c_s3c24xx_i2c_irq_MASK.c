
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {scalar_t__ state; scalar_t__ regs; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct s3c24xx_i2c*,unsigned long) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct s3c24xx_i2c *VAR_8 = VAR_7;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_3(VAR_8->regs + VAR_3);

 if (VAR_9 & VAR_4) {

  FUNC_1(VAR_8->dev, "deal with arbitration loss\n");
 }

 if (VAR_8->state == VAR_5) {
  FUNC_0(VAR_8->dev, "IRQ: error i2c->state == IDLE\n");

  VAR_10 = FUNC_3(VAR_8->regs + VAR_1);
  VAR_10 &= ~VAR_2;
  FUNC_4(VAR_10, VAR_8->regs + VAR_1);
  goto out;
 }




 FUNC_2(VAR_8, VAR_9);

 out:
 return VAR_0;
}
