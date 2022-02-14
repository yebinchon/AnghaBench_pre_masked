
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ FUNC_0 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct sn9c102_device* VAR_2,
       const struct v4l2_control* VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->id) {
 case 130:
  VAR_4 += FUNC_0(VAR_2, 0x03, VAR_3->value >> 4);
  VAR_4 += FUNC_0(VAR_2, 0x04, VAR_3->value & 0x0f);
  break;
 case 128:
  VAR_4 += FUNC_0(VAR_2, 0x0c, VAR_3->value);
  break;
 case 132:
  VAR_4 += FUNC_0(VAR_2, 0x09, VAR_3->value);
  break;
 case 129:
  VAR_4 += FUNC_0(VAR_2, 0x0e, VAR_3->value);
  break;
 case 131:
  VAR_4 += FUNC_0(VAR_2, 0x0f, VAR_3->value);
  break;
 case 133:
  VAR_4 += FUNC_0(VAR_2, 0x0a, VAR_3->value >> 1);
  VAR_4 += FUNC_0(VAR_2, 0x0b, VAR_3->value >> 1);
  break;
 case 134:
  VAR_4 += FUNC_0(VAR_2, 0x08, VAR_3->value << 3);
  break;
 default:
  return -VAR_0;
 }
 VAR_4 += FUNC_0(VAR_2, 0x13, 0x01);

 return VAR_4 ? -VAR_1 : 0;
}
