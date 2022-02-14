
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct s3c24xx_i2c {TYPE_1__* dev; scalar_t__ regs; } ;
struct s3c2410_platform_i2c {unsigned int slave_addr; int (* cfg_gpio ) (int ) ;} ;
struct TYPE_5__ {struct s3c2410_platform_i2c* platform_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,unsigned long) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,unsigned int) ;
 scalar_t__ FUNC_3 (struct s3c24xx_i2c*,unsigned int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct s3c24xx_i2c *VAR_5)
{
 unsigned long VAR_6 = VAR_4 | VAR_3;
 struct s3c2410_platform_i2c *VAR_7;
 unsigned int VAR_8;



 VAR_7 = VAR_5->dev->platform_data;



 if (VAR_7->cfg_gpio)
  VAR_7->cfg_gpio(FUNC_5(VAR_5->dev));



 FUNC_6(VAR_7->slave_addr, VAR_5->regs + VAR_1);

 FUNC_2(VAR_5->dev, "slave address 0x%02x\n", VAR_7->slave_addr);

 FUNC_7(VAR_6, VAR_5->regs + VAR_2);



 if (FUNC_3(VAR_5, &VAR_8) != 0) {
  FUNC_7(0, VAR_5->regs + VAR_2);
  FUNC_1(VAR_5->dev, "cannot meet bus frequency required\n");
  return -VAR_0;
 }



 FUNC_2(VAR_5->dev, "bus frequency set to %d KHz\n", VAR_8);
 FUNC_0(VAR_5->dev, "S3C2410_IICCON=0x%02lx\n", VAR_6);

 return 0;
}
