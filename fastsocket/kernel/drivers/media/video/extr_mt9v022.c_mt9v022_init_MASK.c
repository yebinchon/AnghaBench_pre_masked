
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9v022 {int chip_control; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct mt9v022* FUNC_3 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8)
{
 struct mt9v022 *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;






 VAR_9->chip_control |= 0x10;
 VAR_10 = FUNC_2(VAR_8, VAR_3, VAR_9->chip_control);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_8, VAR_6, 0x300);


 if (!VAR_10)

  VAR_10 = FUNC_1(VAR_8, VAR_0, 0x3);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_8, VAR_1, 16);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_8, VAR_7, 480);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_8, VAR_5, 480);
 if (!VAR_10)

  VAR_10 = FUNC_0(VAR_8, VAR_2, 1);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_8, VAR_4, 0);

 return VAR_10;
}
