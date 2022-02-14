
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {int name; TYPE_1__ dev; TYPE_2__* algo_data; int owner; } ;
struct TYPE_5__ {int udelay; int timeout; int getscl; int getsda; int setscl; int setsda; struct simtec_i2c_data* data; } ;
struct simtec_i2c_data {struct simtec_i2c_data* ioarea; int * reg; TYPE_3__ adap; TYPE_2__ bit; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct simtec_i2c_data*) ;
 struct simtec_i2c_data* FUNC_5 (int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct simtec_i2c_data*) ;
 int FUNC_8 (struct simtec_i2c_data*) ;
 struct simtec_i2c_data* FUNC_9 (int ,int,int ) ;
 int FUNC_10 (struct resource*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 struct simtec_i2c_data *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_5(sizeof(struct simtec_i2c_data), VAR_3);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(&VAR_11->dev, "cannot allocate private data\n");
  return -VAR_1;
 }

 FUNC_7(VAR_11, VAR_12);

 VAR_13 = FUNC_6(VAR_11, VAR_5, 0);
 if (VAR_13 == ((void*)0)) {
  FUNC_0(&VAR_11->dev, "cannot find IO resource\n");
  VAR_15 = -VAR_0;
  goto err;
 }

 VAR_14 = FUNC_10(VAR_13);

 VAR_12->ioarea = FUNC_9(VAR_13->start, VAR_14, VAR_11->name);
 if (VAR_12->ioarea == ((void*)0)) {
  FUNC_0(&VAR_11->dev, "cannot request IO\n");
  VAR_15 = -VAR_2;
  goto err;
 }

 VAR_12->reg = FUNC_2(VAR_13->start, VAR_14);
 if (VAR_12->reg == ((void*)0)) {
  FUNC_0(&VAR_11->dev, "cannot map IO\n");
  VAR_15 = -VAR_2;
  goto err_res;
 }



 VAR_12->adap.owner = VAR_6;
 VAR_12->adap.algo_data = &VAR_12->bit;
 VAR_12->adap.dev.parent = &VAR_11->dev;

 FUNC_11(VAR_12->adap.name, "Simtec I2C", sizeof(VAR_12->adap.name));

 VAR_12->bit.data = VAR_12;
 VAR_12->bit.setsda = VAR_10;
 VAR_12->bit.setscl = VAR_9;
 VAR_12->bit.getsda = VAR_8;
 VAR_12->bit.getscl = VAR_7;
 VAR_12->bit.timeout = VAR_4;
 VAR_12->bit.udelay = 20;

 VAR_15 = FUNC_1(&VAR_12->adap);
 if (VAR_15)
  goto err_all;

 return 0;

 err_all:
 FUNC_3(VAR_12->reg);

 err_res:
 FUNC_8(VAR_12->ioarea);
 FUNC_4(VAR_12->ioarea);

 err:
 FUNC_4(VAR_12);
 return VAR_15;
}
