
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct soc_camera_device {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct v4l2_subdev* FUNC_1 (struct soc_camera_device*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct soc_camera_device *VAR_7,
    unsigned long VAR_8)
{
 struct v4l2_subdev *VAR_9 = FUNC_1(VAR_7);
 struct i2c_client *VAR_10 = FUNC_2(VAR_9);
 u8 VAR_11 = VAR_6 | VAR_1;







 if (VAR_8 & VAR_3)
  VAR_11 |= VAR_0;

 if (VAR_8 & VAR_4)
  VAR_11 |= VAR_5;

 return FUNC_0(VAR_10, VAR_2, VAR_11);
}
