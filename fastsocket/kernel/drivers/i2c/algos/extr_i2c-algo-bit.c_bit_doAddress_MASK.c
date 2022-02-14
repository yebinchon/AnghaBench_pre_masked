
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {unsigned short flags; int addr; } ;
struct i2c_algo_bit_data {int dummy; } ;
struct i2c_adapter {int retries; int dev; struct i2c_algo_bit_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_0 (int,int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*,int) ;
 int FUNC_3 (struct i2c_algo_bit_data*) ;
 int FUNC_4 (struct i2c_adapter*,unsigned char,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_6, struct i2c_msg *VAR_7)
{
 unsigned short VAR_8 = VAR_7->flags;
 unsigned short VAR_9 = VAR_7->flags & VAR_2;
 struct i2c_algo_bit_data *VAR_10 = VAR_6->algo_data;

 unsigned char VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = VAR_9 ? 0 : VAR_6->retries;

 if (VAR_8 & VAR_5) {

  VAR_11 = 0xf0 | ((VAR_7->addr >> 7) & 0x03);
  FUNC_0(2, &VAR_6->dev, "addr0: %d\n", VAR_11);

  VAR_12 = FUNC_4(VAR_6, VAR_11, VAR_13);
  if ((VAR_12 != 1) && !VAR_9) {
   FUNC_1(&VAR_6->dev,
    "died at extended address code\n");
   return -VAR_1;
  }

  VAR_12 = FUNC_2(VAR_6, VAR_7->addr & 0x7f);
  if ((VAR_12 != 1) && !VAR_9) {

   FUNC_1(&VAR_6->dev, "died at 2nd address code\n");
   return -VAR_1;
  }
  if (VAR_8 & VAR_3) {
   FUNC_0(3, &VAR_6->dev, "emitting repeated "
    "start condition\n");
   FUNC_3(VAR_10);

   VAR_11 |= 0x01;
   VAR_12 = FUNC_4(VAR_6, VAR_11, VAR_13);
   if ((VAR_12 != 1) && !VAR_9) {
    FUNC_1(&VAR_6->dev,
     "died at repeated address code\n");
    return -VAR_1;
   }
  }
 } else {
  VAR_11 = VAR_7->addr << 1;
  if (VAR_8 & VAR_3)
   VAR_11 |= 1;
  if (VAR_8 & VAR_4)
   VAR_11 ^= 1;
  VAR_12 = FUNC_4(VAR_6, VAR_11, VAR_13);
  if ((VAR_12 != 1) && !VAR_9)
   return -VAR_0;
 }

 return 0;
}
