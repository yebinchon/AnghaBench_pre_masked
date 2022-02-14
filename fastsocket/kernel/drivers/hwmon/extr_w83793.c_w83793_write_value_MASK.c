
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w83793_data {int bank; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 struct w83793_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct w83793_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 u8 VAR_6 = VAR_2 >> 8;

 VAR_6 |= VAR_4->bank & 0xfc;
 if (VAR_4->bank != VAR_6) {
  if ((VAR_5 = FUNC_2
      (VAR_1, VAR_0, VAR_6)) >= 0)
   VAR_4->bank = VAR_6;
  else {
   FUNC_0(&VAR_1->dev,
    "set bank to %d failed, fall back "
    "to bank %d, write reg 0x%x error\n",
    VAR_6, VAR_4->bank, VAR_2);
   goto END;
  }
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2 & 0xff, VAR_3);
END:
 return VAR_5;
}
