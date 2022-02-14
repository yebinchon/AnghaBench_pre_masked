
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int state; scalar_t__ regs; int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct s3c24xx_i2c*) ;
 int FUNC_3 (struct s3c24xx_i2c*,int) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct s3c24xx_i2c *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_3->regs + VAR_0);

 FUNC_0(VAR_3->dev, "STOP\n");


 VAR_5 &= ~VAR_1;
 FUNC_4(VAR_5, VAR_3->regs + VAR_0);

 VAR_3->state = VAR_2;

 FUNC_3(VAR_3, VAR_4);
 FUNC_2(VAR_3);
}
