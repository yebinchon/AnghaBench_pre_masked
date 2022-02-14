
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ds1374 {int mutex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct ds1374* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, unsigned int VAR_6, unsigned long VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_5(VAR_5);
 struct ds1374 *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = -VAR_4;

 FUNC_3(&VAR_9->mutex);

 switch (VAR_6) {
 case 129:
  VAR_10 = FUNC_1(VAR_8, VAR_0);
  if (VAR_10 < 0)
   goto out;

  VAR_10 &= ~VAR_2;

  VAR_10 = FUNC_2(VAR_8, VAR_0, VAR_10);
  if (VAR_10 < 0)
   goto out;

  break;

 case 128:
  VAR_10 = FUNC_1(VAR_8, VAR_0);
  if (VAR_10 < 0)
   goto out;

  VAR_10 |= VAR_2 | VAR_1;
  VAR_10 &= ~VAR_3;

  VAR_10 = FUNC_2(VAR_8, VAR_0, VAR_10);
  if (VAR_10 < 0)
   goto out;

  break;
 }

out:
 FUNC_4(&VAR_9->mutex);
 return VAR_10;
}
