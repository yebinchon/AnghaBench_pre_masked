
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct sn9c102_device* VAR_2,
       const struct v4l2_control* VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->id) {
 case 129:
  VAR_4 += FUNC_0(VAR_2, 0x26, VAR_3->value >> 8);
  VAR_4 += FUNC_0(VAR_2, 0x27, VAR_3->value & 0xff);
  break;
 case 128:
  VAR_4 += FUNC_0(VAR_2, 0x31, 0x3f - VAR_3->value);
  break;
 case 130:
  VAR_4 += FUNC_0(VAR_2, 0x33, 0x3f - VAR_3->value);
  break;
 case 133:
  VAR_4 += FUNC_0(VAR_2, 0x32, 0x3f - VAR_3->value);
  break;
 case 131:
  VAR_4 += FUNC_0(VAR_2, 0x30, VAR_3->value);
  break;
 case 132:
  VAR_4 += FUNC_0(VAR_2, 0x34, VAR_3->value);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4 ? -VAR_1 : 0;
}
