
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct asb100_data {int lock; struct i2c_client** lm75; } ;


 int VAR_0 ;
 struct asb100_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (struct i2c_client*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct i2c_client *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct asb100_data *VAR_4 = FUNC_0(VAR_1);
 struct i2c_client *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_4->lock);

 VAR_6 = (VAR_2 >> 8) & 0x0f;
 if (VAR_6 > 2)

  FUNC_1(VAR_1, VAR_0, VAR_6);

 if (VAR_6 == 0 || VAR_6 > 2) {
  FUNC_1(VAR_1, VAR_2 & 0xff, VAR_3 & 0xff);
 } else {

  VAR_5 = VAR_4->lm75[VAR_6 - 1];


  switch (VAR_2 & 0xff) {
  case 0x52:
   FUNC_1(VAR_5, 1, VAR_3 & 0xff);
   break;
  case 0x53:
   FUNC_2(VAR_5, 2, FUNC_5(VAR_3));
   break;
  case 0x55:
   FUNC_2(VAR_5, 3, FUNC_5(VAR_3));
   break;
  }
 }

 if (VAR_6 > 2)
  FUNC_1(VAR_1, VAR_0, 0);

 FUNC_4(&VAR_4->lock);
}
