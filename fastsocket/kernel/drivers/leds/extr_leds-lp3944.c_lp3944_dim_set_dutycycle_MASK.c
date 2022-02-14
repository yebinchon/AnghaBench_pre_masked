
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct i2c_client*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_6, u8 VAR_7,
        u8 VAR_8)
{
 u8 VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (VAR_7 == VAR_1)
  VAR_9 = VAR_4;
 else if (VAR_7 == VAR_2)
  VAR_9 = VAR_5;
 else
  return -VAR_0;


 if (VAR_8 > VAR_3)
  return -VAR_0;

 VAR_10 = (VAR_8 * 255) / VAR_3;

 VAR_11 = FUNC_0(VAR_6, VAR_9, VAR_10);

 return VAR_11;
}
