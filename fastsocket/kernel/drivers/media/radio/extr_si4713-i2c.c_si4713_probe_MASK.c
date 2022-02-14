
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si4713_device {int sd; int work; int mutex; int platform_data; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int platform_data; } ;
struct i2c_client {scalar_t__ irq; int name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (scalar_t__,struct si4713_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct si4713_device*) ;
 struct si4713_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ,int,int ,struct si4713_device*) ;
 int VAR_6 ;
 int FUNC_7 (struct si4713_device*) ;
 int VAR_7 ;
 int FUNC_8 (int,int ,int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,struct i2c_client*,int *) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_8,
     const struct i2c_device_id *VAR_9)
{
 struct si4713_device *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(sizeof *VAR_10, VAR_2);
 if (!VAR_10) {
  FUNC_0(&VAR_8->dev, "Failed to alloc video device.\n");
  VAR_11 = -VAR_1;
  goto exit;
 }

 VAR_10->platform_data = VAR_8->dev.platform_data;
 if (!VAR_10->platform_data) {
  FUNC_9(&VAR_10->sd, "No platform data registered.\n");
  VAR_11 = -VAR_0;
  goto free_sdev;
 }

 FUNC_10(&VAR_10->sd, VAR_8, &VAR_7);

 FUNC_5(&VAR_10->mutex);
 FUNC_2(&VAR_10->work);

 if (VAR_8->irq) {
  VAR_11 = FUNC_6(VAR_8->irq,
   VAR_6, VAR_4 | VAR_3,
   VAR_8->name, VAR_10);
  if (VAR_11 < 0) {
   FUNC_9(&VAR_10->sd, "Could not request IRQ\n");
   goto free_sdev;
  }
  FUNC_8(1, VAR_5, &VAR_10->sd, "IRQ requested.\n");
 } else {
  FUNC_11(&VAR_10->sd, "IRQ not configured. Using timeouts.\n");
 }

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11 < 0) {
  FUNC_9(&VAR_10->sd, "Failed to probe device information.\n");
  goto free_irq;
 }

 return 0;

free_irq:
 if (VAR_8->irq)
  FUNC_1(VAR_8->irq, VAR_10);
free_sdev:
 FUNC_3(VAR_10);
exit:
 return VAR_11;
}
