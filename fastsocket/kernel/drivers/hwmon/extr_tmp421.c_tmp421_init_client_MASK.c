
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4)
{
 int VAR_5, VAR_6;


 FUNC_3(VAR_4, VAR_3, 0x05);


 VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "Could not read configuration"
    " register (%d)\n", VAR_5);
  return -VAR_0;
 }

 VAR_6 = VAR_5;
 VAR_5 &= ~VAR_2;

 if (VAR_5 != VAR_6) {
  FUNC_1(&VAR_4->dev, "Enable monitoring chip\n");
  FUNC_3(VAR_4, VAR_1, VAR_5);
 }

 return 0;
}
