
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_device {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_2 (int ) ;
 int FUNC_3 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_4,
     unsigned long VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_2(FUNC_3(VAR_4));


 if (VAR_5 & ~VAR_1)
  return -VAR_0;

 if (VAR_5 & VAR_3)
  FUNC_0(VAR_6, VAR_2, 0x8000);
 else
  FUNC_1(VAR_6, VAR_2, 0x8000);

 return 0;
}
