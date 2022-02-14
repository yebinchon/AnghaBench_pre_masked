
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct i2c_client {scalar_t__ irq; } ;
struct ds1374 {int mutex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,scalar_t__*,int ,int) ;
 struct ds1374* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int *) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7, struct rtc_wkalrm *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_6(VAR_7);
 struct ds1374 *VAR_10 = FUNC_1(VAR_9);
 u32 VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 if (VAR_9->irq <= 0)
  return -VAR_6;

 FUNC_3(&VAR_10->mutex);

 VAR_13 = VAR_15 = FUNC_2(VAR_9, VAR_0);
 if (VAR_15 < 0)
  goto out;

 VAR_14 = VAR_15 = FUNC_2(VAR_9, VAR_2);
 if (VAR_15 < 0)
  goto out;

 VAR_15 = FUNC_0(VAR_9, &VAR_11, VAR_4, 4);
 if (VAR_15)
  goto out;

 VAR_15 = FUNC_0(VAR_9, &VAR_12, VAR_5, 3);
 if (VAR_15)
  goto out;

 FUNC_5(VAR_11 + VAR_12, &VAR_8->time);
 VAR_8->enabled = !!(VAR_13 & VAR_1);
 VAR_8->pending = !!(VAR_14 & VAR_3);

out:
 FUNC_4(&VAR_10->mutex);
 return VAR_15;
}
