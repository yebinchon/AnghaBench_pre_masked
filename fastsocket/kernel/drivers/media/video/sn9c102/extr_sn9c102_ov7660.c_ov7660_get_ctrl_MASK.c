
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct sn9c102_device*,int) ;
 void* FUNC_1 (struct sn9c102_device*,int) ;

__attribute__((used)) static int FUNC_2(struct sn9c102_device* VAR_2,
      struct v4l2_control* VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->id) {
 case 130:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x10)) < 0)
   return -VAR_1;
  break;
 case 131:
  if ((VAR_3->value = FUNC_1(VAR_2, 0x02)) < 0)
   return -VAR_1;
  VAR_3->value = (VAR_3->value & 0x04) ? 1 : 0;
  break;
 case 128:
  if ((VAR_3->value = FUNC_1(VAR_2, 0x05)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x7f;
  break;
 case 132:
  if ((VAR_3->value = FUNC_1(VAR_2, 0x06)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x7f;
  break;
 case 134:
  if ((VAR_3->value = FUNC_1(VAR_2, 0x07)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x7f;
  break;
 case 135:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x3b)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x08;
  break;
 case 129:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x00)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x1f;
  break;
 case 133:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x13)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x01;
  break;
 default:
  return -VAR_0;
 }

 return VAR_4 ? -VAR_1 : 0;
}
