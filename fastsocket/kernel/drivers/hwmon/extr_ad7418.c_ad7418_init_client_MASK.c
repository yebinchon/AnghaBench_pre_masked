
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct ad7418_data {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct ad7418_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_4)
{
 struct ad7418_data *VAR_5 = FUNC_2(VAR_4);

 int VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->dev, "cannot read configuration register\n");
 } else {
  FUNC_1(&VAR_4->dev, "configuring for mode 1\n");
  FUNC_4(VAR_4, VAR_0, VAR_6 & 0xfe);

  if (VAR_5->type == VAR_2 || VAR_5->type == VAR_3)
   FUNC_4(VAR_4,
      VAR_1, 0x00);
 }
}
