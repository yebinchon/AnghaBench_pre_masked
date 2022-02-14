
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct s3c24xx_i2c *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 400;

 while (VAR_5-- > 0) {
  VAR_4 = FUNC_1(VAR_3->regs + VAR_1);

  if (!(VAR_4 & VAR_2))
   return 0;

  FUNC_0(1);
 }

 return -VAR_0;
}
