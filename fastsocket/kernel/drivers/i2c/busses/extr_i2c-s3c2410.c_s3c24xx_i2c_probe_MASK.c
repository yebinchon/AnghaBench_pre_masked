
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* parent; struct s3c2410_platform_i2c* platform_data; } ;
struct TYPE_7__ {int retries; int class; TYPE_2__ dev; int nr; struct s3c24xx_i2c* algo_data; int * algo; int owner; int name; } ;
struct s3c24xx_i2c {int tx_setup; int irq; int clk; struct s3c24xx_i2c* ioarea; int * regs; TYPE_1__ adap; TYPE_2__* dev; int wait; int lock; } ;
struct s3c2410_platform_i2c {int bus_num; } ;
struct resource {int start; } ;
struct platform_device {TYPE_2__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,int *,...) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int,struct s3c24xx_i2c*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct s3c24xx_i2c*) ;
 struct s3c24xx_i2c* FUNC_15 (int,int ) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct s3c24xx_i2c*) ;
 int FUNC_19 (struct s3c24xx_i2c*) ;
 int FUNC_20 (int,int ,int ,int ,struct s3c24xx_i2c*) ;
 struct s3c24xx_i2c* FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (struct resource*) ;
 int VAR_10 ;
 int FUNC_23 (struct s3c24xx_i2c*) ;
 int FUNC_24 (struct s3c24xx_i2c*) ;
 int VAR_11 ;
 int FUNC_25 (struct s3c24xx_i2c*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ,char*,int) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_12)
{
 struct s3c24xx_i2c *VAR_13;
 struct s3c2410_platform_i2c *VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 VAR_14 = VAR_12->dev.platform_data;
 if (!VAR_14) {
  FUNC_6(&VAR_12->dev, "no platform data\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_15(sizeof(struct s3c24xx_i2c), VAR_4);
 if (!VAR_13) {
  FUNC_6(&VAR_12->dev, "no memory for state\n");
  return -VAR_2;
 }

 FUNC_27(VAR_13->adap.name, "s3c2410-i2c", sizeof(VAR_13->adap.name));
 VAR_13->adap.owner = VAR_9;
 VAR_13->adap.algo = &VAR_10;
 VAR_13->adap.retries = 2;
 VAR_13->adap.class = VAR_5 | VAR_6;
 VAR_13->tx_setup = 50;

 FUNC_26(&VAR_13->lock);
 FUNC_11(&VAR_13->wait);



 VAR_13->dev = &VAR_12->dev;
 VAR_13->clk = FUNC_3(&VAR_12->dev, "i2c");
 if (FUNC_0(VAR_13->clk)) {
  FUNC_6(&VAR_12->dev, "cannot get clock\n");
  VAR_16 = -VAR_1;
  goto err_noclk;
 }

 FUNC_5(&VAR_12->dev, "clock source %p\n", &VAR_13->clk);

 FUNC_2(VAR_13->clk);



 VAR_15 = FUNC_17(VAR_12, VAR_7, 0);
 if (VAR_15 == ((void*)0)) {
  FUNC_6(&VAR_12->dev, "cannot find IO resource\n");
  VAR_16 = -VAR_1;
  goto err_clk;
 }

 VAR_13->ioarea = FUNC_21(VAR_15->start, FUNC_22(VAR_15),
      VAR_12->name);

 if (VAR_13->ioarea == ((void*)0)) {
  FUNC_6(&VAR_12->dev, "cannot request IO\n");
  VAR_16 = -VAR_3;
  goto err_clk;
 }

 VAR_13->regs = FUNC_12(VAR_15->start, FUNC_22(VAR_15));

 if (VAR_13->regs == ((void*)0)) {
  FUNC_6(&VAR_12->dev, "cannot map IO\n");
  VAR_16 = -VAR_3;
  goto err_ioarea;
 }

 FUNC_5(&VAR_12->dev, "registers %p (%p, %p)\n",
  VAR_13->regs, VAR_13->ioarea, VAR_15);



 VAR_13->adap.algo_data = VAR_13;
 VAR_13->adap.dev.parent = &VAR_12->dev;



 VAR_16 = FUNC_24(VAR_13);
 if (VAR_16 != 0)
  goto err_iomap;





 VAR_13->irq = VAR_16 = FUNC_16(VAR_12, 0);
 if (VAR_16 <= 0) {
  FUNC_6(&VAR_12->dev, "cannot find IRQ\n");
  goto err_iomap;
 }

 VAR_16 = FUNC_20(VAR_13->irq, VAR_11, VAR_8,
     FUNC_8(&VAR_12->dev), VAR_13);

 if (VAR_16 != 0) {
  FUNC_6(&VAR_12->dev, "cannot claim IRQ %d\n", VAR_13->irq);
  goto err_iomap;
 }

 VAR_16 = FUNC_25(VAR_13);
 if (VAR_16 < 0) {
  FUNC_6(&VAR_12->dev, "failed to register cpufreq notifier\n");
  goto err_irq;
 }







 VAR_13->adap.nr = VAR_14->bus_num;

 VAR_16 = FUNC_10(&VAR_13->adap);
 if (VAR_16 < 0) {
  FUNC_6(&VAR_12->dev, "failed to add bus to i2c core\n");
  goto err_cpufreq;
 }

 FUNC_18(VAR_12, VAR_13);

 FUNC_7(&VAR_12->dev, "%s: S3C I2C adapter\n", FUNC_8(&VAR_13->adap.dev));
 return 0;

 err_cpufreq:
 FUNC_23(VAR_13);

 err_irq:
 FUNC_9(VAR_13->irq, VAR_13);

 err_iomap:
 FUNC_13(VAR_13->regs);

 err_ioarea:
 FUNC_19(VAR_13->ioarea);
 FUNC_14(VAR_13->ioarea);

 err_clk:
 FUNC_1(VAR_13->clk);
 FUNC_4(VAR_13->clk);

 err_noclk:
 FUNC_14(VAR_13);
 return VAR_16;
}
