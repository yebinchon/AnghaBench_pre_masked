
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* driver; struct ixp2000_i2c_pins* platform_data; } ;
struct platform_device {TYPE_5__ dev; } ;
struct ixp2000_i2c_pins {int sda_pin; int scl_pin; } ;
struct TYPE_8__ {TYPE_5__* parent; } ;
struct TYPE_9__ {TYPE_3__ dev; TYPE_2__* algo_data; int name; } ;
struct TYPE_7__ {int udelay; int timeout; int getscl; int getsda; int setscl; int setsda; struct ixp2000_i2c_pins* data; } ;
struct ixp2000_i2c_data {TYPE_4__ adapter; TYPE_2__ algo_data; struct ixp2000_i2c_pins* gpio_pins; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct ixp2000_i2c_data*) ;
 struct ixp2000_i2c_data* FUNC_5 (int,int ) ;
 int FUNC_6 (struct platform_device*,struct ixp2000_i2c_data*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 int VAR_9;
 struct ixp2000_i2c_pins *VAR_10 = VAR_8->dev.platform_data;
 struct ixp2000_i2c_data *VAR_11 =
  FUNC_5(sizeof(struct ixp2000_i2c_data), VAR_1);

 if (!VAR_11)
  return -VAR_0;
 VAR_11->gpio_pins = VAR_10;

 VAR_11->algo_data.data = VAR_10;
 VAR_11->algo_data.setsda = VAR_7;
 VAR_11->algo_data.setscl = VAR_6;
 VAR_11->algo_data.getsda = VAR_5;
 VAR_11->algo_data.getscl = VAR_4;
 VAR_11->algo_data.udelay = 6;
 VAR_11->algo_data.timeout = VAR_3;

 FUNC_7(VAR_11->adapter.name, VAR_8->dev.driver->name,
  sizeof(VAR_11->adapter.name));
 VAR_11->adapter.algo_data = &VAR_11->algo_data,

 VAR_11->adapter.dev.parent = &VAR_8->dev;

 FUNC_1(VAR_10->sda_pin, VAR_2);
 FUNC_1(VAR_10->scl_pin, VAR_2);
 FUNC_2(VAR_10->scl_pin, 0);
 FUNC_2(VAR_10->sda_pin, 0);

 if ((VAR_9 = FUNC_3(&VAR_11->adapter)) != 0) {
  FUNC_0(&VAR_8->dev, "Could not install, error %d\n", VAR_9);
  FUNC_4(VAR_11);
  return VAR_9;
 }

 FUNC_6(VAR_8, VAR_11);

 return 0;
}
