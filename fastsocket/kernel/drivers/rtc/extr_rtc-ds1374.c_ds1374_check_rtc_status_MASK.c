
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 & VAR_5)
  FUNC_0(&VAR_6->dev,
           "oscillator discontinuity flagged, "
           "time unreliable\n");

 VAR_9 &= ~(VAR_5 | VAR_4);

 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_9);
 if (VAR_7 < 0)
  return VAR_7;






 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 &= ~(VAR_2 | VAR_1);
 return FUNC_2(VAR_6, VAR_0, VAR_8);
}
