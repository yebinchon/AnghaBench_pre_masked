
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dme1737_data {scalar_t__ addr; struct i2c_client* client; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_3(const struct dme1737_data *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client;
 s32 VAR_4 = 0;

 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);

  if (VAR_4 < 0) {
   FUNC_0(&VAR_3->dev, "Write to register "
     "0x%02x failed! Please report to the driver "
     "maintainer.\n", VAR_1);
  }
 } else {
  FUNC_2(VAR_1, VAR_0->addr);
  FUNC_2(VAR_2, VAR_0->addr + 1);
 }

 return VAR_4;
}
