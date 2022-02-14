
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm87_data {int channel; int config; } ;
struct TYPE_2__ {scalar_t__ platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 struct lm87_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct i2c_client *VAR_5)
{
 struct lm87_data *VAR_6 = FUNC_4(VAR_5);

 if (VAR_5->dev.platform_data) {
  VAR_6->channel = *(u8 *)VAR_5->dev.platform_data;
  FUNC_6(VAR_5,
     VAR_1, VAR_6->channel);
 } else {
  VAR_6->channel = FUNC_5(VAR_5, VAR_1);
 }
 VAR_6->config = FUNC_5(VAR_5, VAR_2) & 0x6F;

 if (!(VAR_6->config & 0x01)) {
  int VAR_7;


  for (VAR_7 = 1; VAR_7 < 6; VAR_7++) {
   FUNC_6(VAR_5, FUNC_3(VAR_7), 0x00);
   FUNC_6(VAR_5, FUNC_2(VAR_7), 0xFF);
  }
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   FUNC_6(VAR_5, VAR_3[VAR_7], 0x7F);
   FUNC_6(VAR_5, VAR_4[VAR_7], 0x00);
   FUNC_6(VAR_5, FUNC_1(VAR_7), 0x00);
   FUNC_6(VAR_5, FUNC_0(VAR_7), 0xFF);
  }
  if (VAR_6->channel & VAR_0) {
   FUNC_6(VAR_5, VAR_3[2], 0x7F);
   FUNC_6(VAR_5, VAR_4[2], 0x00);
  } else {
   FUNC_6(VAR_5, FUNC_3(0), 0x00);
   FUNC_6(VAR_5, FUNC_2(0), 0xFF);
  }
 }


 if ((VAR_6->config & 0x09) != 0x01)
  FUNC_6(VAR_5, VAR_2,
     (VAR_6->config & 0x77) | 0x01);
}
