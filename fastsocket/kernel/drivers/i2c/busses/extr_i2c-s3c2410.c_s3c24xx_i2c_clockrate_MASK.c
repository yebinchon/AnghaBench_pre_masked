
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct s3c24xx_i2c {unsigned long clkrate; scalar_t__ regs; TYPE_1__* dev; int clk; } ;
struct s3c2410_platform_i2c {unsigned long frequency; int sda_delay; } ;
struct TYPE_3__ {struct s3c2410_platform_i2c* platform_data; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,unsigned long) ;
 int FUNC_3 (TYPE_1__*,char*,unsigned long,int) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned long,unsigned long,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_6 (struct s3c24xx_i2c*) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct s3c24xx_i2c *VAR_6, unsigned int *VAR_7)
{
 struct s3c2410_platform_i2c *VAR_8 = VAR_6->dev->platform_data;
 unsigned long VAR_9 = FUNC_1(VAR_6->clk);
 unsigned int VAR_10, VAR_11;
 unsigned long VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_6->clkrate = VAR_9;
 VAR_9 /= 1000;

 FUNC_2(VAR_6->dev, "pdata desired frequency %lu\n", VAR_8->frequency);

 VAR_12 = VAR_8->frequency ? VAR_8->frequency : 100000;

 VAR_12 /= 1000;

 VAR_14 = FUNC_5(VAR_9, VAR_12, &VAR_11, &VAR_10);

 if (VAR_14 > VAR_12) {
  FUNC_3(VAR_6->dev,
   "Unable to achieve desired frequency %luKHz." " Lowest achievable %dKHz\n", VAR_12, VAR_14);

  return -VAR_0;
 }

 *VAR_7 = VAR_14;

 VAR_13 = FUNC_4(VAR_6->regs + VAR_1);
 VAR_13 &= ~(VAR_2 | VAR_3);
 VAR_13 |= (VAR_10-1);

 if (VAR_11 == 512)
  VAR_13 |= VAR_3;

 FUNC_7(VAR_13, VAR_6->regs + VAR_1);

 if (FUNC_6(VAR_6)) {
  unsigned long VAR_15;

  if (VAR_8->sda_delay) {
   VAR_15 = (VAR_14 / 1000) * VAR_8->sda_delay;
   VAR_15 /= 1000000;
   VAR_15 = FUNC_0(VAR_15, 5);
   if (VAR_15 > 3)
    VAR_15 = 3;
   VAR_15 |= VAR_4;
  } else
   VAR_15 = 0;

  FUNC_2(VAR_6->dev, "IICLC=%08lx\n", VAR_15);
  FUNC_7(VAR_15, VAR_6->regs + VAR_5);
 }

 return 0;
}
