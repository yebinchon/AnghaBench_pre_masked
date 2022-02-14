
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct twl4030_platform_data {scalar_t__ irq_base; scalar_t__ irq_end; scalar_t__ power; } ;
struct twl4030_client {int xfer_lock; struct i2c_client* client; scalar_t__ address; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_4__ {struct twl4030_platform_data* platform_data; } ;
struct i2c_client {scalar_t__ irq; TYPE_1__ dev; int name; int adapter; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct twl4030_platform_data*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct i2c_client* FUNC_5 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int) ;
 struct twl4030_client* VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct i2c_client*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(struct i2c_client *VAR_8, const struct i2c_device_id *VAR_9)
{
 int VAR_10;
 unsigned VAR_11;
 struct twl4030_platform_data *VAR_12 = VAR_8->dev.platform_data;

 if (!VAR_12) {
  FUNC_2(&VAR_8->dev, "no platform data?\n");
  return -VAR_1;
 }

 if (FUNC_4(VAR_8->adapter, VAR_4) == 0) {
  FUNC_2(&VAR_8->dev, "can't talk I2C?\n");
  return -VAR_2;
 }

 if (VAR_6) {
  FUNC_2(&VAR_8->dev, "driver is already in use\n");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  struct twl4030_client *VAR_13 = &VAR_7[VAR_11];

  VAR_13->address = VAR_8->addr + VAR_11;
  if (VAR_11 == 0)
   VAR_13->client = VAR_8;
  else {
   VAR_13->client = FUNC_5(VAR_8->adapter,
     VAR_13->address);
   if (!VAR_13->client) {
    FUNC_3(&VAR_8->dev,
     "can't attach client %d\n", VAR_11);
    VAR_10 = -VAR_3;
    goto fail;
   }
   FUNC_7(VAR_13->client->name, VAR_9->name,
     sizeof(VAR_13->client->name));
  }
  FUNC_6(&VAR_13->xfer_lock);
 }
 VAR_6 = 1;


 FUNC_1(&VAR_8->dev);


 if (FUNC_10() && VAR_12->power)
  FUNC_8(VAR_12->power);


 if (VAR_8->irq
   && VAR_12->irq_base
   && VAR_12->irq_end > VAR_12->irq_base) {
  VAR_10 = FUNC_11(VAR_8->irq, VAR_12->irq_base, VAR_12->irq_end);
  if (VAR_10 < 0)
   goto fail;
 }

 VAR_10 = FUNC_0(VAR_12, VAR_9->driver_data);
fail:
 if (VAR_10 < 0)
  FUNC_9(VAR_8);
 return VAR_10;
}
