
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_control {int id; int value; } ;
struct sn9c102_sensor {int i2c_slave_id; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct sn9c102_sensor* FUNC_0 (struct sn9c102_device*) ;
 int FUNC_1 (struct sn9c102_device*,struct sn9c102_sensor*,int ,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct sn9c102_device *VAR_2,
       struct v4l2_control *VAR_3)
{
 struct sn9c102_sensor *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5[2];
 int VAR_6 = 0;

 switch (VAR_3->id) {
 case 128:
  if (FUNC_1(VAR_2, VAR_4, VAR_4->i2c_slave_id, 0x20, 2,
          VAR_5) < 0)
   return -VAR_1;
  VAR_3->value = VAR_5[1] & 0x80 ? 1 : 0;
  return 0;
 default:
  return -VAR_0;
 }

 return VAR_6 ? -VAR_1 : 0;
}
