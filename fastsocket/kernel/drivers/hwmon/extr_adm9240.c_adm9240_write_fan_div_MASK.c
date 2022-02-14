
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_1, int VAR_2,
  u8 VAR_3)
{
 u8 VAR_4, VAR_5, VAR_6 = (VAR_2 + 2) * 2;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 VAR_5 = (VAR_4 >> VAR_6) & 3;
 VAR_4 &= ~(3 << VAR_6);
 VAR_4 |= (VAR_3 << VAR_6);
 FUNC_2(VAR_1, VAR_0, VAR_4);
 FUNC_0(&VAR_1->dev, "fan%d clock divider changed from %u "
   "to %u\n", VAR_2 + 1, 1 << VAR_5, 1 << VAR_3);
}
