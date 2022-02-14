
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sh_mobile_i2c_data {int sr; int dev; int wait; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_mobile_i2c_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sh_mobile_i2c_data*) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,char*) ;
 struct sh_mobile_i2c_data* FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (struct sh_mobile_i2c_data*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sh_mobile_i2c_data*,struct i2c_msg*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_7,
         struct i2c_msg *VAR_8,
         int VAR_9)
{
 struct sh_mobile_i2c_data *VAR_10 = FUNC_5(VAR_7);
 struct i2c_msg *VAR_11;
 int VAR_12 = 0;
 u_int8_t VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_1(VAR_10);


 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_11 = &VAR_8[VAR_14];

  VAR_12 = FUNC_8(VAR_10, VAR_11);
  if (VAR_12)
   break;

  FUNC_6(VAR_10, VAR_5, 0);


  VAR_15 = FUNC_10(VAR_10->wait,
           VAR_10->sr & (VAR_4 | VAR_6),
           5 * VAR_1);
  if (!VAR_15)
   FUNC_4(VAR_10->dev, "Transfer request timed out\n");

  VAR_16 = 1000;
again:
  VAR_13 = FUNC_7(FUNC_0(VAR_10));

  FUNC_3(VAR_10->dev, "val 0x%02x pd->sr 0x%02x\n", VAR_13, VAR_10->sr);





  if (VAR_13 & VAR_3) {
   FUNC_9(10);
   if (VAR_16--)
    goto again;

   VAR_12 = -VAR_0;
   FUNC_4(VAR_10->dev, "Polling timed out\n");
   break;
  }


  if ((VAR_13 | VAR_10->sr) & (VAR_4 | VAR_2)) {
   VAR_12 = -VAR_0;
   break;
  }
 }

 FUNC_2(VAR_10);

 if (!VAR_12)
  VAR_12 = VAR_9;
 return VAR_12;
}
