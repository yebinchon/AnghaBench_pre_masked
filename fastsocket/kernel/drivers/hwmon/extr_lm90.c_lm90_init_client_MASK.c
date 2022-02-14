
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm90_data {scalar_t__ kind; int flags; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct lm90_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_6)
{
 u8 VAR_7, VAR_8;
 struct lm90_data *VAR_9 = FUNC_1(VAR_6);




 FUNC_2(VAR_6, VAR_3,
      5);
 if (FUNC_3(VAR_6, VAR_1, &VAR_7) < 0) {
  FUNC_0(&VAR_6->dev, "Initialization failed!\n");
  return;
 }
 VAR_8 = VAR_7;


 if (VAR_9->kind == VAR_4) {
  if (VAR_7 & 0x04)
   VAR_9->flags |= VAR_0;
 }






 if (VAR_9->kind == VAR_5) {
  VAR_7 |= 0x18;
 }

 VAR_7 &= 0xBF;
 if (VAR_7 != VAR_8)
  FUNC_2(VAR_6, VAR_2, VAR_7);
}
