
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct i2c_adapter {int retries; int nr; int name; TYPE_1__ dev; int * algo; int owner; } ;
struct sh_mobile_i2c_data {int clk; int * reg; int wait; int lock; struct i2c_adapter adap; int * dev; } ;
struct resource {int start; } ;
struct platform_device {int id; int dev; int name; } ;
typedef int clk_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (struct i2c_adapter*,struct sh_mobile_i2c_data*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sh_mobile_i2c_data*) ;
 struct sh_mobile_i2c_data* FUNC_11 (int,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct sh_mobile_i2c_data*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (struct resource*) ;
 int VAR_6 ;
 int FUNC_17 (struct platform_device*,int) ;
 int FUNC_18 (char*,int,char*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ,int) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_7)
{
 struct sh_mobile_i2c_data *VAR_8;
 struct i2c_adapter *VAR_9;
 struct resource *VAR_10;
 char VAR_11[8];
 int VAR_12;
 int VAR_13;

 VAR_8 = FUNC_11(sizeof(struct sh_mobile_i2c_data), VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(&VAR_7->dev, "cannot allocate private data\n");
  return -VAR_1;
 }

 FUNC_18(VAR_11, sizeof(VAR_11), "i2c%d", VAR_7->id);
 VAR_8->clk = FUNC_2(&VAR_7->dev, VAR_11);
 if (FUNC_0(VAR_8->clk)) {
  FUNC_4(&VAR_7->dev, "cannot get clock \"%s\"\n", VAR_11);
  VAR_13 = FUNC_1(VAR_8->clk);
  goto err;
 }

 VAR_13 = FUNC_17(VAR_7, 1);
 if (VAR_13) {
  FUNC_4(&VAR_7->dev, "cannot request IRQ\n");
  goto err_clk;
 }

 VAR_8->dev = &VAR_7->dev;
 FUNC_13(VAR_7, VAR_8);

 VAR_10 = FUNC_12(VAR_7, VAR_4, 0);
 if (VAR_10 == ((void*)0)) {
  FUNC_4(&VAR_7->dev, "cannot find IO resource\n");
  VAR_13 = -VAR_0;
  goto err_irq;
 }

 VAR_12 = FUNC_16(VAR_10);

 VAR_8->reg = FUNC_8(VAR_10->start, VAR_12);
 if (VAR_8->reg == ((void*)0)) {
  FUNC_4(&VAR_7->dev, "cannot map IO\n");
  VAR_13 = -VAR_2;
  goto err_irq;
 }
 FUNC_15(&VAR_7->dev, 1);
 FUNC_14(&VAR_7->dev);


 VAR_9 = &VAR_8->adap;
 FUNC_6(VAR_9, VAR_8);

 VAR_9->owner = VAR_5;
 VAR_9->algo = &VAR_6;
 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->retries = 5;
 VAR_9->nr = VAR_7->id;

 FUNC_20(VAR_9->name, VAR_7->name, sizeof(VAR_9->name));

 FUNC_19(&VAR_8->lock);
 FUNC_7(&VAR_8->wait);

 VAR_13 = FUNC_5(VAR_9);
 if (VAR_13 < 0) {
  FUNC_4(&VAR_7->dev, "cannot add numbered adapter\n");
  goto err_all;
 }

 return 0;

 err_all:
 FUNC_9(VAR_8->reg);
 err_irq:
 FUNC_17(VAR_7, 0);
 err_clk:
 FUNC_3(VAR_8->clk);
 err:
 FUNC_10(VAR_8);
 return VAR_13;
}
