
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {scalar_t__ regs; int dev; int tx_setup; } ;
struct i2c_msg {int addr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (int ,char*,unsigned long,...) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct s3c24xx_i2c*) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct s3c24xx_i2c *VAR_9,
          struct i2c_msg *VAR_10)
{
 unsigned int VAR_11 = (VAR_10->addr & 0x7f) << 1;
 unsigned long VAR_12;
 unsigned long VAR_13;

 VAR_12 = 0;
 VAR_12 |= VAR_8;

 if (VAR_10->flags & VAR_0) {
  VAR_12 |= VAR_5;
  VAR_11 |= 1;
 } else
  VAR_12 |= VAR_6;

 if (VAR_10->flags & VAR_1)
  VAR_11 ^= 1;


 FUNC_3(VAR_9);

 VAR_13 = FUNC_2(VAR_9->regs + VAR_2);
 FUNC_5(VAR_12, VAR_9->regs + VAR_4);

 FUNC_0(VAR_9->dev, "START: %08lx to IICSTAT, %02x to DS\n", VAR_12, VAR_11);
 FUNC_4(VAR_11, VAR_9->regs + VAR_3);




 FUNC_1(VAR_9->tx_setup);

 FUNC_0(VAR_9->dev, "iiccon, %08lx\n", VAR_13);
 FUNC_5(VAR_13, VAR_9->regs + VAR_2);

 VAR_12 |= VAR_7;
 FUNC_5(VAR_12, VAR_9->regs + VAR_4);
}
