
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ds1307 {int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct ds1307* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, unsigned int VAR_6, unsigned long VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_4(VAR_5);
 struct ds1307 *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;

 switch (VAR_6) {
 case 129:
  if (!FUNC_3(VAR_4, &VAR_9->flags))
   return -VAR_3;

  VAR_10 = FUNC_1(VAR_8, VAR_1);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 &= ~VAR_0;

  VAR_10 = FUNC_2(VAR_8,
      VAR_1, VAR_10);
  if (VAR_10 < 0)
   return VAR_10;

  break;

 case 128:
  if (!FUNC_3(VAR_4, &VAR_9->flags))
   return -VAR_3;

  VAR_10 = FUNC_1(VAR_8, VAR_1);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 |= VAR_0;

  VAR_10 = FUNC_2(VAR_8,
      VAR_1, VAR_10);
  if (VAR_10 < 0)
   return VAR_10;

  break;

 default:
  return -VAR_2;
 }

 return 0;
}
