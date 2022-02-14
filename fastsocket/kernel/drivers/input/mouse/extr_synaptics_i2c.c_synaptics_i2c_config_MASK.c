
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_12)
{
 int VAR_13, VAR_14;
 u8 VAR_15;


 VAR_13 = FUNC_1(VAR_12, VAR_0, 0xc1);
 if (VAR_13)
  return VAR_13;


 VAR_15 = (VAR_10) ? 0 : VAR_3 | VAR_4;
 VAR_13 = FUNC_1(VAR_12, VAR_2, VAR_15);
 if (VAR_13)
  return VAR_13;

 VAR_14 = FUNC_0(VAR_12, VAR_1);

 VAR_14 |= VAR_8 ? 1 << VAR_5 : 0;

 VAR_14 |= VAR_11 ? 1 << VAR_7 : 0;

 VAR_14 |= VAR_9 ? 1 << VAR_6 : 0;
 VAR_13 = FUNC_1(VAR_12, VAR_1, VAR_14);
 if (VAR_13)
  return VAR_13;

 return 0;
}
