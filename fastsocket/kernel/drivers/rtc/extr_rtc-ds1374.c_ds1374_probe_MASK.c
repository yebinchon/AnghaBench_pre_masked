
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; int name; } ;
struct ds1374 {int rtc; int mutex; int work; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct i2c_client*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,struct ds1374*) ;
 int FUNC_7 (struct ds1374*) ;
 struct ds1374* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,int ,int ,char*,struct i2c_client*) ;
 int FUNC_11 (int ,int *,int *,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct ds1374 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_8(sizeof(struct ds1374), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->client = VAR_6;
 FUNC_6(VAR_6, VAR_8);

 FUNC_0(&VAR_8->work, VAR_5);
 FUNC_9(&VAR_8->mutex);

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  goto out_free;

 if (VAR_6->irq > 0) {
  VAR_9 = FUNC_10(VAR_6->irq, VAR_3, 0,
                    "ds1374", VAR_6);
  if (VAR_9) {
   FUNC_3(&VAR_6->dev, "unable to request IRQ\n");
   goto out_free;
  }
 }

 VAR_8->rtc = FUNC_11(VAR_6->name, &VAR_6->dev,
                                   &VAR_4, VAR_2);
 if (FUNC_1(VAR_8->rtc)) {
  VAR_9 = FUNC_2(VAR_8->rtc);
  FUNC_3(&VAR_6->dev, "unable to register the class device\n");
  goto out_irq;
 }

 return 0;

out_irq:
 if (VAR_6->irq > 0)
  FUNC_5(VAR_6->irq, VAR_6);

out_free:
 FUNC_6(VAR_6, ((void*)0));
 FUNC_7(VAR_8);
 return VAR_9;
}
