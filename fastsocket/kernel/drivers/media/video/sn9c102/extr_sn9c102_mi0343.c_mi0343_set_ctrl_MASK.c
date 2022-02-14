
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_control {int id; int value; } ;
struct sn9c102_sensor {int i2c_slave_id; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







 struct sn9c102_sensor* FUNC_0 (struct sn9c102_device*) ;
 int FUNC_1 (struct sn9c102_device*,struct sn9c102_sensor*,int,int ,int,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sn9c102_device* VAR_2,
      const struct v4l2_control* VAR_3)
{
 struct sn9c102_sensor* VAR_4 = FUNC_0(VAR_2);
 u16 VAR_5 = 0;
 int VAR_6 = 0;

 switch (VAR_3->id) {
 case 131:
 case 129:
 case 133:
 case 134:
  if (VAR_3->value <= (0x3f-0x10))
   VAR_5 = 0x10 + VAR_3->value;
  else if (VAR_3->value <= ((0x3f-0x10) + (0x7f-0x60)))
   VAR_5 = 0x60 + (VAR_3->value - (0x3f-0x10));
  else
   VAR_5 = 0xe0 + (VAR_3->value - (0x3f-0x10) - (0x7f-0x60));
  break;
 }

 switch (VAR_3->id) {
 case 132:
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x09, VAR_3->value, 0x00,
       0, 0);
  break;
 case 131:
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x35, VAR_5 >> 8, VAR_5 & 0xff,
       0, 0);
  break;
 case 130:
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x20, VAR_3->value ? 0x40:0x00,
       VAR_3->value ? 0x20:0x00,
       0, 0);
  break;
 case 128:
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x20, VAR_3->value ? 0x80:0x00,
       VAR_3->value ? 0x80:0x00,
       0, 0);
  break;
 case 129:
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x2d, VAR_5 >> 8, VAR_5 & 0xff,
       0, 0);
  break;
 case 133:
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x2c, VAR_5 >> 8, VAR_5 & 0xff,
       0, 0);
  break;
 case 134:
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x2b, VAR_5 >> 8, VAR_5 & 0xff,
       0, 0);
  VAR_6 += FUNC_1(VAR_2, VAR_4, 4, VAR_4->i2c_slave_id,
       0x2e, VAR_5 >> 8, VAR_5 & 0xff,
       0, 0);
  break;
 default:
  return -VAR_0;
 }

 return VAR_6 ? -VAR_1 : 0;
}
