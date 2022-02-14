
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int udelay; } ;
struct i2c_adapter {int dev; struct i2c_algo_bit_data* algo_data; } ;


 int FUNC_0 (int,int *,char*,...) ;
 int FUNC_1 (struct i2c_adapter*,unsigned char) ;
 int FUNC_2 (struct i2c_algo_bit_data*) ;
 int FUNC_3 (struct i2c_algo_bit_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_0,
         unsigned char VAR_1, int VAR_2)
{
 struct i2c_algo_bit_data *VAR_3 = VAR_0->algo_data;
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 <= VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_0, VAR_1);
  if (VAR_5 == 1 || VAR_4 == VAR_2)
   break;
  FUNC_0(3, &VAR_0->dev, "emitting stop condition\n");
  FUNC_3(VAR_3);
  FUNC_4(VAR_3->udelay);
  FUNC_5();
  FUNC_0(3, &VAR_0->dev, "emitting start condition\n");
  FUNC_2(VAR_3);
 }
 if (VAR_4 && VAR_5)
  FUNC_0(1, &VAR_0->dev, "Used %d tries to %s client at "
   "0x%02x: %s\n", VAR_4 + 1,
   VAR_1 & 1 ? "read from" : "write to", VAR_1 >> 1,
   VAR_5 == 1 ? "success" : "failed, timeout?");
 return VAR_5;
}
