
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct i2c_client {TYPE_1__* adapter; struct device dev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const*,int,...) ;
 int FUNC_1 (struct device*,char*,char const*,int) ;
 scalar_t__ FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u8 FUNC_5(struct i2c_client *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4, VAR_5;
 struct device *VAR_6;
 const char *VAR_7;



 if (FUNC_2(VAR_1)) {
  VAR_6 = &VAR_1->dev;
  VAR_7 = "";
 } else {
  VAR_6 = &VAR_1->adapter->dev;
  VAR_7 = "w83l785ts: ";
 }




 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++) {
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  if (VAR_4 >= 0) {
   FUNC_0(VAR_6, "%sRead 0x%02x from register 0x%02x.\n",
    VAR_7, VAR_4, VAR_2);
   return VAR_4;
  }
  FUNC_0(VAR_6, "%sRead failed, will retry in %d.\n", VAR_7, VAR_5);
  FUNC_4(VAR_5);
 }

 FUNC_1(VAR_6, "%sCouldn't read value from register 0x%02x.\n", VAR_7,
  VAR_2);
 return VAR_3;
}
